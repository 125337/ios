@interface MMFinderLivePartialVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo
{
    NSArray * _originalChoosedContactList; // +0x8
    NSMutableArray * _chooseContactChatroomList; // +0x10
    NSMutableArray * _chooseContactUsernameList; // +0x18
    NSMutableArray * _selectedVisibleFileLists; // +0x20
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (void)recoverInfosToInitParam:(id)arg1;
- (BOOL)isSettingEnabled;
- (id)getDescriptionForCurrentSetting;
- (id)originalChoosedContactList;
- (void)setOriginalChoosedContactList:(id)arg1;
- (id)chooseContactChatroomList;
- (void)setChooseContactChatroomList:(id)arg1;
- (id)chooseContactUsernameList;
- (void)setChooseContactUsernameList:(id)arg1;
- (id)selectedVisibleFileLists;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (void).cxx_destruct;
@end

