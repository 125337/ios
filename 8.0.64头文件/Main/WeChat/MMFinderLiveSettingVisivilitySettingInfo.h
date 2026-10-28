@interface MMFinderLiveSettingVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo
{
    BOOL _choosePublic; // +0x8
    BOOL _isDisablePublic; // +0x9
    NSArray * _originalChoosedContactList; // +0x10
    NSMutableArray * _manualContactChatroomList; // +0x18
    NSMutableArray * _manualContactUsernameList; // +0x20
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (void)recoverInfosToInitParam:(id)arg1;
- (BOOL)isVisibleChoose;
- (id)getDescriptionForCurrentSetting;
- (id)description;
- (BOOL)choosePublic;
- (void)setChoosePublic:(BOOL)arg1;
- (BOOL)isDisablePublic;
- (void)setIsDisablePublic:(BOOL)arg1;
- (id)originalChoosedContactList;
- (void)setOriginalChoosedContactList:(id)arg1;
- (id)manualContactChatroomList;
- (void)setManualContactChatroomList:(id)arg1;
- (id)manualContactUsernameList;
- (void)setManualContactUsernameList:(id)arg1;
- (void).cxx_destruct;
@end
