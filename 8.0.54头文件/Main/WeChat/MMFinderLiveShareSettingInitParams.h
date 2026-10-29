@interface MMFinderLiveShareSettingInitParams : NSObject
{
    BOOL _forceDarkMode; // +0x8
    BOOL _bindNotice; // +0x9
    int _currentLiveMode; // +0xc
    unsigned int _priceInWecoin; // +0x10
    unsigned int _trialTimeHour; // +0x14
    unsigned int _trialTimeMinute; // +0x18
    long long _currentVisibilityMode; // +0x20
    unsigned long long _liveStartMode; // +0x28
    NSArray * _allVisibilityFileList; // +0x30
    NSArray * _selectedVisibleFileLists; // +0x38
    NSArray * _redPacketChooseIdList; // +0x40
    NSArray * _visibilityContactChatRoomIdList; // +0x48
    NSArray * _visibilityContactUsernameList; // +0x50
    unsigned long long _chatroomContactSelectLimit; // +0x58
    unsigned long long _contactFriendSelectLimit; // +0x60
    NSArray * _freeContactChatroomList; // +0x68
    NSArray * _freeContactUsernameList; // +0x70
    NSArray * _freeContactListForDigestDisplay; // +0x78
    NSArray * _selectedFreeFileList; // +0x80
    unsigned long long _shareEntrySource; // +0x88
    long long _purchaseLivePreviewType; // +0x90
}
- (long long)currentVisibilityMode;
- (void)setCurrentVisibilityMode:(long long)arg1;
- (int)currentLiveMode;
- (void)setCurrentLiveMode:(int)arg1;
- (unsigned long long)liveStartMode;
- (void)setLiveStartMode:(unsigned long long)arg1;
- (id)allVisibilityFileList;
- (void)setAllVisibilityFileList:(id)arg1;
- (id)selectedVisibleFileLists;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (id)redPacketChooseIdList;
- (void)setRedPacketChooseIdList:(id)arg1;
- (id)visibilityContactChatRoomIdList;
- (void)setVisibilityContactChatRoomIdList:(id)arg1;
- (id)visibilityContactUsernameList;
- (void)setVisibilityContactUsernameList:(id)arg1;
- (unsigned long long)chatroomContactSelectLimit;
- (void)setChatroomContactSelectLimit:(unsigned long long)arg1;
- (unsigned long long)contactFriendSelectLimit;
- (void)setContactFriendSelectLimit:(unsigned long long)arg1;
- (id)freeContactChatroomList;
- (void)setFreeContactChatroomList:(id)arg1;
- (id)freeContactUsernameList;
- (void)setFreeContactUsernameList:(id)arg1;
- (id)freeContactListForDigestDisplay;
- (void)setFreeContactListForDigestDisplay:(id)arg1;
- (id)selectedFreeFileList;
- (void)setSelectedFreeFileList:(id)arg1;
- (unsigned int)priceInWecoin;
- (void)setPriceInWecoin:(unsigned int)arg1;
- (unsigned long long)shareEntrySource;
- (void)setShareEntrySource:(unsigned long long)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (BOOL)bindNotice;
- (void)setBindNotice:(BOOL)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)trialTimeHour;
- (void)setTrialTimeHour:(unsigned int)arg1;
- (unsigned int)trialTimeMinute;
- (void)setTrialTimeMinute:(unsigned int)arg1;
- (void).cxx_destruct;
@end

