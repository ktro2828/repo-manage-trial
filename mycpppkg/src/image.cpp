#include "mycpppkg/image.hpp"

namespace mycpppkg
{
    bool readImg(const std::string filename, const bool show)
    {
        cv::Mat img = cv::imread(filename, -1);

        if (img.empty())
        {
            return false;
        }

        if (show)
        {
            cv::imshow("Example", img);
            cv::waitKey(0);
        }
        return true;
    }

    bool writeImg(const std::string filename, const cv::Mat &img)
    {
        return cv::imwrite(filename, img);
    }
} // namespace mycpppkg