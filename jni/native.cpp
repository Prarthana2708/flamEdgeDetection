#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
    cout << "🧠 Loading input image..." << endl;

    // Make sure input.jpg exists in this same folder
    Mat src = imread("input.jpg", IMREAD_COLOR);
    if (src.empty()) {
        cout << "⚠️  input.jpg not found!" << endl;
        return -1;
    }

    Mat gray, edges;
    cvtColor(src, gray, COLOR_BGR2GRAY);
    Canny(gray, edges, 80, 150);

    imwrite("edge_result.jpg", edges);
    cout << "✅ Edge detection done. Saved as edge_result.jpg" << endl;
    return 0;
}
