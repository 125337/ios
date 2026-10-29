@interface WCFinderJumperPoiParams : NSObject
{
    int _fromScene; // +0x8
    int _tabID; // +0xc
    int _fromType; // +0x10
    double _longitude; // +0x18
    double _latitude; // +0x20
    NSString * _poiName; // +0x28
    NSString * _country; // +0x30
    NSString * _city; // +0x38
    NSString * _address; // +0x40
    NSString * _poiClassifyId; // +0x48
    NSString * _buildingId; // +0x50
    NSString * _floorName; // +0x58
    unsigned long long _fromObjectID; // +0x60
    NSString * _groupBuyBypassData; // +0x68
    NSString * _jumpInfoToPoiStreamBypass; // +0x70
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)genFinderLocation;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (id)buildingId;
- (void)setBuildingId:(id)arg1;
- (id)floorName;
- (void)setFloorName:(id)arg1;
- (unsigned long long)fromObjectID;
- (void)setFromObjectID:(unsigned long long)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (int)tabID;
- (void)setTabID:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)groupBuyBypassData;
- (void)setGroupBuyBypassData:(id)arg1;
- (id)jumpInfoToPoiStreamBypass;
- (void)setJumpInfoToPoiStreamBypass:(id)arg1;
- (void).cxx_destruct;
@end

