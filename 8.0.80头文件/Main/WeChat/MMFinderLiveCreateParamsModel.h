@interface MMFinderLiveCreateParamsModel : MMLiveCreateParamsModel
{
    BOOL _isLiveCoverImageUpdated; // +0x8
    BOOL _coverImageHD; // +0x9
    BOOL _isMemberFree; // +0xa
    BOOL _isMiniGameLive; // +0xb
    BOOL _isLandscapeLive; // +0xc
    unsigned int _finderLiveMode; // +0x10
    unsigned int _finderLiveSubMode; // +0x14
    unsigned int _chargeFlag; // +0x18
    unsigned int _chargeUnitPriceInWecoin; // +0x1c
    unsigned int _trialDurationTime; // +0x20
    unsigned int _ackSpamMsg; // +0x24
    int _liveMode; // +0x28
    unsigned int _notificationmsgtriggertype; // +0x2c
    unsigned int _gameLiveStreamType; // +0x30
    unsigned int _createLiveScene; // +0x34
    MMFinderLiveTaskId * _liveTaskId; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
    WCFinderLiveShareItem * _shareItem; // +0x48
    long long _coverImageSource; // +0x50
    WCFinderUploadTask * _uploadTask; // +0x58
    WCFinderLiveStarterReporter * _starterReporter; // +0x60
    long long _purchaseLivePreviewType; // +0x68
    NSMutableArray * _freeOfChargeChatroomIdList; // +0x70
    NSMutableArray * _freeOfChargeUsernameList; // +0x78
    NSMutableArray * _freeOfChargeRosterIdsList; // +0x80
    NSMutableArray * _freeOfChargeFriendLabelList; // +0x88
    FinderLiveTagInfo * _liveTagInfo; // +0x90
    long long _visibilityMode; // +0x98
    NSMutableArray * _visibilityFileIdLists; // +0xa0
    NSMutableArray * _visibilityChatRoomIdLists; // +0xa8
    NSMutableArray * _visibilityusernameLists; // +0xb0
    NSMutableArray * _visibilityFriendLabelList; // +0xb8
    NSData * _spamCheckInfo; // +0xc0
    UIImage * _coverImg; // +0xc8
    NSString * _coverPath; // +0xd0
    UIImage * _headImg; // +0xd8
    NSString * _headPath; // +0xe0
    NSString * _noticeId; // +0xe8
    CContact * _fromGroupContact; // +0xf0
    MMFinderLiveAudioModeBackgroundUploadModel * _audioModeBackgroundUploadModel; // +0xf8
    MMFinderLiveCreateImageSpamCheckItem * _coverImageSpamCheckItem; // +0x100
    MMFinderLiveCreateImageSpamCheckItem * _headImageSpamCheckItem; // +0x108
    NSMutableArray * _lastLiveCoverImgs; // +0x110
    NSString * _descriptionExtend; // +0x118
    long long _createLivePageMode; // +0x120
    FinderObjectEventDesc * _finderObjectEventDesc; // +0x128
    NSData * _createLiveBubbleBuffer; // +0x130
    unsigned long long _syndicateId; // +0x138
}
- (id)description;
- (BOOL)isFromGroupVisibleOnly;
- (unsigned int)finderLiveMode;
- (void)setFinderLiveMode:(unsigned int)arg1;
- (unsigned int)finderLiveSubMode;
- (void)setFinderLiveSubMode:(unsigned int)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (BOOL)isLiveCoverImageUpdated;
- (void)setIsLiveCoverImageUpdated:(BOOL)arg1;
- (long long)coverImageSource;
- (void)setCoverImageSource:(long long)arg1;
- (BOOL)coverImageHD;
- (void)setCoverImageHD:(BOOL)arg1;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (unsigned int)chargeFlag;
- (void)setChargeFlag:(unsigned int)arg1;
- (unsigned int)chargeUnitPriceInWecoin;
- (void)setChargeUnitPriceInWecoin:(unsigned int)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)trialDurationTime;
- (void)setTrialDurationTime:(unsigned int)arg1;
- (id)freeOfChargeChatroomIdList;
- (void)setFreeOfChargeChatroomIdList:(id)arg1;
- (id)freeOfChargeUsernameList;
- (void)setFreeOfChargeUsernameList:(id)arg1;
- (id)freeOfChargeRosterIdsList;
- (void)setFreeOfChargeRosterIdsList:(id)arg1;
- (id)freeOfChargeFriendLabelList;
- (void)setFreeOfChargeFriendLabelList:(id)arg1;
- (BOOL)isMemberFree;
- (void)setIsMemberFree:(BOOL)arg1;
- (id)liveTagInfo;
- (void)setLiveTagInfo:(id)arg1;
- (long long)visibilityMode;
- (void)setVisibilityMode:(long long)arg1;
- (id)visibilityFileIdLists;
- (void)setVisibilityFileIdLists:(id)arg1;
- (id)visibilityChatRoomIdLists;
- (void)setVisibilityChatRoomIdLists:(id)arg1;
- (id)visibilityusernameLists;
- (void)setVisibilityusernameLists:(id)arg1;
- (id)visibilityFriendLabelList;
- (void)setVisibilityFriendLabelList:(id)arg1;
- (BOOL)isMiniGameLive;
- (void)setIsMiniGameLive:(BOOL)arg1;
- (unsigned int)ackSpamMsg;
- (void)setAckSpamMsg:(unsigned int)arg1;
- (id)spamCheckInfo;
- (void)setSpamCheckInfo:(id)arg1;
- (id)coverImg;
- (void)setCoverImg:(id)arg1;
- (id)coverPath;
- (void)setCoverPath:(id)arg1;
- (id)headImg;
- (void)setHeadImg:(id)arg1;
- (id)headPath;
- (void)setHeadPath:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)fromGroupContact;
- (void)setFromGroupContact:(id)arg1;
- (id)audioModeBackgroundUploadModel;
- (void)setAudioModeBackgroundUploadModel:(id)arg1;
- (id)coverImageSpamCheckItem;
- (void)setCoverImageSpamCheckItem:(id)arg1;
- (id)headImageSpamCheckItem;
- (void)setHeadImageSpamCheckItem:(id)arg1;
- (int)liveMode;
- (void)setLiveMode:(int)arg1;
- (id)lastLiveCoverImgs;
- (void)setLastLiveCoverImgs:(id)arg1;
- (BOOL)isLandscapeLive;
- (void)setIsLandscapeLive:(BOOL)arg1;
- (unsigned int)notificationmsgtriggertype;
- (void)setNotificationmsgtriggertype:(unsigned int)arg1;
- (unsigned int)gameLiveStreamType;
- (void)setGameLiveStreamType:(unsigned int)arg1;
- (id)descriptionExtend;
- (void)setDescriptionExtend:(id)arg1;
- (long long)createLivePageMode;
- (void)setCreateLivePageMode:(long long)arg1;
- (id)finderObjectEventDesc;
- (void)setFinderObjectEventDesc:(id)arg1;
- (id)createLiveBubbleBuffer;
- (void)setCreateLiveBubbleBuffer:(id)arg1;
- (unsigned int)createLiveScene;
- (void)setCreateLiveScene:(unsigned int)arg1;
- (unsigned long long)syndicateId;
- (void)setSyndicateId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
