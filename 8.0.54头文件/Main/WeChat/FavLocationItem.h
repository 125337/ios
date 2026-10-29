@interface FavLocationItem : FavoritesModel
{
    BOOL _isFromPoiList; // +0x8
    double _lng; // +0x10
    double _lat; // +0x18
    double _scale; // +0x20
    NSString * _label; // +0x28
    NSString * _poiname; // +0x30
    NSString * _poiId; // +0x38
    NSString * _buildingId; // +0x40
    NSString * _floorName; // +0x48
    NSDictionary * _dicLocationName; // +0x50
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)identifier;
- (double)lng;
- (void)setLng:(double)arg1;
- (double)lat;
- (void)setLat:(double)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)poiname;
- (void)setPoiname:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (BOOL)isFromPoiList;
- (void)setIsFromPoiList:(BOOL)arg1;
- (id)buildingId;
- (void)setBuildingId:(id)arg1;
- (id)floorName;
- (void)setFloorName:(id)arg1;
- (id)dicLocationName;
- (void)setDicLocationName:(id)arg1;
- (void).cxx_destruct;
@end

