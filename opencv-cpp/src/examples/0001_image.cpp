#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;

/*
  This example will load an image.
*/
void ex_0001_load_image(void) {
  string image_path = samples::findFile("../files/digital_circuit.png");
  Mat img = imread(image_path, IMREAD_COLOR);

  if (img.empty()) {
    cout << "Could not read the image." << image_path;
  }
}
