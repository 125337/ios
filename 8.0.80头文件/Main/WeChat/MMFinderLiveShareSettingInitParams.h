@interface MMFinderLiveShareSettingInitParams : NSObject <NSCopying>
{
    BOOL _forceDarkMode; // +0x8
    BOOL _bindNotice; // +0x9
    BOOL _didVisibilityModeManullyChoosed; // +0xa
    BOOL _showVisiblitySettingEntrance; // +0xb
    BOOL _showFreeOfChargeSettingEntrance; // +0xc
    int _currentLiveMode; // +0x10
    int _liveStartMode; // +0x14
    unsigned int _priceInWecoin; // +0x18
    unsigned int _trialTimeHour; // +0x1c
    unsigned int _trialTimeMinute; // +0x20
    unsigned int _visibilityModeOptionStatus; // +0x24
    long long _currentVisibilityMode; // +0x28
    NSArray * _allVisibilityFileList; // +0x30
    NSArray * _selectedVisibleFileLists; // +0x38
    NSArray * _selectedTagNameList; // +0x40
    NSArray * _redPacketChooseIdList; // +0x48
    NSArray * _visibilityContactChatRoomIdList; // +0x50
    NSArray * _visibilityContactUsernameList; // +0x58
    unsigned long long _chatroomContactSelectLimit; // +0x60
    unsigned long long _contactFriendSelectLimit; // +0x68
    NSArray * _freeContactChatroomList; // +0x70
    NSArray * _freeContactUsernameList; // +0x78
    NSArray * _freeContactListForDigestDisplay; // +0x80
    NSArray * _selectedFreeFileList; // +0x88
    NSArray * _selectedFreeTagNameList; // +0x90
    unsigned long long _shareEntrySource; // +0x98
    long long _purchaseLivePreviewType; // +0xa0
    CContact * _fromGroupContact; // +0xa8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)updateWithFinderLiveVisibilityConfig:(id)arg1;
- (id)updateWithFinderLiveVisibilityState:(id)arg1;
- (long long)currentVisibilityMode;
- (void)setCurrentVisibilityMode:(long long)arg1;
- (int)currentLiveMode;
- (void)setCurrentLiveMode:(int)arg1;
- (int)liveStartMode;
- (void)setLiveStartMode:(int)arg1;
- (id)allVisibilityFileList;
- (void)setAllVisibilityFileList:(id)arg1;
- (id)selectedVisibleFileLists;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (id)selectedTagNameList;
- (void)setSelectedTagNameList:(id)arg1;
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
- (id)selectedFreeTagNameList;
- (void)setSelectedFreeTagNameList:(id)arg1;
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
- (id)fromGroupContact;
- (void)setFromGroupContact:(id)arg1;
- (BOOL)didVisibilityModeManullyChoosed;
- (void)setDidVisibilityModeManullyChoosed:(BOOL)arg1;
- (BOOL)showVisiblitySettingEntrance;
- (void)setShowVisiblitySettingEntrance:(BOOL)arg1;
- (BOOL)showFreeOfChargeSettingEntrance;
- (void)setShowFreeOfChargeSettingEntrance:(BOOL)arg1;
- (unsigned int)visibilityModeOptionStatus;
- (void)setVisibilityModeOptionStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
