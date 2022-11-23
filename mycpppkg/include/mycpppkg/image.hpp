#ifndef IMAGE_HPP_
#define IMAGE_HPP_

#include <opencv2/opencv.hpp>

#include <string>

namespace mycpppkg
{
    /**
     * @brief Read image.
     *
     * @param filename
     * @param show
     * @return bool
     */
    bool readImg(const std::string filename, const bool show = false);

    /**
     * @brief Write image.
     *
     * @param filename
     * @param img
     * @return bool
     */
    bool writeImg(const std::string filename, const cv::Mat &img);
} // namespace mycpppkg

#endif // IMAGE_HPP_