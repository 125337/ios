@interface WCFinderLiveStartePublicModel : NSObject
{
    BOOL _enableNewStartController; // +0x8
    BOOL _didVisibilityModeManullyChoosed; // +0x9
    BOOL _isMemberFree; // +0xa
    int _chargeFlag; // +0xc
    unsigned int _chargeUnitPriceInWecoin; // +0x10
    unsigned int _trialTimeHour; // +0x14
    unsigned int _trialTimeMinute; // +0x18
    unsigned int _maxVisibilityChatroomCount; // +0x1c
    unsigned int _maxVisibilityFriendContactCount; // +0x20
    int _liveMode; // +0x24
    WCFinderLiveStarterSwitchModeItem * _switchModeItem; // +0x28
    MMFinderLiveModeModel * _modeModel; // +0x30
    MMLiveTaskId * _liveTaskId; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
    WCFinderLiveShareItem * _shareItem; // +0x48
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x50
    FinderLiveTagInfo * _audioTagInfo; // +0x58
    FinderLiveTagInfo * _videoTagInfo; // +0x60
    long long _visibilityMode; // +0x68
    long long _purchaseLivePreviewType; // +0x70
    NSArray * _freeOfChargeUsernameList; // +0x78
    NSArray * _freeOfChargeChatroomIdList; // +0x80
    NSArray * _fullFreeOfChargeContactList; // +0x88
    NSArray * _selectedFreeRosterList; // +0x90
    UIImage * _selfHeadImg; // +0x98
    NSString * _selfHeadImgPath; // +0xa0
    MMFinderLiveAudioModeBackgroundUploadModel * _audioModeBackgroundUploadModel; // +0xa8
    NSArray * _roomContacts; // +0xb0
    CContact * _groupContact; // +0xb8
    NSArray * _visibilityFileList; // +0xc0
    long long _lastSelectMode; // +0xc8
    FinderLivePromptInfo * _promptInfo; // +0xd0
    FinderJumpInfo * _opPromptInfo; // +0xd8
    unsigned long long _action; // +0xe0
    FinderLiveStreamDecor * _liveDecor; // +0xe8
    FinderLiveErrorPage * _createLiveErrorPage; // +0xf0
    id /* block */ _noticeInfoUpdatedCallback; // +0xf8
    UIImage * _coverImageOrigin; // +0x100
    UIImage * _coverImage4Vs3; // +0x108
    WCLocationInfo * _poiInfo; // +0x110
    NSArray * _liveNoticeList; // +0x118
    FinderLiveNoticeInfo * _normalNoticeInfo; // +0x120
    FinderLiveNoticeInfo * _memberNoticeInfo; // +0x128
    NSMutableArray * _visibilityFileIdLists; // +0x130
    NSArray * _visibilityChatRoomIdList; // +0x138
    NSArray * _visibilityUsernameList; // +0x140
    NSData * _spamCheckInfo; // +0x148
    FinderLiveGuideInfo * _liveGuideInfo; // +0x150
    MMFinderLiveCreateLotteryViewModel * _createLotteryViewModel; // +0x158
    NSMutableArray * _lotteryArray; // +0x160
    UIViewController * _currentStarterVC; // +0x168
    unsigned long long _initialSelectAudioSubType; // +0x170
    WCFinderLiveStarteSceneInitialModel * _sceneInitialModel; // +0x178
    long long _createLivePageMode; // +0x180
    unsigned long long _lastSimpleVersionType; // +0x188
    unsigned long long _eventTopicId; // +0x190
    NSString * _eventName; // +0x198
    NSString * _eventCreatorNickName; // +0x1a0
}
- (id)dataItem;
- (id)switchModeItem;
- (id)modeModel;
- (id)visibilityFileIdLists;
- (BOOL)enableNewStartController;
- (id)currentLiveTask;
- (id)lotteryArray;
- (id)createLotteryViewModel;
- (void)setSwitchModeItem:(id)arg1;
- (void)setModeModel:(id)arg1;
- (void)setEnableNewStartController:(BOOL)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void)setDataItem:(id)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (id)liveNoticeInfo;
- (void)setLiveNoticeInfo:(id)arg1;
- (id)audioTagInfo;
- (void)setAudioTagInfo:(id)arg1;
- (id)videoTagInfo;
- (void)setVideoTagInfo:(id)arg1;
- (long long)visibilityMode;
- (void)setVisibilityMode:(long long)arg1;
- (int)chargeFlag;
- (void)setChargeFlag:(int)arg1;
- (unsigned int)chargeUnitPriceInWecoin;
- (void)setChargeUnitPriceInWecoin:(unsigned int)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)trialTimeHour;
- (void)setTrialTimeHour:(unsigned int)arg1;
- (unsigned int)trialTimeMinute;
- (void)setTrialTimeMinute:(unsigned int)arg1;
- (id)freeOfChargeUsernameList;
- (void)setFreeOfChargeUsernameList:(id)arg1;
- (id)freeOfChargeChatroomIdList;
- (void)setFreeOfChargeChatroomIdList:(id)arg1;
- (id)fullFreeOfChargeContactList;
- (void)setFullFreeOfChargeContactList:(id)arg1;
- (id)selectedFreeRosterList;
- (void)setSelectedFreeRosterList:(id)arg1;
- (id)selfHeadImg;
- (void)setSelfHeadImg:(id)arg1;
- (id)selfHeadImgPath;
- (void)setSelfHeadImgPath:(id)arg1;
- (id)audioModeBackgroundUploadModel;
- (void)setAudioModeBackgroundUploadModel:(id)arg1;
- (id)roomContacts;
- (void)setRoomContacts:(id)arg1;
- (id)groupContact;
- (void)setGroupContact:(id)arg1;
- (BOOL)didVisibilityModeManullyChoosed;
- (void)setDidVisibilityModeManullyChoosed:(BOOL)arg1;
- (id)visibilityFileList;
- (void)setVisibilityFileList:(id)arg1;
- (unsigned int)maxVisibilityChatroomCount;
- (void)setMaxVisibilityChatroomCount:(unsigned int)arg1;
- (unsigned int)maxVisibilityFriendContactCount;
- (void)setMaxVisibilityFriendContactCount:(unsigned int)arg1;
- (long long)lastSelectMode;
- (void)setLastSelectMode:(long long)arg1;
- (id)promptInfo;
- (void)setPromptInfo:(id)arg1;
- (id)opPromptInfo;
- (void)setOpPromptInfo:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (int)liveMode;
- (void)setLiveMode:(int)arg1;
- (id)liveDecor;
- (void)setLiveDecor:(id)arg1;
- (id)createLiveErrorPage;
- (void)setCreateLiveErrorPage:(id)arg1;
- (id /* block */)noticeInfoUpdatedCallback;
- (void)setNoticeInfoUpdatedCallback:(id /* block */)arg1;
- (id)coverImageOrigin;
- (void)setCoverImageOrigin:(id)arg1;
- (id)coverImage4Vs3;
- (void)setCoverImage4Vs3:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)liveNoticeList;
- (void)setLiveNoticeList:(id)arg1;
- (id)normalNoticeInfo;
- (void)setNormalNoticeInfo:(id)arg1;
- (id)memberNoticeInfo;
- (void)setMemberNoticeInfo:(id)arg1;
- (void)setVisibilityFileIdLists:(id)arg1;
- (id)visibilityChatRoomIdList;
- (void)setVisibilityChatRoomIdList:(id)arg1;
- (id)visibilityUsernameList;
- (void)setVisibilityUsernameList:(id)arg1;
- (BOOL)isMemberFree;
- (void)setIsMemberFree:(BOOL)arg1;
- (id)spamCheckInfo;
- (void)setSpamCheckInfo:(id)arg1;
- (id)liveGuideInfo;
- (void)setLiveGuideInfo:(id)arg1;
- (void)setCreateLotteryViewModel:(id)arg1;
- (void)setLotteryArray:(id)arg1;
- (id)currentStarterVC;
- (void)setCurrentStarterVC:(id)arg1;
- (unsigned long long)initialSelectAudioSubType;
- (void)setInitialSelectAudioSubType:(unsigned long long)arg1;
- (id)sceneInitialModel;
- (void)setSceneInitialModel:(id)arg1;
- (long long)createLivePageMode;
- (void)setCreateLivePageMode:(long long)arg1;
- (unsigned long long)lastSimpleVersionType;
- (void)setLastSimpleVersionType:(unsigned long long)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)eventCreatorNickName;
- (void)setEventCreatorNickName:(id)arg1;
- (void).cxx_destruct;
@end
