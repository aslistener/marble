//
// This file is part of the Marble Virtual Globe.
//
// This program is free software licensed under the GNU LGPL. You can
// find a copy of this license in LICENSE.txt in the top directory of
// the source code.
//
// Copyright 2012 Utku Aydın <utkuaydin34@gmail.com>
//

#ifndef FOURSQUAREMODEL_H
#define FOURSQUAREMODEL_H
#include <AbstractDataPluginModel.h>

namespace Marble
{

class FoursquareModel : public AbstractDataPluginModel
{
    Q_OBJECT
    
public:
    explicit FoursquareModel( const MarbleModel *marbleModel, QObject *parent = 0 );
    ~FoursquareModel() override;

protected:
    /**
     * Generates the download url for the description file from the web service depending on
     * the @p box surrounding the view and the @p number of files to show.
     **/
    void getAdditionalItems( const GeoDataLatLonAltBox& box,
                                     qint32 number = 10 ) override;

    /**
     * Parses the @p file which getAdditionalItems downloads and
     * prepares the data for usage.
     **/
    void parseFile( const QByteArray& file ) override;
};

}

#endif // FOURSQUAREMODEL_H
