@interface MMFinderLiveCreateParamsModel : MMLiveCreateParamsModel
{
    BOOL _isLiveCoverImageUpdated; // +0x8
    BOOL _useFinderHeadAsCoverImage; // +0x9
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
    MMFinderLiveTaskId * _liveTaskId; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
    WCFinderLiveShareItem * _shareItem; // +0x48
    WCFinderUploadTask * _uploadTask; // +0x50
    WCFinderLiveStarterReporter * _starterReporter; // +0x58
    long long _purchaseLivePreviewType; // +0x60
    NSMutableArray * _freeOfChargeChatroomIdList; // +0x68
    NSMutableArray * _freeOfChargeUsernameList; // +0x70
    NSMutableArray * _freeOfChargeRosterIdsList; // +0x78
    FinderLiveTagInfo * _liveTagInfo; // +0x80
    long long _visibilityMode; // +0x88
    NSMutableArray * _visibilityFileIdLists; // +0x90
    NSMutableArray * _visibilityChatRoomIdLists; // +0x98
    NSMutableArray * _visibilityusernameLists; // +0xa0
    NSData * _spamCheckInfo; // +0xa8
    UIImage * _coverImg; // +0xb0
    NSString * _coverPath; // +0xb8
    UIImage * _headImg; // +0xc0
    NSString * _headPath; // +0xc8
    NSString * _noticeId; // +0xd0
    CContact * _fromGroupContact; // +0xd8
    MMFinderLiveAudioModeBackgroundUploadModel * _audioModeBackgroundUploadModel; // +0xe0
    MMFinderLiveCreateImageSpamCheckItem * _coverImageSpamCheckItem; // +0xe8
    MMFinderLiveCreateImageSpamCheckItem * _headImageSpamCheckItem; // +0xf0
    NSMutableArray * _lastLiveCoverImgs; // +0xf8
    NSString * _descriptionExtend; // +0x100
}
- (id)description;
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
- (BOOL)useFinderHeadAsCoverImage;
- (void)setUseFinderHeadAsCoverImage:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

