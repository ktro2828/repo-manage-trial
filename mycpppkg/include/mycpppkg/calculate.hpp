#ifndef CALCULATE_HPP_
#define CALCULATE_HPP_

namespace mycpppkg
{
    /**
     * @brief Return a result of a + b.
     *
     * @param a
     * @param b
     * @return float
     */
    float add(const float a, const float b);

    /**
     * @brief Return a result of a - b.
     *
     * @param a
     * @param b
     * @return float
     */
    float sub(const float a, const float b);

    /**
     * @brief Return a result of a * b.
     *
     * @param a
     * @param b
     * @return float
     */
    float mul(const float a, const float b);

    /**
     * @brief Return a result of a / b. b must not be 0.
     *
     * @param a
     * @param b
     * @return float
     */
    float div(const float a, const float b);
} // namespace mycpppkg

#endif // CALCULATE_HPP_
