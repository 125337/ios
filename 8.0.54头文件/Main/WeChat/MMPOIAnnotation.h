@interface MMPOIAnnotation : MMObject <QAnnotation>
{
    POIItem * _poiItem; // +0x8
    BOOL _isUserLocation; // +0x10
    NSString * _searchId; // +0x18
}
- (id)initWithPOIItem:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (BOOL)hasIndoorInfo;
- (id)poiItem;
- (void)setPoiItem:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (BOOL)isUserLocation;
- (void)setIsUserLocation:(BOOL)arg1;
- (void).cxx_destruct;
@end

