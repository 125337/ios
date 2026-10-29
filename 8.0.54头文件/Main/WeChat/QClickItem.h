@interface QClickItem : NSObject
{
    int _x; // +0x8
    int _y; // +0xc
    int _overlayID; // +0x10
    long long _type; // +0x18
    NSString * _name; // +0x20
    NSString * _levelName; // +0x28
    NSString * _buildingGUID; // +0x30
    NSString * _buildingName; // +0x38
    NSString * _poiId; // +0x40
}
- (int)x;
- (void)setX:(int)arg1;
- (int)y;
- (void)setY:(int)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)levelName;
- (void)setLevelName:(id)arg1;
- (id)buildingGUID;
- (void)setBuildingGUID:(id)arg1;
- (id)buildingName;
- (void)setBuildingName:(id)arg1;
- (int)overlayID;
- (void)setOverlayID:(int)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (void).cxx_destruct;
@end

