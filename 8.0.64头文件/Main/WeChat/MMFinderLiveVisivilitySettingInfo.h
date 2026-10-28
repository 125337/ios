@interface MMFinderLiveVisivilitySettingInfo : NSObject <NSCopying>
{
    BOOL _isModified; // +0x8
    int _currentLiveMode; // +0xc
    long long _currentVisibilityMode; // +0x10
    NSArray * _allVisibilityFileList; // +0x18
    NSMutableArray * _chooseContactChatroomList; // +0x20
    NSMutableArray * _chooseContactUsernameList; // +0x28
    NSMutableArray * _selectedVisibleFileLists; // +0x30
    NSArray * _requiredContacts; // +0x38
    long long _modeType; // +0x40
}
+ (id)audienceFileListWithFileLists:(id)arg1 allVisibilityFileList:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (void)recoverInfosToInitParam:(id)arg1;
- (BOOL)isSettingEnabled;
- (id)getSettingDescription;
- (id)getDescriptionForCurrentSetting;
- (id)getDefaultDescription;
- (id)audienceFileListWithFileLists:(id)arg1;
- (int)currentLiveMode;
- (void)setCurrentLiveMode:(int)arg1;
- (long long)currentVisibilityMode;
- (void)setCurrentVisibilityMode:(long long)arg1;
- (id)allVisibilityFileList;
- (void)setAllVisibilityFileList:(id)arg1;
- (id)chooseContactChatroomList;
- (void)setChooseContactChatroomList:(id)arg1;
- (id)chooseContactUsernameList;
- (void)setChooseContactUsernameList:(id)arg1;
- (id)selectedVisibleFileLists;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (id)requiredContacts;
- (void)setRequiredContacts:(id)arg1;
- (BOOL)isModified;
- (void)setIsModified:(BOOL)arg1;
- (long long)modeType;
- (void)setModeType:(long long)arg1;
- (void).cxx_destruct;
@end
