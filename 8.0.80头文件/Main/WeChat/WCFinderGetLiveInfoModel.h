@interface WCFinderGetLiveInfoModel : NSObject
{
    BOOL _enableShowReplaySubscriptionEntry; // +0x8
    BOOL _enableAudienceRelatedContentPriority; // +0x9
    int _anchorDisplayElementFlag; // +0xc
    unsigned int _autoPlayControlFlag; // +0x10
    unsigned int _curReplaySubscriptionStatus; // +0x14
    unsigned int _replaySubscribedCount; // +0x18
    FinderJumpInfo * _liveLoyaltyCardJump; // +0x20
    unsigned long long _objectId; // +0x28
    NSString * _objectNonceId; // +0x30
    NSString * _sessionBuffer; // +0x38
    FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo * _previewJoinliveControlInfo; // +0x40
    unsigned long long _displayElementFlag; // +0x48
    FinderNotifyMoreLiveInfo * _notifyMoreLiveConfig; // +0x50
    FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo * _notificationDynamicDisplayInfo; // +0x58
    FinderLiveStreamRelatedListBackupFeedInfo * _backupFeeds; // +0x60
    FinderGetLiveInfoResp_FinderLiveAudienceCloseLiveFollowInfo * _audienceFollowInfo; // +0x68
    WCFinderContact * _anchorContact; // +0x70
    FinderLiveEntranceGuideInfo * _liveEntranceGuideInfo; // +0x78
    FinderJumpInfo * _npsSurveyJumpInfo; // +0x80
    FinderJumpInfo * _authCollectJumpInfo; // +0x88
    NSArray * _audienceRelatedContentPriority; // +0x90
}
- (id)liveLoyaltyCardJump;
- (void)setLiveLoyaltyCardJump:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)previewJoinliveControlInfo;
- (void)setPreviewJoinliveControlInfo:(id)arg1;
- (unsigned long long)displayElementFlag;
- (void)setDisplayElementFlag:(unsigned long long)arg1;
- (int)anchorDisplayElementFlag;
- (void)setAnchorDisplayElementFlag:(int)arg1;
- (unsigned int)autoPlayControlFlag;
- (void)setAutoPlayControlFlag:(unsigned int)arg1;
- (id)notifyMoreLiveConfig;
- (void)setNotifyMoreLiveConfig:(id)arg1;
- (id)notificationDynamicDisplayInfo;
- (void)setNotificationDynamicDisplayInfo:(id)arg1;
- (id)backupFeeds;
- (void)setBackupFeeds:(id)arg1;
- (id)audienceFollowInfo;
- (void)setAudienceFollowInfo:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)liveEntranceGuideInfo;
- (void)setLiveEntranceGuideInfo:(id)arg1;
- (unsigned int)curReplaySubscriptionStatus;
- (void)setCurReplaySubscriptionStatus:(unsigned int)arg1;
- (BOOL)enableShowReplaySubscriptionEntry;
- (void)setEnableShowReplaySubscriptionEntry:(BOOL)arg1;
- (unsigned int)replaySubscribedCount;
- (void)setReplaySubscribedCount:(unsigned int)arg1;
- (id)npsSurveyJumpInfo;
- (void)setNpsSurveyJumpInfo:(id)arg1;
- (id)authCollectJumpInfo;
- (void)setAuthCollectJumpInfo:(id)arg1;
- (id)audienceRelatedContentPriority;
- (void)setAudienceRelatedContentPriority:(id)arg1;
- (BOOL)enableAudienceRelatedContentPriority;
- (void)setEnableAudienceRelatedContentPriority:(BOOL)arg1;
- (void).cxx_destruct;
@end
