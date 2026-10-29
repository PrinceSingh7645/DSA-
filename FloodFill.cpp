
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& image, int r, int c,
         int oldColor, int newColor) {
    int rows = image.size();
    int cols = image[0].size();

    if (r < 0 || c < 0 || r >= rows || c >= cols)
        return;

    if (image[r][c] != oldColor)
        return;

    image[r][c] = newColor;

    dfs(image, r + 1, c, oldColor, newColor);
    dfs(image, r - 1, c, oldColor, newColor);
    dfs(image, r, c + 1, oldColor, newColor);
    dfs(image, r, c - 1, oldColor, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& image,
                              int sr, int sc, int color) {
    int oldColor = image[sr][sc];

    if (oldColor != color)
        dfs(image, sr, sc, oldColor, color);

    return image;
}

int main() {
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    floodFill(image, 1, 1, 2);

    for (auto row : image) {
        for (int pixel : row)
            cout << pixel << " ";
        cout << endl;
    }

    return 0;
}
