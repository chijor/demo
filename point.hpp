

void Point::setPoint(int x, int y)
{
    xPos = x;
    yPos = y;
}
void Point::printPont()
{
    std::cout << "x=" << xPos << std::endl;
    std::cout << "y=" << yPos << std::endl;
}

// int main()
// {
//     Point m;
//     m.setPoint(10, 20);
//     m.printPont();
//     return 0;
// }