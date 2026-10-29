@interface MMFinderLiveSettingVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo
{
    NSMutableArray * _manualContactChatroomList; // +0x8
    NSMutableArray * _manualContactUsernameList; // +0x10
    NSMutableArray * _manualTagList; // +0x18
    NSMutableArray * _manualFileList; // +0x20
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (void)recoverInfosToInitParam:(id)arg1;
- (id)getDescriptionForCurrentSetting;
- (id)description;
- (id)manualContactChatroomList;
- (void)setManualContactChatroomList:(id)arg1;
- (id)manualContactUsernameList;
- (void)setManualContactUsernameList:(id)arg1;
- (id)manualTagList;
- (void)setManualTagList:(id)arg1;
- (id)manualFileList;
- (void)setManualFileList:(id)arg1;
- (void).cxx_destruct;
@end
