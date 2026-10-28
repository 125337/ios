@interface WCFinderFeedContentVM : NSObject <WCFinderContactExt, WCFinderDataItemExt, WCFinderJumpInfoExt, WCCommitViewResultDelegate, ForwardMessageLogicDelegate, TextStatePublishViewControllerDelegate, SharePreConfirmSheetViewDelegate, WCFinderLiveExt, WWKMsgForwarderDelegate, WCCanvasPageViewControllerExt, WCFinderGlobalPlaybackInfoExt, MMFinderLiveFeedExtraInfoFetchExt, WCFinderLiveNoticeCellViewModelDelegate>
{
    BOOL _forceExpand; // +0x8
    BOOL _forceRecExpand; // +0x9
    BOOL _photoScrollByManual; // +0xa
    BOOL _hideSeparatorLine; // +0xb
    BOOL _shouldForceDisableLikeAction; // +0xc
    BOOL _isPostingDataItem; // +0xd
    BOOL _isStreamHistoryItem; // +0xe
    BOOL _isStreamItemMarkRead; // +0xf
    BOOL _needsShowLikeTips; // +0x10
    BOOL _hasAlreadyShowedLikeTips; // +0x11
    BOOL _hasAlreadyShowePrivateAccountLikeTips; // +0x12
    BOOL _showFoldFeedInfo; // +0x13
    BOOL _allowsExternalPlayback; // +0x14
    BOOL _hasExposed; // +0x15
    BOOL _isNeedDisplayBulletSettingOption; // +0x16
    BOOL _imageFeedDisplayPauseTips; // +0x17
    BOOL _canShowFavFoldFeed; // +0x18
    BOOL _favRelateListEnableOnClick; // +0x19
    BOOL _isDisableTextExposeReport; // +0x1a
    BOOL _canShowLikeFoldFeed; // +0x1b
    BOOL _extLinkDisableClick; // +0x1c
    BOOL _fullShareListShowJumpFinderYet; // +0x1d
    BOOL _fullShareListShowMoreRelatedYet; // +0x1e
    BOOL _isShowingCommonBottomBannerView; // +0x1f
    BOOL _isMultiSceneEnable; // +0x20
    BOOL _isShowInSubScene; // +0x21
    BOOL _isInZoomInState; // +0x22
    BOOL _pausePannelLastIsShowState; // +0x23
    BOOL _dislikeFlagInRecommend; // +0x24
    BOOL _forbidTextViewClick; // +0x25
    BOOL _needStaticH; // +0x26
    BOOL _interestBottomViewHadShown; // +0x27
    BOOL _hasPostiveAction; // +0x28
    BOOL _hasNegativeAction; // +0x29
    BOOL _isShowingHighlightsPanel; // +0x2a
    BOOL _isFinderIdentity; // +0x2b
    BOOL _hasPreloadCommentList; // +0x2c
    BOOL _isVideoNeedSilentPaly; // +0x2d
    BOOL _isFriendLikeMSGFeed; // +0x2e
    BOOL _shareFromFastForward; // +0x2f
    BOOL _isCertificateType; // +0x30
    BOOL _liveEnableRotate; // +0x31
    int _scene; // +0x34
    int _lastShowCarouselBusinessType; // +0x38
    int _columnFromScene; // +0x3c
    int _columnToScene; // +0x40
    WCFinderDataItem * _dataItem; // +0x48
    NSString * _extensionKey; // +0x50
    double _unExpandConstTextHeight; // +0x58
    double _expandConstTextHeight; // +0x60
    unsigned long long _currentDisplayImageIndex; // +0x68
    unsigned long long _currentPageStartTimestamp; // +0x70
    double _uploadingProgress; // +0x78
    unsigned long long _refCommentID; // +0x80
    NSNumber * _commentListViewHeight; // +0x88
    NSString * _descriptionText; // +0x90
    unsigned long long _contentStyle; // +0x98
    NSString * _dataSceneClassName; // +0xa0
    double _createTime; // +0xa8
    unsigned long long _descriptionType; // +0xb0
    double _feedStayStartTimeInMs; // +0xb8
    double _currentPlayPosition; // +0xc0
    double _maxPlayPosition; // +0xc8
    WCFinderProgressBarStatusInfo * _progressBarStatusInfo; // +0xd0
    long long _timelineTabType; // +0xd8
    NSString * _likeEducateTips; // +0xe0
    double _foldCellCollectionOffsetX; // +0xe8
    double _playRate; // +0xf0
    unsigned long long _fromScene; // +0xf8
    unsigned long long _feedShareType; // +0x100
    WCFinderFeedLayoutContentVM * _favFoldlayoutContentVM; // +0x108
    NSString * _calTrailingLinkText; // +0x110
    unsigned long long _relateListActionType; // +0x118
    WCFinderFeedContentTempModel * _tempModel; // +0x120
    WCFinderFeedContentReportModel * _reportModel; // +0x128
    WCFinderObjectHotTopic * _hotNewsTopic; // +0x130
    FinderBarItem * _barItem; // +0x138
    NSString * _mappingBusinessId; // +0x140
    unsigned long long _refColumnId; // +0x148
    WCFinderLiveNoticeCellViewModel * _noticeCellViewModel; // +0x150
    WCFinderFeedVideoCellViewModel * _videoCellViewModel; // +0x158
    WCFinderFeedFriendRecommendCommentModel * _recommendCommentModel; // +0x160
    WCFinderContentCarouselViewModel * _carouselViewModel; // +0x168
    WCFinderFeedLikeDisplayViewModel * _likeDisplayViewModel; // +0x170
    unsigned long long _stopPlayCount; // +0x178
    unsigned long long _continuePlayCount; // +0x180
    NSString * _sessionExtraKey; // +0x188
    unsigned long long _videoReplayCount; // +0x190
    MMFinderLiveCastViewModel * _liveCastViewModel; // +0x198
    unsigned long long _chooseType; // +0x1a0
    NSData * _interestLastBuffer; // +0x1a8
    WCFinderProfilePreloadInfo * _profliePreloadInfo; // +0x1b0
    NSString * _fromSessionId; // +0x1b8
    FinderNpsSurveyInfo * _npsSurveyInfo; // +0x1c0
    WCFinderLiveFeedVM * _liveFeedVM; // +0x1c8
    double _startPlayProgress; // +0x1d0
    ForwardMessageLogicController * _forwardLogic; // +0x1d8
    NSString * _videoMediaPath; // +0x1e0
    unsigned long long _feedPhotoPreDownloadMaxCount; // +0x1e8
    NSString * _likeTailWording; // +0x1f0
    NSString * _multiLikeTailWording; // +0x1f8
    NSString * _fullFeedMultiLikeTailWording; // +0x200
    unsigned long long _contentUILayoutID; // +0x208
    SessionForwardRecordLogic * _forwardRecordLogic; // +0x210
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x218
    unsigned long long _liveLikeIconReportStyleType; // +0x220
    CGSize _profileStreamCacheSize; // +0x228
    CGSize _TLStreamCacheSize; // +0x238
}
+ (id)feedArrayCopyVMFromExistVM:(id)arg1 scene:(int)arg2;
+ (WCFinderDynamicIcon)fetchLikeTokenWithLikeFlag:(int)arg1 isPrivateAccount:(BOOL)arg2 objectType:(int)arg3 iconSize:(CGSize)arg4 customColor:(id)arg5;
+ (id)getFinderSecurityReportLinkByCommentScene:(int)arg1 feedId:(id)arg2 extParams:(id)arg3;
- (BOOL)curFeedCanOpenPIP;
- (BOOL)curFeedWillOpenPIP;
- (BOOL)isCurFeedInPIP;
- (BOOL)isColumnCardType;
- (BOOL)isLeadToOtherTabCardType;
- (BOOL)canShowLeadToOtherTabCard;
- (BOOL)canShowBulletControl;
- (BOOL)canShowRotateControl;
- (BOOL)isOpenFinderQuickShare;
- (BOOL)isLiveFeedDisLikeOpen;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
- (BOOL)isFastForward;
- (BOOL)isOpenLiveQuickShare;
- (BOOL)couldShare;
- (void)markLiveNoticeHideInFeed:(id)arg1;
- (void)finderLiveNoticeStatusChange;
- (void)finderLiveNoticeInfoUpdate;
- (id)getViewController;
- (BOOL)mentionListSelected;
- (void)setMentionListSelected:(BOOL)arg1;
- (BOOL)hasMentioned;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)clearLayoutCache;
- (BOOL)canShowCarousel;
- (id)mediaDispalyTitle;
- (id)mediaDisplayLinkColor;
- (id)mediaDisplayLinkBGColor;
- (BOOL)isMediaLinkClickEnable;
- (BOOL)isCommentBulletAnimationEnable;
- (id)getLimitModelScrollActionConfigIsAuthor:(BOOL)arg1 collectionFlag:(BOOL)arg2;
- (id)getNoIdentityActionConfigWithOptions:(unsigned long long)arg1;
- (id)getNormalScrollActionConfig;
- (id)getAuthorScrollActionConfig:(BOOL)arg1;
- (BOOL)canShowForwardSeeLater;
- (BOOL)canShowForwardEntry;
- (BOOL)canShowSetToSnsCoverEntry;
- (BOOL)canShowShareMomentsEntry;
- (BOOL)canShowFavCollectionEntry;
- (BOOL)canShowFinderHandOff;
- (BOOL)canShowLiveInternalSummaryPage;
- (id)getScrollActionConfigOptions:(unsigned long long)arg1;
- (id)getScrollActionFirstRowConfigOptions:(unsigned long long)arg1;
- (BOOL)enableShowHotTrendingSwitch;
- (BOOL)canShowDislike;
- (BOOL)canShowRecommendCommentBubble;
- (id)getScrollActionSecondRowConfigOptions:(unsigned long long)arg1;
- (BOOL)showDislikeButtonWithOptions:(unsigned long long)arg1;
- (BOOL)enableShowModFeedInfoEntry;
- (BOOL)canShowAddWarningTipsAction;
- (BOOL)canShowHotTreadingTipsOption;
- (BOOL)hotTreadingTipsSwitch;
- (void)updateShowHotTreadingTipsSwitch:(BOOL)arg1;
- (BOOL)canShowEditFeatureActionWithOptions:(unsigned long long)arg1;
- (BOOL)canShowPostWithMiaoJianEntry;
- (BOOL)mediaTypeSupportMoreAction;
- (void)searchHighToNormalTransform;
- (BOOL)showLiveBizInfo;
- (id)getLiveBrandParams;
- (BOOL)updateLiveEnableRotate:(BOOL)arg1;
- (unsigned long long)liveLikeIconReportStyleType;
- (WCFinderDynamicIcon)finderLikeIconWithViewerScene:(unsigned long long)arg1 iconSize:(CGSize)arg2 customColor:(id)arg3 useNormalIcon:(BOOL)arg4;
- (WCFinderDynamicIcon)finderLikeIconWithViewerScene:(unsigned long long)arg1;
- (WCFinderDynamicIcon)toolBarLikeDynamicIconLikeFlag:(int)arg1 feedObjectType:(int)arg2 iconSize:(double)arg3 isPrivateAccount:(BOOL)arg4 defaultColor:(id)arg5;
- (unsigned long long)getExposeStartTs;
- (void)setExposeStartTs:(unsigned long long)arg1;
- (unsigned long long)getAutoPlayStartTs;
- (void)setAutoPlayStartTs:(unsigned long long)arg1;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayTime:(unsigned int)arg1;
- (void)resetExposeSession;
- (BOOL)shouldShowFriendLikeViewForColumn;
- (id)columnRecommendReason;
- (BOOL)shouldShowRecommendReasonForColumn;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 dataScene:(id)arg3 isFinderIdentity:(BOOL)arg4;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 dataScene:(id)arg3 sessionExtraKey:(id)arg4;
- (BOOL)canShowInLandscapeWithCellIndex:(unsigned long long)arg1;
- (BOOL)canShowInLandscapeWithCellIndex:(unsigned long long)arg1 needCheckScaleingInfo:(BOOL)arg2;
- (BOOL)shouldShowJumpInfoPanelOnPosition:(int)arg1;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;
- (void)updateStreamShareData;
- (void)updateTempProperty;
- (id)initWithLayoutID:(unsigned long long)arg1 withContentStyle:(unsigned long long)arg2;
- (BOOL)isOnFreezeState;
- (unsigned long long)currentContentUILayoutID;
- (id)tempModel;
- (id)reportModel;
- (id)videoCellViewModel;
- (void)processLimitModeDataItemUpdate;
- (id)likeIconThickSvgName;
- (id)localTailStringForLikeCount:(long long)arg1;
- (id)friendLikeOnlyImageString;
- (id)friendLikeOnlyTextStringWithLikeCount:(long long)arg1;
- (id)friendLikeTailStringWithLikeCount:(long long)arg1 superLikeFlag:(BOOL)arg2;
- (id)displayDescriptionContent;
- (unsigned long long)rowForContent;
- (void)dealloc;
- (BOOL)isNeedSilentPlay;
- (void)setSilentPlayState:(BOOL)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)_onFinderContactChanged:(id)arg1;
- (BOOL)isFeedContainText;
- (BOOL)isDisplayHotCommentReady;
- (BOOL)isItemUploadingOrFail;
- (BOOL)isItemUploadFail;
- (BOOL)isItemUploadSuccess;
- (BOOL)existMediaContent;
- (BOOL)isFeedContainPhoto;
- (BOOL)isFeedContainVideo;
- (BOOL)isVideoMedia;
- (BOOL)hasExtReadingLink;
- (id)linkText;
- (BOOL)isPostingDataItem;
- (id)progressBarStatusInfo;
- (id)currentDisplayMediaInfo;
- (id)getContentVMDeleteTips;
- (id)contentTid;
- (id)finderUsername;
- (id)sessionBuffer;
- (id)extensionKey;
- (id)sortID;
- (unsigned long long)mediaType;
- (void)clickFullTextAction:(BOOL)arg1;
- (void)clickRecFullTextAction:(BOOL)arg1;
- (void)updateMediaPauseState:(BOOL)arg1;
- (BOOL)pauseState;
- (void)clickLikeFeedActionWithScene:(unsigned long long)arg1 reportScene:(int)arg2 isPrivateLike:(BOOL)arg3;
- (void)doubleClickLikeFeedActionWithScene:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)comboContinueLike;
- (void)updateFeedLikeStateActionWithScene:(unsigned long long)arg1 reportScene:(int)arg2 likeFlag:(int)arg3 sourceType:(int)arg4 cgiSuccessBlock:(id /* block */)arg5;
- (id)makeShareItemToMoment:(BOOL)arg1;
- (void)updateDataItemWarningFlag:(unsigned long long)arg1 warnWording:(id)arg2;
- (void)updateRestoreItem;
- (void)shareToMoment;
- (void)shareToMomentFromVC:(id)arg1 liveShareSceneIfLive:(long long)arg2;
- (void)shareToMomentInMainWindow;
- (void)addGMsgIdToMomentsItemIfNeeded:(id)arg1;
- (id)shareMessageWrap;
- (id)shareMessageWrapWithLiveShareSceneIfLive:(long long)arg1;
- (void)shareToFriendWithParams:(id)arg1;
- (void)shareToTextStateFromVC:(id)arg1;
- (void)shareActivityToTextStateFromVC:(id)arg1 customViewImage:(id)arg2 viewHeight:(double)arg3 eventHeadUrl:(id)arg4 eventNickname:(id)arg5 byPassInfoString:(id)arg6 relayIndex:(id)arg7;
- (void)shareActivityToFriend:(id)arg1 fromVC:(id)arg2 eventNickname:(id)arg3 eventHeadUrl:(id)arg4 byPassInfoString:(id)arg5 relayIndex:(id)arg6 finderLiveEventInfo:(id)arg7;
- (id)getActiviyFinderShareToFriendMessageWrapWithEventNickname:(id)arg1 eventHeadUrl:(id)arg2 byPassInfoString:(id)arg3 relayIndex:(id)arg4 finderLiveEventInfo:(id)arg5 liveShareSceneIfLive:(long long)arg6;
- (unsigned int)currentContentInnerAppMsgType;
- (BOOL)isSelfPrivate;
- (BOOL)isPhotoFeed;
- (BOOL)isPhotoWithBGM;
- (void)resetContentHeight;
- (void)updateHotCommentListDisplayName;
- (void)updateLikeListDisplayName;
- (BOOL)isRecommendFeed;
- (BOOL)isFoldFeed;
- (id)unreadFriendLikeArray;
- (BOOL)isLayoutFeed;
- (BOOL)isSelfPostFeed;
- (BOOL)isSelfClubContactPostFeed;
- (id)likeEducateTips;
- (void)setNeedsShowLikeTips:(BOOL)arg1;
- (BOOL)canShowFavFoldFeed;
- (BOOL)isHardAdLiveFeed;
- (BOOL)shouldHiddenAdCorner;
- (BOOL)shouldShowAdCorner;
- (BOOL)shouldResponseToTapGesture;
- (BOOL)shouldResponseToPanGesture;
- (BOOL)isMJAsyncCompositionTask;
- (BOOL)canInsertToFirstByStatusRefresh;
- (void)startDownloadImageImmediately;
- (void)startDownloadImagePriority:(BOOL)arg1;
- (void)cancelDownloadImage;
- (void)startDownloadImagePage:(unsigned long long)arg1;
- (void)startDownloadStreamImageImmediately;
- (void)startDownloadStreamImagePriority:(BOOL)arg1;
- (void)startDownloadAllThumbImageImmediately;
- (BOOL)followFlowUsingCustomCover;
- (void)generalStartDownloadImagePriority:(BOOL)arg1 maxCount:(unsigned long long)arg2 onlyThumb:(BOOL)arg3;
- (unsigned long long)getNormalFeedContentStatus;
- (unsigned long long)_getUploadFeedStatusWithDefaultStatus:(unsigned long long)arg1;
- (unsigned long long)getAuthorFeedContentStatus;
- (void)preloadActionWithValue:(id)arg1 actionType:(unsigned long long)arg2;
- (void)preloadCommentWithScene:(int)arg1 playPosition:(double)arg2 isPlayEnd:(BOOL)arg3;
- (void)disablePreloadComment;
- (void)cleanPreloadComment;
- (double)getGlobalPlayProgress;
- (double)getMaxPlayProgress;
- (double)getFeedLastPlayProgress;
- (void)observeGlobalProgressChange;
- (BOOL)canShowMembershipFlagButton;
- (id)membershipInfo;
- (BOOL)isInFinderTimeline:(int)arg1;
- (BOOL)checkMemberPaymentGuideViewNeedShow:(int)arg1;
- (BOOL)canShowJumpListenPage;
- (void)preloadFinderProfileCGI;
- (void)deleteComment:(id)arg1 scene:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)updateDataItem;
- (void)updateDataItem:(int)arg1 source:(long long)arg2 dataItem:(id)arg3;
- (void)callExtensionIfNeededWithOldJumpInfoContainer:(id)arg1 newJumpInfoContainer:(id)arg2 onShowPosition:(int)arg3;
- (void)sendLiveExtensionIfNeedWithOldDataItem:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onFinderDataItemRePostWithTid:(id)arg1;
- (void)onFinderDataItemPostFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostTemplateCommentSuccessfulWithCommentId:(unsigned long long)arg1 targetFeedId:(id)arg2 postFeedID:(id)arg3;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)updateCommentCountByPostingComment;
- (void)onFinderDataItemFoldLayoutHasUpdate:(id)arg1 scene:(int)arg2;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(BOOL)arg4;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByKeyExtention:(BOOL)arg2;
- (void)onFinderDataItemIsLikedFailed:(id)arg1;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFinderDataItemPrivateUpdate:(id)arg1 isPrivate:(BOOL)arg2;
- (void)onFinderDataItemLiveClose:(id)arg1;
- (void)onFinderDataItemWithTid:(id)arg1 asyncRecommendInfoUpdatedIncommentScene:(int)arg2;
- (void)onFinderDataItemWithTid:(id)arg1 adEntryItemChanged:(id)arg2;
- (void)onFinderDataItemWithTid:(id)arg1 jumpInfoContainerChanged:(id)arg2 commentScene:(int)arg3;
- (void)onFinderDataItemWithTid:(id)arg1 jumpInfoContainerChanged:(id)arg2 commentScene:(int)arg3 noExposeReport:(BOOL)arg4;
- (void)registerLiveStateExtensionIfNeeded;
- (void)onFinderLiveFriendLikeFeatureEnableUpdate:(BOOL)arg1 grayoutButton:(BOOL)arg2 realnameLikeIconType:(unsigned long long)arg3;
- (void)onRedCoverStateChanged:(id)arg1;
- (void)onCanvasViewDidBeDismissedWithPageId:(id)arg1;
- (BOOL)bulletMenuShowOpen;
- (void)setBulletCommentOpenLocally;
- (BOOL)shouldShowReplaySwitch;
- (BOOL)replaySwitchStateOn;
- (void)setReplaySwitchStateOffLocally;
- (void)onCanvasViewGotHalfRandomCard:(id)arg1 forPageId:(id)arg2;
- (void)onCanvasViewActionFinderBulletCommentWithBusinessType:(int)arg1 pageId:(id)arg2 commentScene:(int)arg3 actionType:(int)arg4 content:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)onFinderBulletCommentWithGroupKey:(id)arg1 businessType:(unsigned long long)arg2 actionType:(unsigned long long)arg3 content:(id)arg4 commentScene:(int)arg5 completionBlock:(id /* block */)arg6;
- (void)_handleCnyBulletCommentWithGroupKey:(id)arg1 businessType:(unsigned long long)arg2 actionType:(unsigned long long)arg3 content:(id)arg4 commentScene:(int)arg5 bulletCommentSource:(int)arg6 completionBlock:(id /* block */)arg7;
- (void)onFinderTargetDataItemMediaURLIsExpired:(id)arg1;
- (void)onFinderDataItemPlayHistoryInfoUpdateWithTid:(id)arg1 playHistoryInfo:(id)arg2;
- (void)onFinderDataItem:(id)arg1 modifyOriginalInfo:(id)arg2;
- (void)onFinderContactLivingStatusHasChange:(id)arg1;
- (void)onFinderDataStickyTopStateChanged:(id)arg1;
- (void)onFinderContactLastestLiveInfoUpdate:(id)arg1;
- (void)onFinderContactLastestLiveObjectUpdate:(id)arg1;
- (void)onFinderDataItemHotCommentUpdateWithTid:(id)arg1 hotCommentList:(id)arg2;
- (void)onFinderDataItemMediaCommentUpdateWithTid:(id)arg1 mediaCommentList:(id)arg2 optionFlag:(unsigned long long)arg3;
- (id)getTargetJumpInfoFromCarouselArray:(int)arg1;
- (id)getTargetJumpInfoFromJumpArray:(int)arg1;
- (unsigned long long)getCurBottomCarouselPostType;
- (BOOL)isTemplateCard;
- (void)onFinderDataItemJumpCarouselUpdateWithTid:(id)arg1 jumpInfoList:(id)arg2;
- (void)onFinderDataItemOriginalSoundInfoUpdateWithTid:(id)arg1 originalSoundInfo:(id)arg2;
- (void)onFinderDataItemPromotionInfoUpdateWithTid:(id)arg1 promotionInfo:(id)arg2;
- (void)onFeedBulletSwitchChangedNeedReflush:(id)arg1;
- (void)onFeedExtPersmissionFlagChanged:(id)arg1 flag:(int)arg2;
- (void)onFinderAsyncLoadInfoSuccessful:(id)arg1 scene:(int)arg2 asyncInfo:(id)arg3;
- (void)onFinderDataItemCommentRecommendFlagChangeWithTid:(id)arg1 comment:(id)arg2;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onTextStatePublished;
- (void)reverseCommentStateWithOpType:(unsigned long long)arg1;
- (void)changeFeedPrivateStateSucBlock:(id /* block */)arg1;
- (void)changeSubtitleStateWithBlock:(id /* block */)arg1;
- (int)_interactRealType;
- (int)interactRealType;
- (BOOL)isPrivateAccount;
- (BOOL)disableFavByPrivateAccount;
- (BOOL)disableForwardByPrivateAccount;
- (BOOL)isForceDisplayFeedCreateTime;
- (BOOL)disableForwardBySpamCheck;
- (BOOL)isStickyTop;
- (BOOL)canShowPatMusicEntry;
- (id)getPatMusicJumpInfo;
- (id)getPostSourceInfo;
- (BOOL)canShowTemplateVideoEntry;
- (BOOL)canShowRingToneEntry;
- (BOOL)canShowAirPlayEntry;
- (BOOL)canShowPauseButton;
- (BOOL)isShowingMutexFeatureViewType:(unsigned long long)arg1;
- (BOOL)canShowMutexFeatureViewType:(unsigned long long)arg1;
- (void)setShowMutexFeatureViewType:(unsigned long long)arg1;
- (void)resetShowMutexFeatureViewType:(unsigned long long)arg1;
- (id)dumpCurrMutexFeatureViewTypes;
- (void)tryPreloadTemplateInfo;
- (void)tryShowPromoteTips;
- (void)setFeedWidgetInfo:(id)arg1;
- (id)feedWidgetInfo;
- (BOOL)shouldShowFullScreenTipsBar;
- (BOOL)isFullScreenFollowHistoryTipsBarStyle;
- (BOOL)isFullScreenFriendRecommendTipsBarStyle;
- (BOOL)shouldShowFullScreenTimelineJumpView;
- (BOOL)feedHasBGM;
- (BOOL)canForwardToTextState;
- (BOOL)isAuthorViewerScene;
- (id)feedSecurityReportLink;
- (id)feedReportLiteAppQuery;
- (BOOL)enableResponseToFriendLikeToolbar;
- (unsigned long long)reportHotFriendCommentCount;
- (void)reportLiveFeedShare:(unsigned long long)arg1 quickShare:(BOOL)arg2 contactArray:(id)arg3;
- (unsigned long long)reportHotCommentCount;
- (unsigned long long)liveFeedStreamUIStyle;
- (BOOL)isEmptyLiveStyle;
- (BOOL)liveFeedShowProductView;
- (BOOL)liveFeedShowCommentView;
- (BOOL)liveFeedShowLikeView;
- (BOOL)liveFeedShowBrandLogo;
- (BOOL)liveFeedEnableLikeAction;
- (BOOL)liveFeedEnableForwardCount;
- (BOOL)liveFeedEnableShareButton;
- (BOOL)liveFeedEndEnableCancelRealNameLike;
- (void)fetchClosedLiveLikeForwardData:(id /* block */)arg1;
- (BOOL)liveFeedShouldEnterRoom;
- (void)setCurrentPlayPosition:(double)arg1;
- (unsigned int)carouselLatency;
- (void)fetchFeedbackReasonIfNeedWithLiveScene:(long long)arg1;
- (unsigned long long)friendLikeViewDisplayFlag;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1 playInfo:(id)arg2;
- (id)description;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setExtensionKey:(id)arg1;
- (BOOL)forceExpand;
- (void)setForceExpand:(BOOL)arg1;
- (BOOL)forceRecExpand;
- (void)setForceRecExpand:(BOOL)arg1;
- (double)unExpandConstTextHeight;
- (void)setUnExpandConstTextHeight:(double)arg1;
- (double)expandConstTextHeight;
- (void)setExpandConstTextHeight:(double)arg1;
- (unsigned long long)currentDisplayImageIndex;
- (void)setCurrentDisplayImageIndex:(unsigned long long)arg1;
- (unsigned long long)currentPageStartTimestamp;
- (void)setCurrentPageStartTimestamp:(unsigned long long)arg1;
- (BOOL)photoScrollByManual;
- (void)setPhotoScrollByManual:(BOOL)arg1;
- (double)uploadingProgress;
- (void)setUploadingProgress:(double)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)commentListViewHeight;
- (void)setCommentListViewHeight:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (unsigned long long)contentStyle;
- (void)setContentStyle:(unsigned long long)arg1;
- (BOOL)hideSeparatorLine;
- (void)setHideSeparatorLine:(BOOL)arg1;
- (BOOL)shouldForceDisableLikeAction;
- (void)setShouldForceDisableLikeAction:(BOOL)arg1;
- (id)dataSceneClassName;
- (void)setDataSceneClassName:(id)arg1;
- (double)getFetchDataItemTime;
- (void)setCreateTime:(double)arg1;
- (unsigned long long)descriptionType;
- (void)setDescriptionType:(unsigned long long)arg1;
- (double)feedStayStartTimeInMs;
- (void)setFeedStayStartTimeInMs:(double)arg1;
- (void)setIsPostingDataItem:(BOOL)arg1;
- (BOOL)isStreamHistoryItem;
- (void)setIsStreamHistoryItem:(BOOL)arg1;
- (CGSize)profileStreamCacheSize;
- (void)setProfileStreamCacheSize:(CGSize)arg1;
- (BOOL)isStreamItemMarkRead;
- (void)setIsStreamItemMarkRead:(BOOL)arg1;
- (double)currentPlayPosition;
- (double)maxPlayPosition;
- (void)setMaxPlayPosition:(double)arg1;
- (void)setProgressBarStatusInfo:(id)arg1;
- (CGSize)TLStreamCacheSize;
- (void)setTLStreamCacheSize:(CGSize)arg1;
- (long long)timelineTabType;
- (void)setTimelineTabType:(long long)arg1;
- (BOOL)needsShowLikeTips;
- (BOOL)hasAlreadyShowedLikeTips;
- (void)setHasAlreadyShowedLikeTips:(BOOL)arg1;
- (BOOL)hasAlreadyShowePrivateAccountLikeTips;
- (void)setHasAlreadyShowePrivateAccountLikeTips:(BOOL)arg1;
- (void)setLikeEducateTips:(id)arg1;
- (BOOL)showFoldFeedInfo;
- (void)setShowFoldFeedInfo:(BOOL)arg1;
- (double)foldCellCollectionOffsetX;
- (void)setFoldCellCollectionOffsetX:(double)arg1;
- (double)playRate;
- (void)setPlayRate:(double)arg1;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (int)lastShowCarouselBusinessType;
- (void)setLastShowCarouselBusinessType:(int)arg1;
- (BOOL)hasExposed;
- (void)setHasExposed:(BOOL)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (unsigned long long)feedShareType;
- (void)setFeedShareType:(unsigned long long)arg1;
- (BOOL)isNeedDisplayBulletSettingOption;
- (void)setIsNeedDisplayBulletSettingOption:(BOOL)arg1;
- (BOOL)imageFeedDisplayPauseTips;
- (void)setImageFeedDisplayPauseTips:(BOOL)arg1;
- (void)setCanShowFavFoldFeed:(BOOL)arg1;
- (BOOL)favRelateListEnableOnClick;
- (void)setFavRelateListEnableOnClick:(BOOL)arg1;
- (id)favFoldlayoutContentVM;
- (void)setFavFoldlayoutContentVM:(id)arg1;
- (BOOL)isDisableTextExposeReport;
- (void)setIsDisableTextExposeReport:(BOOL)arg1;
- (id)calTrailingLinkText;
- (void)setCalTrailingLinkText:(id)arg1;
- (BOOL)canShowLikeFoldFeed;
- (void)setCanShowLikeFoldFeed:(BOOL)arg1;
- (unsigned long long)relateListActionType;
- (void)setRelateListActionType:(unsigned long long)arg1;
- (void)setTempModel:(id)arg1;
- (void)setReportModel:(id)arg1;
- (BOOL)extLinkDisableClick;
- (void)setExtLinkDisableClick:(BOOL)arg1;
- (id)hotNewsTopic;
- (void)setHotNewsTopic:(id)arg1;
- (id)barItem;
- (void)setBarItem:(id)arg1;
- (BOOL)fullShareListShowJumpFinderYet;
- (void)setFullShareListShowJumpFinderYet:(BOOL)arg1;
- (BOOL)fullShareListShowMoreRelatedYet;
- (void)setFullShareListShowMoreRelatedYet:(BOOL)arg1;
- (BOOL)isShowingCommonBottomBannerView;
- (void)setIsShowingCommonBottomBannerView:(BOOL)arg1;
- (BOOL)isMultiSceneEnable;
- (void)setIsMultiSceneEnable:(BOOL)arg1;
- (BOOL)isShowInSubScene;
- (void)setIsShowInSubScene:(BOOL)arg1;
- (BOOL)isInZoomInState;
- (void)setIsInZoomInState:(BOOL)arg1;
- (id)mappingBusinessId;
- (void)setMappingBusinessId:(id)arg1;
- (unsigned long long)refColumnId;
- (void)setRefColumnId:(unsigned long long)arg1;
- (id)noticeCellViewModel;
- (void)setNoticeCellViewModel:(id)arg1;
- (void)setVideoCellViewModel:(id)arg1;
- (id)recommendCommentModel;
- (void)setRecommendCommentModel:(id)arg1;
- (id)carouselViewModel;
- (void)setCarouselViewModel:(id)arg1;
- (id)likeDisplayViewModel;
- (void)setLikeDisplayViewModel:(id)arg1;
- (BOOL)pausePannelLastIsShowState;
- (void)setPausePannelLastIsShowState:(BOOL)arg1;
- (unsigned long long)stopPlayCount;
- (void)setStopPlayCount:(unsigned long long)arg1;
- (unsigned long long)continuePlayCount;
- (void)setContinuePlayCount:(unsigned long long)arg1;
- (BOOL)dislikeFlagInRecommend;
- (void)setDislikeFlagInRecommend:(BOOL)arg1;
- (BOOL)forbidTextViewClick;
- (void)setForbidTextViewClick:(BOOL)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (unsigned long long)videoReplayCount;
- (void)setVideoReplayCount:(unsigned long long)arg1;
- (id)liveCastViewModel;
- (void)setLiveCastViewModel:(id)arg1;
- (BOOL)needStaticH;
- (void)setNeedStaticH:(BOOL)arg1;
- (unsigned long long)chooseType;
- (void)setChooseType:(unsigned long long)arg1;
- (id)interestLastBuffer;
- (void)setInterestLastBuffer:(id)arg1;
- (BOOL)interestBottomViewHadShown;
- (void)setInterestBottomViewHadShown:(BOOL)arg1;
- (id)profliePreloadInfo;
- (void)setProfliePreloadInfo:(id)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (id)npsSurveyInfo;
- (void)setNpsSurveyInfo:(id)arg1;
- (id)liveFeedVM;
- (void)setLiveFeedVM:(id)arg1;
- (int)columnFromScene;
- (void)setColumnFromScene:(int)arg1;
- (int)columnToScene;
- (void)setColumnToScene:(int)arg1;
- (double)startPlayProgress;
- (void)setStartPlayProgress:(double)arg1;
- (BOOL)hasPostiveAction;
- (void)setHasPostiveAction:(BOOL)arg1;
- (BOOL)hasNegativeAction;
- (void)setHasNegativeAction:(BOOL)arg1;
- (BOOL)isShowingHighlightsPanel;
- (void)setIsShowingHighlightsPanel:(BOOL)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)videoMediaPath;
- (void)setVideoMediaPath:(id)arg1;
- (BOOL)isFinderIdentity;
- (void)setIsFinderIdentity:(BOOL)arg1;
- (BOOL)hasPreloadCommentList;
- (void)setHasPreloadCommentList:(BOOL)arg1;
- (unsigned long long)feedPhotoPreDownloadMaxCount;
- (void)setFeedPhotoPreDownloadMaxCount:(unsigned long long)arg1;
- (BOOL)isVideoNeedSilentPaly;
- (void)setIsVideoNeedSilentPaly:(BOOL)arg1;
- (BOOL)isFriendLikeMSGFeed;
- (void)setIsFriendLikeMSGFeed:(BOOL)arg1;
- (id)likeTailWording;
- (void)setLikeTailWording:(id)arg1;
- (id)multiLikeTailWording;
- (void)setMultiLikeTailWording:(id)arg1;
- (id)fullFeedMultiLikeTailWording;
- (void)setFullFeedMultiLikeTailWording:(id)arg1;
- (unsigned long long)contentUILayoutID;
- (void)setContentUILayoutID:(unsigned long long)arg1;
- (id)forwardRecordLogic;
- (void)setForwardRecordLogic:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (BOOL)shareFromFastForward;
- (void)setShareFromFastForward:(BOOL)arg1;
- (BOOL)isCertificateType;
- (void)setIsCertificateType:(BOOL)arg1;
- (BOOL)liveEnableRotate;
- (void)setLiveEnableRotate:(BOOL)arg1;
- (unsigned long long)liveLikeIconReportStyleType;
- (void).cxx_destruct;
@end
