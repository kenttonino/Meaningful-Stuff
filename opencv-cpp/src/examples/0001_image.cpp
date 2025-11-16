/*
  https://docs.opencv.org/4.x/d6/d6d/tutorial_mat_the_basic_image_container.html
*/

#include <filesystem>
#include <iostream>
#include <opencv4/opencv2/core.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgcodecs.hpp>

using namespace std;
using namespace cv;
using namespace std::filesystem;

/*
  This example will load an image.
*/
int ex_0001_load_image(void) {
  string directory_path = current_path().string();
  string relative_image_path = "/src/files/digital_circuit.png";
  string image_path = directory_path + relative_image_path;
  Mat img = imread(image_path, IMREAD_COLOR);

  // Throw error if there is a problem.
  if (img.empty()) {
    cout << "Could not read the image: " << image_path << endl;
    return 1;
  }

  imshow("Display window", img);

  // Wait for a keystroke in the window.
  int k = waitKey(0);

  // Save file if s char is pressend.
  if (k == 's') {
    imwrite(image_path, img);
  }

  return 0;
}
