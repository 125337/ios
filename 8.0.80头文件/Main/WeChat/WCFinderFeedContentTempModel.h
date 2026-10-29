@interface WCFinderFeedContentTempModel : NSObject
{
    BOOL _hasShowNoticeInfo; // +0x8
    BOOL _hadLiked; // +0x9
    BOOL _hadFavorited; // +0xa
    BOOL _hadReadOver10s; // +0xb
    BOOL _hadShowFollowBtn; // +0xc
    BOOL _hadShowFollowLikeBtn; // +0xd
    BOOL _hadReadAll; // +0xe
    BOOL _hadShowMinimizeButton; // +0xf
    BOOL _hadShowPromoteTips; // +0x10
    BOOL _hasLivePreviewEnough; // +0x11
    BOOL _hasLiveShowTapEducation; // +0x12
    BOOL _hasLiveShowLongPressSwitchIdentityEducation; // +0x13
    BOOL _hasLiveShowLongPressRepostShareEducation; // +0x14
    BOOL _hasLiveShowToolBarShareBtn; // +0x15
    BOOL _hasShowTipsCountDownTime; // +0x16
    BOOL _hasPendingHighEntropyExposeEndType; // +0x17
    BOOL _forceShowRingtoneGuide; // +0x18
    BOOL _hasShownRingtoneGuide; // +0x19
    BOOL _isRecommendReasonShowInLiveComment; // +0x1a
    BOOL _hadShowResumePlayingTips; // +0x1b
    BOOL _hadPlayed; // +0x1c
    BOOL _isAvatarLivingShowing; // +0x1d
    BOOL _videoCompleted; // +0x1e
    BOOL _hasShowPremovieAd; // +0x1f
    BOOL _isPremovieAdVideoManualPaused; // +0x20
    BOOL _isLastViewedBubbleFeed; // +0x21
    BOOL _isProfileAd; // +0x22
    BOOL _hasDragProgress; // +0x23
    BOOL _hasClickSeeLaterButton; // +0x24
    BOOL _isMemberShipFeedForPreview; // +0x25
    BOOL _isLiveReplayFeed; // +0x26
    BOOL _enableShowCollectionBubble; // +0x27
    BOOL _pressRating; // +0x28
    BOOL _isEffectiveAreaExpanded; // +0x29
    BOOL _hasSatisfactionQuestActioned; // +0x2a
    BOOL _hadPreFetchedRelated; // +0x2b
    BOOL _canShowPagExtendDynmicWording; // +0x2c
    BOOL _cellForceShowCreateTime; // +0x2d
    BOOL _cellShowOriginalEntryGuard; // +0x2e
    BOOL _cellShowHalfScreen; // +0x2f
    BOOL _cellDidDisplay; // +0x30
    BOOL _shouldLeadToOtherTabCellHidden; // +0x31
    BOOL _alwaysNavToVMRefComment; // +0x32
    int _recommendType; // +0x34
    int _pendingHighEntropyExposeEndType; // +0x38
    int _entryScene; // +0x3c
    unsigned int _previewJoinliveDelaySeconds; // +0x40
    int _checkPrefetchType; // +0x44
    int _statsReadType; // +0x48
    unsigned long long _friendWatchLivingCount; // +0x50
    WCFinderSnsShareInfo * _snsShareInfo; // +0x58
    NSString * _recommendReason; // +0x60
    NSString * _flowCardRecommandReason; // +0x68
    unsigned long long _liveOnlineCount; // +0x70
    unsigned long long _stickyTopTime; // +0x78
    NSString * _verifyInfo; // +0x80
    unsigned long long _firstVideoDataSource; // +0x88
    unsigned long long _showPromoteTipsEntry; // +0x90
    unsigned long long _curShowingEducationViewType; // +0x98
    FinderLiveInfo * _lastestLiveInfo; // +0xa0
    NSString * _internalFeedbackUrl; // +0xa8
    NSArray * _multiReason; // +0xb0
    unsigned long long _mediaType; // +0xb8
    NSString * _fluencyReportKey; // +0xc0
    OfflineModeStrategy * _offlineConfigData; // +0xc8
    WCFinderComment * _friendRecommendComment; // +0xd0
    NSArray * _carouselJumpInfoList; // +0xd8
    NSString * _highEntropyContentHeightCacheKey; // +0xe0
    double _highEntropyContentHeightCache; // +0xe8
    NSString * _statsPlayUuid; // +0xf0
    FriendRecommendCommentInfo * _commentRecommendInfo; // +0xf8
    unsigned long long _startExposePlaySec; // +0x100
    OriginalSoundInfo * _originalSoundInfo; // +0x108
    FinderObjectHelpPromotionInfo * _commentPromotionInfo; // +0x110
    FinderObjectControversialAlertInfo * _warningAlertInfo; // +0x118
    FinderObjectListenInfo * _listenInfo; // +0x120
    FinderObjectListenInfo * _audioInfo; // +0x128
    WCFinderNpsSurveyTaskDataWrap * _surveyTaskDataWrap; // +0x130
    WCFinderNpsSurveyTaskDataWrap * _commentSurveyTaskDataWrap; // +0x138
    double _menuExpTime; // +0x140
    NSNumber * _canShowRingtoneGuide; // +0x148
    NSString * _innerRecommendReason; // +0x150
    long long _liveForwardCount; // +0x158
    NSMutableSet * _hasShowIdSet; // +0x160
    unsigned long long _hardAdPhase; // +0x168
    NSMutableDictionary * _jumpInfoStyleDict; // +0x170
    SessionReportAdExtraInfo * _reportAdExtraInfo; // +0x178
    unsigned long long _shareScene; // +0x180
    FinderPromotionJumpInfo * _finderPromotionJumpinfo; // +0x188
    NSString * _avatarLivingID; // +0x190
    unsigned long long _ringSheetComponentFlag; // +0x198
    NSString * _ringFriendName; // +0x1a0
    unsigned long long _ringtoneFeedEnterType; // +0x1a8
    unsigned long long _shadowViewSourceType; // +0x1b0
    _TtC6WeChat17FinderBulletCache * _bulletCache; // +0x1b8
    unsigned long long _sectionInView; // +0x1c0
    NSString * _finderForwardSource; // +0x1c8
    NSString * _shareMsgSource; // +0x1d0
    NSString * _publisherId; // +0x1d8
    CMessageWrap * _shareOriginalMsgWrap; // +0x1e0
    unsigned long long _videoLoopCount; // +0x1e8
    FinderObjectAdvertisementInfo * _adInfo; // +0x1f0
    NSMutableArray * _adGuideJumpInfoArray; // +0x1f8
    unsigned long long _premovieAdShowState; // +0x200
    double _premovieAdVideoCurrentTime; // +0x208
    double _premovieAdFirstShowTime; // +0x210
    NSMutableSet * _cnyBulletSet; // +0x218
    NSMutableArray * _cnyBulletItemArray; // +0x220
    unsigned long long _adFlag; // +0x228
    double _lastRestoreProgress; // +0x230
    FinderUserPageHeaderAdsInfo_StyleInfo * _adToastInfo; // +0x238
    WCFinderEnhanceTriggerInfo * _enhanceTriggerInfo; // +0x240
    unsigned long long _refLikeID; // +0x248
    unsigned long long _refFavID; // +0x250
    NSString * _shareContentFromSns; // +0x258
    unsigned long long _flowAutoPlayStartTime; // +0x260
    unsigned long long _flowAutoPlayTime; // +0x268
    unsigned long long _streamPreviewJoinliveControlFlag; // +0x270
    NSString * _bindBusinessId; // +0x278
    NSString * _ecSource; // +0x280
    NSData * _feedsPreviewLiveMultiStyleInfoData; // +0x288
    FeedsPreviewLiveMultiStyleInfo * _feedsPreviewLiveMultiStyleInfo; // +0x290
    WCFinderFeedbackReasonFetchResult * _feedbackReasonFetchResult; // +0x298
    LiveRealnameFeatureInfo * _liveRealnameFeatureInfo; // +0x2a0
    FinderCollectionInfo * _collectionInfo; // +0x2a8
    NSString * _feedDisplayVCTitle; // +0x2b0
    FinderLiveCardHighlightTag * _liveHighlightTag; // +0x2b8
    WCFinderPushFeedViewParams * _pushFeedViewParams; // +0x2c0
    NSString * _exportId; // +0x2c8
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x2d0
    NSString * _authorThankTips; // +0x2d8
    NSString * _thankSharingTips; // +0x2e0
    id _uiExtData; // +0x2e8
    FinderLiveFeedBackInfo * _finderLiveFeedbackInfo; // +0x2f0
    MMFinderFeedStreamSatisfactionQuest * _satisfactionQuest; // +0x2f8
    unsigned long long _lastCastingTime; // +0x300
    FinderPreloadConfig * _preloadConfig; // +0x308
    NSDictionary * _feedClientInfo; // +0x310
    unsigned long long _tipsShownFlag; // +0x318
    unsigned long long _likeTipsCountAfterThumbHeartEdu; // +0x320
    unsigned long long _favTipsCountAfterThumbHeartEdu; // +0x328
    unsigned long long _replyCommentID; // +0x330
    long long _scrollSheetActionType; // +0x338
    WCFinderFeedAutoClearScreenDataModel * _autoClearScreedDataModel; // +0x340
    FinderPlayHistoryInfo * _profileFeedPlayHistory; // +0x348
    double _antiAddictionTimerStartTime; // +0x350
    NSMutableSet * _forceHiddenJumpInfoPanelPositionSet; // +0x358
    WCFinderFeedHighLightModel * _highlightModel; // +0x360
    FinderObjectAsyncLoadInfo * _asyncLoadInfo; // +0x368
    unsigned long long _currMutexFeatureViewTypes; // +0x370
    NSMutableDictionary * _jumpInfoPreloadDict; // +0x378
    unsigned long long _URLExpiredRetryCount; // +0x380
}
- (id)entranceMessageInfo;
- (BOOL)shouldShowFollowBtnWhenNotAlways;
- (BOOL)shouldShowFollowLikeBtnWhenNotAlways;
- (BOOL)canShowPauseButton;
- (BOOL)isShowingMutexFeatureViewType:(unsigned long long)arg1;
- (BOOL)canShowMutexFeatureViewType:(unsigned long long)arg1;
- (void)setShowMutexFeatureViewType:(unsigned long long)arg1;
- (void)resetShowMutexFeatureViewType:(unsigned long long)arg1;
- (id)dumpCurrMutexFeatureViewTypes;
- (void)setJumpInfoPreloadAtPlayTime:(unsigned long long)arg1 withId:(id)arg2;
- (BOOL)isJumpInfoPreloadedWithId:(id)arg1;
- (unsigned long long)jumpInfoPreloadAtPlayTimeWithId:(id)arg1;
- (id)hasShowIdSet;
- (id)jumpInfoPreloadDict;
- (id)jumpInfoStyleDict;
- (id)cnyBulletSet;
- (id)cnyBulletItemArray;
- (id)offlineConfigData;
- (id)enhanceTriggerInfo;
- (id)autoClearScreedDataModel;
- (BOOL)isShowingPremovieAd;
- (id)forceHiddenJumpInfoPanelPositionSet;
- (unsigned long long)friendWatchLivingCount;
- (void)setFriendWatchLivingCount:(unsigned long long)arg1;
- (id)snsShareInfo;
- (void)setSnsShareInfo:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (int)recommendType;
- (void)setRecommendType:(int)arg1;
- (id)flowCardRecommandReason;
- (void)setFlowCardRecommandReason:(id)arg1;
- (unsigned long long)liveOnlineCount;
- (void)setLiveOnlineCount:(unsigned long long)arg1;
- (BOOL)hasShowNoticeInfo;
- (void)setHasShowNoticeInfo:(BOOL)arg1;
- (unsigned long long)stickyTopTime;
- (void)setStickyTopTime:(unsigned long long)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (BOOL)hadLiked;
- (void)setHadLiked:(BOOL)arg1;
- (BOOL)hadFavorited;
- (void)setHadFavorited:(BOOL)arg1;
- (unsigned long long)firstVideoDataSource;
- (void)setFirstVideoDataSource:(unsigned long long)arg1;
- (BOOL)hadReadOver10s;
- (void)setHadReadOver10s:(BOOL)arg1;
- (BOOL)hadShowFollowBtn;
- (void)setHadShowFollowBtn:(BOOL)arg1;
- (BOOL)hadShowFollowLikeBtn;
- (void)setHadShowFollowLikeBtn:(BOOL)arg1;
- (BOOL)hadReadAll;
- (void)setHadReadAll:(BOOL)arg1;
- (BOOL)hadShowMinimizeButton;
- (void)setHadShowMinimizeButton:(BOOL)arg1;
- (unsigned long long)showPromoteTipsEntry;
- (void)setShowPromoteTipsEntry:(unsigned long long)arg1;
- (BOOL)hadShowPromoteTips;
- (void)setHadShowPromoteTips:(BOOL)arg1;
- (BOOL)hasLivePreviewEnough;
- (void)setHasLivePreviewEnough:(BOOL)arg1;
- (BOOL)hasLiveShowTapEducation;
- (void)setHasLiveShowTapEducation:(BOOL)arg1;
- (BOOL)hasLiveShowLongPressSwitchIdentityEducation;
- (void)setHasLiveShowLongPressSwitchIdentityEducation:(BOOL)arg1;
- (BOOL)hasLiveShowLongPressRepostShareEducation;
- (void)setHasLiveShowLongPressRepostShareEducation:(BOOL)arg1;
- (BOOL)hasLiveShowToolBarShareBtn;
- (void)setHasLiveShowToolBarShareBtn:(BOOL)arg1;
- (unsigned long long)curShowingEducationViewType;
- (void)setCurShowingEducationViewType:(unsigned long long)arg1;
- (id)lastestLiveInfo;
- (void)setLastestLiveInfo:(id)arg1;
- (id)internalFeedbackUrl;
- (void)setInternalFeedbackUrl:(id)arg1;
- (id)multiReason;
- (void)setMultiReason:(id)arg1;
- (BOOL)hasShowTipsCountDownTime;
- (void)setHasShowTipsCountDownTime:(BOOL)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)fluencyReportKey;
- (void)setFluencyReportKey:(id)arg1;
- (void)setOfflineConfigData:(id)arg1;
- (id)friendRecommendComment;
- (void)setFriendRecommendComment:(id)arg1;
- (id)carouselJumpInfoList;
- (void)setCarouselJumpInfoList:(id)arg1;
- (id)highEntropyContentHeightCacheKey;
- (void)setHighEntropyContentHeightCacheKey:(id)arg1;
- (double)highEntropyContentHeightCache;
- (void)setHighEntropyContentHeightCache:(double)arg1;
- (id)statsPlayUuid;
- (void)setStatsPlayUuid:(id)arg1;
- (BOOL)hasPendingHighEntropyExposeEndType;
- (void)setHasPendingHighEntropyExposeEndType:(BOOL)arg1;
- (int)pendingHighEntropyExposeEndType;
- (void)setPendingHighEntropyExposeEndType:(int)arg1;
- (id)commentRecommendInfo;
- (void)setCommentRecommendInfo:(id)arg1;
- (BOOL)forceShowRingtoneGuide;
- (void)setForceShowRingtoneGuide:(BOOL)arg1;
- (unsigned long long)startExposePlaySec;
- (void)setStartExposePlaySec:(unsigned long long)arg1;
- (id)originalSoundInfo;
- (void)setOriginalSoundInfo:(id)arg1;
- (id)commentPromotionInfo;
- (void)setCommentPromotionInfo:(id)arg1;
- (id)warningAlertInfo;
- (void)setWarningAlertInfo:(id)arg1;
- (id)listenInfo;
- (void)setListenInfo:(id)arg1;
- (id)audioInfo;
- (void)setAudioInfo:(id)arg1;
- (id)surveyTaskDataWrap;
- (void)setSurveyTaskDataWrap:(id)arg1;
- (id)commentSurveyTaskDataWrap;
- (void)setCommentSurveyTaskDataWrap:(id)arg1;
- (double)menuExpTime;
- (void)setMenuExpTime:(double)arg1;
- (BOOL)hasShownRingtoneGuide;
- (void)setHasShownRingtoneGuide:(BOOL)arg1;
- (id)canShowRingtoneGuide;
- (void)setCanShowRingtoneGuide:(id)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (BOOL)isRecommendReasonShowInLiveComment;
- (void)setIsRecommendReasonShowInLiveComment:(BOOL)arg1;
- (long long)liveForwardCount;
- (void)setLiveForwardCount:(long long)arg1;
- (BOOL)hadShowResumePlayingTips;
- (void)setHadShowResumePlayingTips:(BOOL)arg1;
- (BOOL)hadPlayed;
- (void)setHadPlayed:(BOOL)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (void)setHasShowIdSet:(id)arg1;
- (unsigned long long)hardAdPhase;
- (void)setHardAdPhase:(unsigned long long)arg1;
- (void)setJumpInfoStyleDict:(id)arg1;
- (id)reportAdExtraInfo;
- (void)setReportAdExtraInfo:(id)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (id)finderPromotionJumpinfo;
- (void)setFinderPromotionJumpinfo:(id)arg1;
- (id)avatarLivingID;
- (void)setAvatarLivingID:(id)arg1;
- (BOOL)isAvatarLivingShowing;
- (void)setIsAvatarLivingShowing:(BOOL)arg1;
- (unsigned long long)ringSheetComponentFlag;
- (void)setRingSheetComponentFlag:(unsigned long long)arg1;
- (id)ringFriendName;
- (void)setRingFriendName:(id)arg1;
- (unsigned long long)ringtoneFeedEnterType;
- (void)setRingtoneFeedEnterType:(unsigned long long)arg1;
- (unsigned int)previewJoinliveDelaySeconds;
- (void)setPreviewJoinliveDelaySeconds:(unsigned int)arg1;
- (unsigned long long)shadowViewSourceType;
- (void)setShadowViewSourceType:(unsigned long long)arg1;
- (id)bulletCache;
- (void)setBulletCache:(id)arg1;
- (unsigned long long)sectionInView;
- (void)setSectionInView:(unsigned long long)arg1;
- (id)finderForwardSource;
- (void)setFinderForwardSource:(id)arg1;
- (id)shareMsgSource;
- (void)setShareMsgSource:(id)arg1;
- (id)publisherId;
- (void)setPublisherId:(id)arg1;
- (id)shareOriginalMsgWrap;
- (void)setShareOriginalMsgWrap:(id)arg1;
- (BOOL)videoCompleted;
- (void)setVideoCompleted:(BOOL)arg1;
- (unsigned long long)videoLoopCount;
- (void)setVideoLoopCount:(unsigned long long)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)adGuideJumpInfoArray;
- (void)setAdGuideJumpInfoArray:(id)arg1;
- (BOOL)hasShowPremovieAd;
- (void)setHasShowPremovieAd:(BOOL)arg1;
- (unsigned long long)premovieAdShowState;
- (void)setPremovieAdShowState:(unsigned long long)arg1;
- (double)premovieAdVideoCurrentTime;
- (void)setPremovieAdVideoCurrentTime:(double)arg1;
- (BOOL)isPremovieAdVideoManualPaused;
- (void)setIsPremovieAdVideoManualPaused:(BOOL)arg1;
- (double)premovieAdFirstShowTime;
- (void)setPremovieAdFirstShowTime:(double)arg1;
- (void)setCnyBulletSet:(id)arg1;
- (void)setCnyBulletItemArray:(id)arg1;
- (unsigned long long)adFlag;
- (void)setAdFlag:(unsigned long long)arg1;
- (int)checkPrefetchType;
- (void)setCheckPrefetchType:(int)arg1;
- (int)statsReadType;
- (void)setStatsReadType:(int)arg1;
- (BOOL)isLastViewedBubbleFeed;
- (void)setIsLastViewedBubbleFeed:(BOOL)arg1;
- (double)lastRestoreProgress;
- (void)setLastRestoreProgress:(double)arg1;
- (BOOL)isProfileAd;
- (void)setIsProfileAd:(BOOL)arg1;
- (id)adToastInfo;
- (void)setAdToastInfo:(id)arg1;
- (void)setEnhanceTriggerInfo:(id)arg1;
- (unsigned long long)refLikeID;
- (void)setRefLikeID:(unsigned long long)arg1;
- (unsigned long long)refFavID;
- (void)setRefFavID:(unsigned long long)arg1;
- (BOOL)hasDragProgress;
- (void)setHasDragProgress:(BOOL)arg1;
- (BOOL)hasClickSeeLaterButton;
- (void)setHasClickSeeLaterButton:(BOOL)arg1;
- (id)shareContentFromSns;
- (void)setShareContentFromSns:(id)arg1;
- (unsigned long long)flowAutoPlayStartTime;
- (void)setFlowAutoPlayStartTime:(unsigned long long)arg1;
- (unsigned long long)flowAutoPlayTime;
- (void)setFlowAutoPlayTime:(unsigned long long)arg1;
- (unsigned long long)streamPreviewJoinliveControlFlag;
- (void)setStreamPreviewJoinliveControlFlag:(unsigned long long)arg1;
- (id)bindBusinessId;
- (void)setBindBusinessId:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)feedsPreviewLiveMultiStyleInfoData;
- (void)setFeedsPreviewLiveMultiStyleInfoData:(id)arg1;
- (id)feedsPreviewLiveMultiStyleInfo;
- (void)setFeedsPreviewLiveMultiStyleInfo:(id)arg1;
- (BOOL)isMemberShipFeedForPreview;
- (void)setIsMemberShipFeedForPreview:(BOOL)arg1;
- (id)feedbackReasonFetchResult;
- (void)setFeedbackReasonFetchResult:(id)arg1;
- (BOOL)isLiveReplayFeed;
- (void)setIsLiveReplayFeed:(BOOL)arg1;
- (id)liveRealnameFeatureInfo;
- (void)setLiveRealnameFeatureInfo:(id)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)feedDisplayVCTitle;
- (void)setFeedDisplayVCTitle:(id)arg1;
- (BOOL)enableShowCollectionBubble;
- (void)setEnableShowCollectionBubble:(BOOL)arg1;
- (id)liveHighlightTag;
- (void)setLiveHighlightTag:(id)arg1;
- (id)pushFeedViewParams;
- (void)setPushFeedViewParams:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (void)setEntranceMessageInfo:(id)arg1;
- (id)authorThankTips;
- (void)setAuthorThankTips:(id)arg1;
- (id)thankSharingTips;
- (void)setThankSharingTips:(id)arg1;
- (BOOL)pressRating;
- (void)setPressRating:(BOOL)arg1;
- (BOOL)isEffectiveAreaExpanded;
- (void)setIsEffectiveAreaExpanded:(BOOL)arg1;
- (id)uiExtData;
- (void)setUiExtData:(id)arg1;
- (id)finderLiveFeedbackInfo;
- (void)setFinderLiveFeedbackInfo:(id)arg1;
- (id)satisfactionQuest;
- (void)setSatisfactionQuest:(id)arg1;
- (BOOL)hasSatisfactionQuestActioned;
- (void)setHasSatisfactionQuestActioned:(BOOL)arg1;
- (unsigned long long)lastCastingTime;
- (void)setLastCastingTime:(unsigned long long)arg1;
- (id)preloadConfig;
- (void)setPreloadConfig:(id)arg1;
- (BOOL)hadPreFetchedRelated;
- (void)setHadPreFetchedRelated:(BOOL)arg1;
- (id)feedClientInfo;
- (void)setFeedClientInfo:(id)arg1;
- (unsigned long long)tipsShownFlag;
- (void)setTipsShownFlag:(unsigned long long)arg1;
- (unsigned long long)likeTipsCountAfterThumbHeartEdu;
- (void)setLikeTipsCountAfterThumbHeartEdu:(unsigned long long)arg1;
- (unsigned long long)favTipsCountAfterThumbHeartEdu;
- (void)setFavTipsCountAfterThumbHeartEdu:(unsigned long long)arg1;
- (BOOL)canShowPagExtendDynmicWording;
- (void)setCanShowPagExtendDynmicWording:(BOOL)arg1;
- (unsigned long long)replyCommentID;
- (void)setReplyCommentID:(unsigned long long)arg1;
- (BOOL)cellForceShowCreateTime;
- (void)setCellForceShowCreateTime:(BOOL)arg1;
- (BOOL)cellShowOriginalEntryGuard;
- (void)setCellShowOriginalEntryGuard:(BOOL)arg1;
- (BOOL)cellShowHalfScreen;
- (void)setCellShowHalfScreen:(BOOL)arg1;
- (BOOL)cellDidDisplay;
- (void)setCellDidDisplay:(BOOL)arg1;
- (BOOL)shouldLeadToOtherTabCellHidden;
- (void)setShouldLeadToOtherTabCellHidden:(BOOL)arg1;
- (long long)scrollSheetActionType;
- (void)setScrollSheetActionType:(long long)arg1;
- (void)setAutoClearScreedDataModel:(id)arg1;
- (id)profileFeedPlayHistory;
- (void)setProfileFeedPlayHistory:(id)arg1;
- (double)antiAddictionTimerStartTime;
- (void)setAntiAddictionTimerStartTime:(double)arg1;
- (void)setForceHiddenJumpInfoPanelPositionSet:(id)arg1;
- (id)highlightModel;
- (void)setHighlightModel:(id)arg1;
- (id)asyncLoadInfo;
- (void)setAsyncLoadInfo:(id)arg1;
- (BOOL)alwaysNavToVMRefComment;
- (void)setAlwaysNavToVMRefComment:(BOOL)arg1;
- (unsigned long long)currMutexFeatureViewTypes;
- (void)setCurrMutexFeatureViewTypes:(unsigned long long)arg1;
- (void)setJumpInfoPreloadDict:(id)arg1;
- (unsigned long long)URLExpiredRetryCount;
- (void)setURLExpiredRetryCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
