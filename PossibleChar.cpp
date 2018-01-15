// Posibile caractere - Dumbrava Mihael

#include "PossibleChar.h"


PossibleChar::PossibleChar(std::vector<cv::Point> _contour) 
{
    contour = _contour;

    boundingRect = cv::boundingRect(contour);

   
    dblDiagonalSize = sqrt(pow(boundingRect.width, 2) + pow(boundingRect.height, 2));

    dblAspectRatio = (float)boundingRect.width / (float)boundingRect.height;
}

