//
// This file is part of the Marble Virtual Globe.
//
// This program is free software licensed under the GNU LGPL. You can
// find a copy of this license in LICENSE.txt in the top directory of
// the source code.
//
// Copyright 2013      Illya Kovalevskyy   <illya.kovalevskyy@gmail.com>
//

#ifndef KMLSOUNDCUETAGHANDLER_H
#define KMLSOUNDCUETAGHANDLER_H

#include "GeoTagHandler.h"

namespace Marble
{
namespace kml
{

class KmlSoundCueTagHandler : public GeoTagHandler
{
public:
    GeoNode* parse(GeoParser &parser) const override;
};

} // namespace kml
} // namespace Marble

#endif // KMLSOUNDCUETAGHANDLER_H
