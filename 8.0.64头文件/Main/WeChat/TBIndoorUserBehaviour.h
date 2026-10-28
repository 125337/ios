@interface TBIndoorUserBehaviour : NSObject
{
    NSString * _buildingID; // +0x8
    unsigned long long _showCount; // +0x10
    unsigned long long _activeLevelAPICount; // +0x18
    unsigned long long _pickerShowCount; // +0x20
}
- (id)description;
- (id)descriptionDictionary;
- (id)buildingID;
- (void)setBuildingID:(id)arg1;
- (unsigned long long)showCount;
- (void)setShowCount:(unsigned long long)arg1;
- (unsigned long long)activeLevelAPICount;
- (void)setActiveLevelAPICount:(unsigned long long)arg1;
- (unsigned long long)pickerShowCount;
- (void)setPickerShowCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
