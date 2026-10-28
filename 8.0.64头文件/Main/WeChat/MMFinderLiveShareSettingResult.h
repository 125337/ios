@interface MMFinderLiveShareSettingResult : NSObject
{
    int _currentLiveMode; // +0x8
    unsigned int _trialTimeHour; // +0xc
    unsigned int _trialTimeMinute; // +0x10
    unsigned int _priceInWecoin; // +0x14
    long long _currentVisibilityMode; // +0x18
    NSArray * _selectedVisibleFileLists; // +0x20
    NSArray * _orignalContactList; // +0x28
    NSArray * _visibilityContactChatRoomIdList; // +0x30
    NSArray * _visibilityContactUsernameList; // +0x38
    long long _purchaseLivePreviewType; // +0x40
    NSArray * _freeContactChatroomList; // +0x48
    NSArray * _freeContactUsernameList; // +0x50
    NSArray * _freeContactListForDigestDisplay; // +0x58
    NSArray * _selectedFreeFileList; // +0x60
}
+ (unsigned long long)transferSelectModeFromVisibilityMode:(long long)arg1 liveMode:(int)arg2;
- (long long)currentVisibilityMode;
- (void)setCurrentVisibilityMode:(long long)arg1;
- (int)currentLiveMode;
- (void)setCurrentLiveMode:(int)arg1;
- (id)selectedVisibleFileLists;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (id)orignalContactList;
- (void)setOrignalContactList:(id)arg1;
- (id)visibilityContactChatRoomIdList;
- (void)setVisibilityContactChatRoomIdList:(id)arg1;
- (id)visibilityContactUsernameList;
- (void)setVisibilityContactUsernameList:(id)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)trialTimeHour;
- (void)setTrialTimeHour:(unsigned int)arg1;
- (unsigned int)trialTimeMinute;
- (void)setTrialTimeMinute:(unsigned int)arg1;
- (unsigned int)priceInWecoin;
- (void)setPriceInWecoin:(unsigned int)arg1;
- (id)freeContactChatroomList;
- (void)setFreeContactChatroomList:(id)arg1;
- (id)freeContactUsernameList;
- (void)setFreeContactUsernameList:(id)arg1;
- (id)freeContactListForDigestDisplay;
- (void)setFreeContactListForDigestDisplay:(id)arg1;
- (id)selectedFreeFileList;
- (void)setSelectedFreeFileList:(id)arg1;
- (void).cxx_destruct;
@end
