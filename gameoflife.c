#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dir.h>

void GameOfLife(int **life, int h, int w) {
    int Nneighbors;
    int Newcell[h][w];
    int x, y;
    int check = 0;
    for (y = 0; y < h; y++) {

        for (x = 0; x < w; x++) {

            Newcell[y][x] = life[y][x];
        }
    }

    for (y = 1; y < h - 1; y++) {
        for (x = 1; x < w - 1; x++) {
            Nneighbors = life[y + 1][x - 1] + life[y + 1][x] + life[y + 1][x + 1] + life[y][x - 1] + life[y][x + 1] +
                         life[y - 1][x - 1] + life[y - 1][x] + life[y - 1][x + 1];
            if (Newcell[y][x] == 1) {
                if (Nneighbors > 3)
                    Newcell[y][x] = 0;
                if (Nneighbors < 2)
                    Newcell[y][x] = 0;
                if (Nneighbors == 2)
                    Newcell[y][x] = life[y][x];
                if (Nneighbors == 3)
                    Newcell[y][x] = life[y][x];
            } else {
                if (Nneighbors == 3) {
                    Newcell[y][x] = 1;
                }
            }
            Nneighbors = 0;
        }
    }

    for (y = 0; y < h; y++)
        for (x = 0; x < w; x++) {
            if (life[y][x] == Newcell[y][x]) {
                check++;
            }
            life[y][x] = Newcell[y][x];
        }
    if (check == h * w)
        exit(1);
}

struct BmpImg {
    int Width;
    int Height;
    int Size;
};

int main(int argc, char *argv[]) {
    int i, j = 0;
    int k, l, m;
    struct BmpImg image;
    unsigned char header[54];
    char *dirname;
    FILE *file;

    for (i = 0; i < argc; i++) {
        if (!strcmp("--input", argv[i])) {
            file = fopen(argv[1 + 1], "rb");
        }
        if (!strcmp("--output", argv[i])) {
            dirname = argv[i + 1];
            mkdir(dirname);
        }
    }

    fread(header, 1, 54, file);
    image.Width = header[21] * 256 * 256 * 256 + header[20] * 256 * 256 + header[19] * 256 + header[18];
    image.Height = header[25] * 256 * 256 * 256 + header[24] * 256 * 256 + header[23] * 256 + header[22];
    image.Size = header[5] * 256 * 256 * 256 + header[4] * 256 * 256 + header[3] * 256 + header[2];
    unsigned char imagebyte[image.Size - 54];
    fread(imagebyte, 1, image.Size, file);
    int **img = (int **) malloc(image.Height * sizeof(int *));
    for (i = 0; i < image.Height; i++)
        img[i] = (int *) malloc(image.Width * sizeof(int));
    k = -(image.Width % 4);
    for (i = image.Height - 1; i >= 0; i--) {
        k += (image.Width % 4);
        for (j = 0; j < image.Width; j++) {
            if (imagebyte[k] == 255)
                img[i][j] = 0;
            else
                img[i][j] = 1;
            k += 3;
        }
    }
    GameOfLife(img, image.Height, image.Width);

    free(img);
    return 0;
}