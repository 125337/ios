@interface QIndoorPoiInfo : QPoiInfo
{
    NSString * _levelName; // +0x28
    NSString * _buildingGUID; // +0x30
    NSString * _buildingName; // +0x38
}
- (id)levelName;
- (void)setLevelName:(id)arg1;
- (id)buildingGUID;
- (void)setBuildingGUID:(id)arg1;
- (id)buildingName;
- (void)setBuildingName:(id)arg1;
- (void).cxx_destruct;
@end

