@interface WCFinderFullMultiMediaTableViewCell : WCFinderTableViewCell <WCFinderHalfScreenProtocol, WCFinderFeedContentMediaActionProtocol, WCFinderFeedContentVMExt, WCFinderFeedContentTextClickActionDelegate, WCFinderMelodyViewDelegate, ILinkEventExt, WCFinderFriendLikeToolbarViewDelegate, WCFinderFullInteractivePanelViewDelegate, WCFinderProgressPanelViewDelegate, WCFinderContactExt, WCFinderCommonBottomViewDelegate, WCFinderBriefIntroCradViewDelegate, MonoServiceMgrExt, WCSessionFlowMonitorExt, WCFinderHalfScreenListenProtocol, WCFinderPremovieAdHelperDelegate, WCFinderFeedbackViewDelegate, PAGViewListener, WCFinderMemberShipPaymentGuideViewDelegate, WCFinderMembershipFollowInfoExt, MMFinderLiveAirPlayExtension, WCFinderProgressBarExtendDelegate, WCFinderPortraitProgressPanelViewDelegate, WCFinderFeedHighlightsPanelDelegate, SnapshotPrinterViewProtocol, _TtP6WeChat17WCFinderVolumeExt_, WCFinderFeedLikeMilestoneViewDelegate, WCFinderFeedInlineStickerAdViewDelegate, _TtP6WeChat31FinderBulletOpenGuideBubbleHost_, WCFinderFocusCellProtocol, WCGeneralMonitorCellProtocol, WCFinderLockScreenServiceDelegate, WCFinderFeedOverlayHosting>
{
    BOOL _isForceDisableLikeAction; // +0x8
    BOOL _isEnableMediaHeaderShowFollowTips; // +0x9
    BOOL _hasReportExpose; // +0xa
    BOOL _disappearForHalfScreen; // +0xb
    BOOL _isInTriggerArea; // +0xc
    BOOL _hideProgressBarIfRotateToLandscape; // +0xd
    BOOL _needResumeVideo; // +0xe
    BOOL _inlineStickerAdDidReportExpose; // +0xf
    BOOL _bHadCheckNPSSurvey; // +0x10
    BOOL _bHadTriggerFinishPlayNPS; // +0x11
    BOOL _bHasShownNPSSurvey; // +0x12
    BOOL _bNeedShowNPSSurvey; // +0x13
    BOOL _isDismissingNPSFlutterSurvey; // +0x14
    BOOL _isShowingTing; // +0x15
    int _scene; // +0x18
    id <WCFinderFullMultiMediaTableViewCellDelegate> _delegate; // +0x20
    id <WCFinderNpsSurveyContextInfoDelegate> _npsDelegate; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
    unsigned long long _landScapeEnterType; // +0x38
    WCFinderCommonBottomBannerView * _commonBottomBannerView; // +0x40
    WCFinderFullNewMultiMediaView * _mediaView; // +0x48
    WCFinderMemberShipPaymentGuideView * _memberPaymentGuideView; // +0x50
    WCFinderTLRedCoverBubbleView * _redCoverBubbleView; // +0x58
    WCFinderFullInteractivePanelView * _interactivePanelView; // +0x60
    WCFinderInteractivePanelConfigParamsModel * _interactivePanelConfigModel; // +0x68
    unsigned long long _showingTipsType; // +0x70
    UIView * _premovieAdView; // +0x78
    UILabel * _premovieAdTipsLabel; // +0x80
    WCFinderFeedbackView * _premovieAdFeedbackView; // +0x88
    CAGradientLayer * _topGradientLayer; // +0x90
    CAGradientLayer * _bottomGradientLayer; // +0x98
    UITapGestureRecognizer * _tapGes; // +0xa0
    UIPanGestureRecognizer * _panGes; // +0xa8
    WCFinderShortTapGestureRecognizer * _likeGes; // +0xb0
    UILongPressGestureRecognizer * _longPressGes; // +0xb8
    id /* block */ _longPressHandler; // +0xc0
    double _offsetY; // +0xc8
    WCFinderAnimationLoadingView * _loadingView; // +0xd0
    double _videoDuration; // +0xd8
    double _maxPlayVideoTime; // +0xe0
    UILabel * _longVideoEntry; // +0xe8
    NSHashTable * _needRemoveViewSet; // +0xf0
    WCFinderProgressControlPanelConfigParamsModel * _progressControlConfigModel; // +0xf8
    WCFinderTableViewParamModel * _tableViewParamModel; // +0x100
    WCFinderLandscapeProgressPanelView * _landscapeProgressPanelView; // +0x108
    WCFinderPortraitProgressPanelView * _portraitProgressPanelView; // +0x110
    WCFinderLongPressRatePlayStateModel * _longPressRatePlayStateModel; // +0x118
    WCFinderTipBarView * _guideFinderEntranceBarView; // +0x120
    WCFinderProgressGuideView * _progressGuideView; // +0x128
    UIView * _bottomAreaTipsView; // +0x130
    WCFinderMoreRelatedContentView * _bottomAreaTipsButton; // +0x138
    unsigned long long _bottomAreaTipsGeneration; // +0x140
    MMUIButton * _moreActionButton; // +0x148
    WCFinderPremovieAdClientHelper * _premovieAdHelper; // +0x150
    WCFinderBackgroundPlayGuideView * _backgroundPlayGuideView; // +0x158
    WCFinderFeedContentVM * _backgroundPlayGuideContentVM; // +0x160
    NSObject * _backgroundPlayGuideDisplayToken; // +0x168
    NSMutableArray * _picExposeSequence; // +0x170
    NSMutableArray * _picAutoSequence; // +0x178
    NSMutableArray * _picManualSequence; // +0x180
    WCFinderAdReportInfo * _adReportInfo; // +0x188
    UIView * _cellBottomGradientView; // +0x190
    double _beginTouchProgressBarValue; // +0x198
    unsigned long long _currentDragType; // +0x1a0
    unsigned long long _panLockState; // +0x1a8
    WCFinderProgressFineTuneCalculator * _fineTuneCalculator; // +0x1b0
    unsigned long long _videoReplayCount; // +0x1b8
    unsigned long long _photoBgmReplayCount; // +0x1c0
    unsigned long long _feedStayStartTime; // +0x1c8
    WCFinderFeedSubtitleView * _feedSubtitleView; // +0x1d0
    _TtC6WeChat23FinderBulletCoordinator * _bulletCoordinator; // +0x1d8
    WCFinderBulletMenuController * _bulletMenuController; // +0x1e0
    unsigned long long _feedViewerScene; // +0x1e8
    WCFinderHalfMoveModel * _moveModel; // +0x1f0
    MMTimer * _heartReportTimer; // +0x1f8
    unsigned long long _heartReportTimerCount; // +0x200
    WCFinderPlaybackSpeedView * _playbackSpeedView; // +0x208
    WCFinderPlaybackSpeedSegmentView * _playbackSpeedSegmentView; // +0x210
    WCFinderLandscapeLockSpeedPanelView * _landscapeLockSpeedPanelView; // +0x218
    WCFinderLandscapeLongPressEduStateController * _landscapeEduController; // +0x220
    unsigned long long _longPressSpeedStartTime; // +0x228
    WCFinderFeedInlineStickerAdView * _inlineStickerAdView; // +0x230
    UIView * _inlineStickerAdGlassView; // +0x238
    UILabel * _inlineStickerAdRevenueLabel; // +0x240
    MMToastView * _inlineStickerAdToast; // +0x248
    unsigned long long _inlineStickerAdExposeStartTimeMs; // +0x250
    _TtC6WeChat33FinderNativeDramaFilingNumberView * _nativeDramaFilingNumberView; // +0x258
    UIView * _interestBottomView; // +0x260
    WCFinderCustomPanelSheet * _halfASGuidePanelSheet; // +0x268
    long long _latestExposeTimeStamp; // +0x270
    NPSFlutterVC * _curNPSFlutterVC; // +0x278
    FinderNpsSurveyTaskConf * _curTaskConf; // +0x280
    FinderNpsSurveyQuestion * _curSurveyQuestion; // +0x288
    long long _curTriggerEvent; // +0x290
    NSMutableArray * _curTriggerEvents; // +0x298
    unsigned long long _videoPinchState; // +0x2a0
    WCFinderTingEntryFlutterVC * _curTingEntryFlutterVC; // +0x2a8
    NSString * _tingEntryTid; // +0x2b0
    NSString * _realShownTeenagerRestTid; // +0x2b8
    UIView * _halfScreenFlutterContainerView; // +0x2c0
    WCFinderFeedLikeMilestoneView * _likeMilestoneView; // +0x2c8
    MMSnackBar * _didSaveMilestoneSnackBar; // +0x2d0
    WCFinderLandscapeBackButton * _landScapeBackButton; // +0x2d8
    UIImageView * _landScapeBackButtonBackgroundView; // +0x2e0
    WCFinderMagicAnimationLogic * _magicAnimationLogic; // +0x2e8
    NSMutableArray * _OCRAreaTipsViews; // +0x2f0
    WCFinderFeedHighlightsPanel * _currentHighlightsPanel; // +0x2f8
    WCFinderFullSwipEduView * _swipEduView; // +0x300
    WCFinderLikeEasterEggPresentCoordinator * _likeEasterEggPresentCoordinator; // +0x308
    CGPoint _hitPoint; // +0x310
    CGPoint _beginTouchPos; // +0x320
    CGRect _oriPlayerViewFrame; // +0x330
    CGRect _curPlayerViewFrame; // +0x350
}
+ (CGRect)ocrFrameWithPlayerFrame:(CGRect)arg1 mediaSize:(CGSize)arg2 ocrTextBox:(id)arg3;
+ (double)getInteractiveBottomLineIsSubScene:(BOOL)arg1;
+ (double)getInteractiveBottomLineIsSubScene:(BOOL)arg1 tableViewFrame:(CGRect)arg2;
+ (double)cellHeightWithIsSubScene:(BOOL)arg1;
+ (BOOL)enableShowSuspendJumpInfo:(id)arg1;
- (BOOL)checkIsOCRTextConflictWithViews;
- (id)getOcrAreasInCell;
- (id)getBlockBoxesForBulletInView:(id)arg1;
- (id)calculateBlockBoxesForBullet;
- (void)_resetHalfScreenState;
- (void)checkFeedHalfInvalidState;
- (void)prepareReuseHalfScreenMoveDataInfo;
- (void)listenNavigationBarAlpha:(BOOL)arg1;
- (void)changeCurNavigationControllerBarAlpha:(double)arg1;
- (double)currentNavigationbarAlpha;
- (BOOL)notResponseToHalfScreenInteracton;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (void)listenHalfScreenFrameChanged:(CGRect)arg1;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (void)safeCheckHalfScreenProgressCheckNow:(id)arg1;
- (unsigned long long)listenHalfScreenOption;
- (id)getRegisterKey;
- (id)getCurMediaWidHeightRatioValue;
- (void)triggerHalfStateCheck;
- (id)containingTableView;
- (void)cellStartExposeReportAction;
- (void)_performExposeReports;
- (id)_genPicSequenceArray;
- (void)checkFakeSucDataItem;
- (void)reportFinderTextMoreTopicAction;
- (void)cellEndExposeReportAction;
- (void)reportOriginContactEntranceWithEventType:(long long)arg1 originalContact:(id)arg2;
- (void)reportRecommendPOI:(long long)arg1;
- (void)reportPOIWithEventType:(long long)arg1;
- (void)reportEventWithEventType:(long long)arg1;
- (void)reportAvatarWithEventType:(long long)arg1;
- (void)reportHeaderFollowWithEventType:(long long)arg1;
- (void)reportReferSomeone:(id)arg1 withEventType:(long long)arg2;
- (id)reportUniversalJumperWithJumperInfoView:(id)arg1 entranceType:(int)arg2 eventType:(unsigned long long)arg3;
- (void)reportJumperExtStatsReportWithJumpInfo:(id)arg1 style:(id)arg2 entranceType:(int)arg3 actionType:(unsigned long long)arg4 clickArea:(int)arg5 actionInfo:(id)arg6 strValue:(id)arg7 dataItem:(id)arg8 adExtraInfo:(id)arg9;
- (id)reportUniversalJumperWithJumperInfoView:(id)arg1 entranceType:(int)arg2 eventType:(unsigned long long)arg3 clickArea:(int)arg4;
- (id)reportUniversalJumperWithJumperInfoView:(id)arg1 entranceType:(int)arg2 eventType:(unsigned long long)arg3 clickArea:(int)arg4 clientUdfKV:(id)arg5;
- (void)fillUniversalJumperReportUdfKV:(id)arg1 jumpInfo:(id)arg2;
- (id)reportUniversalJumperWithParams:(id)arg1;
- (id)reportJumpCarouselWithJumpInfoView:(id)arg1 eventType:(unsigned long long)arg2;
- (id)jumpInfoStyleToDict:(id)arg1;
- (void)reportAdEntryWithReportType:(long long)arg1;
- (void)updateSessionAdReportExtraInfo;
- (id)sessionAdReportExtraInfoWithJumperInfoView:(id)arg1;
- (id)nativeAdEntryViewForSessionReport;
- (id)adEntryViewForReport;
- (void)reportAdEntryWithJumperInfoView:(id)arg1 reportType:(long long)arg2;
- (void)reportAdEntryWithJumperInfoView:(id)arg1 reportType:(long long)arg2 extraInfo:(id)arg3;
- (id)adEntryViewOnShowPosition:(int)arg1;
- (void)reportAdGuideWithReportType:(unsigned long long)arg1;
- (id)getFeedPlayInfo;
- (void)reportTopicInfo:(id)arg1 withReportType:(unsigned long long)arg2;
- (void)reportExposePauseLikeProgressWithHiddenPauseButton:(BOOL)arg1;
- (void)reportLiveFeedExtStatsWithActionType:(unsigned long long)arg1;
- (void)reportTapEnterLiveCarouselWithActionType:(unsigned long long)arg1;
- (void)reportHotSpotLiveNoticeExposeWithPanelView:(id)arg1;
- (void)reportHotSpotLiveNoticeExposeWithJumpInfoView:(id)arg1;
- (void)reportHotspotLiveNoticeExposeWithNoticeInfo:(id)arg1 bypReportChnlExtra:(id)arg2;
- (void)reportNextLiveNoticeExposeWithPanelView:(id)arg1;
- (void)reportHotSpotLivingIconExposed;
- (void)reportHotSpotLivingIconClicked;
- (void)reportAvatarLivingExposeIfNeeded:(id)arg1;
- (void)reportAvatarLivingClick:(id)arg1;
- (void)markRedDotNotifyBubbleAction:(long long)arg1;
- (void)reportLiveToolbarExpose;
- (void)reportLiveToolbarShareWithActionType:(unsigned long long)arg1;
- (void)reportLiveToolbarLikeWithActionType:(unsigned long long)arg1;
- (id)_genLongPressAccelerateScreenBaseDictWithScreenType:(long long)arg1 playRate:(double)arg2;
- (id)_genLongPressAccelerateBaseDictWithModel:(id)arg1;
- (id)genLongPressTempSpeedPlayReportDictWithPlayRate:(double)arg1 duration:(double)arg2 screenType:(long long)arg3 leaveType:(long long)arg4;
- (void)reportLongPressChangePlayRate:(double)arg1 duration:(double)arg2 leaveType:(long long)arg3;
- (void)reportPortraitPressStateWithPressTime:(unsigned long long)arg1 startPressPoint:(CGPoint)arg2 pressView:(id)arg3;
- (void)reportClickToPauseOrResumeVideoWithStartPressPoint:(CGPoint)arg1 pressView:(id)arg2 isPause:(BOOL)arg3;
- (void)reportAutoCleanScreenEventWithTranslucentState:(BOOL)arg1;
- (id)genLandScapeBtnReportDict;
- (id)genAutoCleanScreenReportDictWithTranslucentState:(BOOL)arg1;
- (void)reportLongPressAcceleratePlayWithModel:(id)arg1;
- (void)reportLongPressAccelerateSwitchWithModel:(id)arg1;
- (id)finderFeedOverlayHostView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (id)cellBottomGradientView;
- (void)setFeedSubtitleView:(id)arg1;
- (void)openFeedSubtitleSetting;
- (id)landScapeBackButton;
- (id)landScapeBackButtonBackgroundView;
- (id)moreActionButton;
- (id)guideFinderEntranceBarView;
- (id)progressGuideView;
- (id)bottomAreaTipsView;
- (id)bulletMenuController;
- (id)bulletCoordinator;
- (BOOL)isVerticalVideo;
- (BOOL)isLandscapeVideo;
- (id)likeEasterEggPresentCoordinator;
- (id)needRemoveViewSet;
- (void)_clearNeedRemoveAnimationView;
- (id)jumpDebugCellStateForBullet;
- (void)resetBulletConfig;
- (void)presentBulletInputFromViewController:(id)arg1 replyCommentInfo:(id)arg2 showSwitchButton:(BOOL)arg3;
- (BOOL)needForceHideBulletAnimationView;
- (void)updateBulletAnimationViewHidden:(BOOL)arg1;
- (void)updateBulletAnimationViewHiddenStatus;
- (BOOL)showBulletOpenGuideBubbleWithText:(id)arg1 duration:(double)arg2 onDismiss:(id /* block */)arg3;
- (void)dismissBulletOpenGuideBubble;
- (void)dismissBulletOpenGuideBubbleWithUnexpReason:(long long)arg1;
- (BOOL)progressControlPanelHasExposedBulletOpenGuideBubble;
- (void)refreshBrowseBulletCommentSwitchState;
- (void)fetchBulletCommentWithTimestamp:(double)arg1;
- (void)resumeVideoIfNeeded;
- (void)hideInteractivePanelView;
- (id)getBottomTipBarView;
- (id)getRecommendFriendLikeAvatarContainerWithLikeInfoArray:(id)arg1;
- (id)getHeadImageViewWithUrl:(id)arg1;
- (id)longVideoEntry;
- (void)onClicklongVideoEntryAction;
- (void)showLongEntryBubbleIfPossible;
- (id)interactivePanelView;
- (BOOL)progressIsHidden;
- (unsigned long long)getStartImmersiveProgressBarDragStyle;
- (void)checkInteractivePanelViewProgressExtend;
- (void)configProgressPanelViewVisible;
- (id)progressControlPanelView;
- (id)landscapeProgressPanelView;
- (id)fineTuneCalculator;
- (id)landscapeEduController;
- (void)_applyLandscapeEduHintWordingForRate:(double)arg1;
- (BOOL)_isAutoClearScreenAlphaEnabled;
- (BOOL)_hasStickerAdMeta;
- (BOOL)_shouldEnableAutoClearScreen;
- (void)onVoiceOverStatusChangedForAutoClearScreen;
- (void)_restoreAutoClearScreenForStickerAdForce:(BOOL)arg1;
- (id)portraitProgressPanelView;
- (id)interactivePanelConfigModel;
- (id)progressControlConfigModel;
- (void)dealloc;
- (BOOL)showLiveState;
- (void)_updateMediaViewAccessibilityLabel;
- (id)accessibilityElements;
- (void)_appendAccessibilityChildren:(id)arg1 toArray:(id)arg2;
- (BOOL)isAccessibilityElement;
- (void)updateSubviewsStyle;
- (id)resolvedVideoBackgroundColor;
- (void)updateVideoBackgroundColor:(id)arg1;
- (void)updateMediaWith:(id)arg1 scene:(int)arg2 createTime:(id)arg3 topic:(id)arg4 eventInfo:(id)arg5 feedViewerScene:(unsigned long long)arg6 params:(id)arg7;
- (void)checkAndShowBubbles;
- (void)tryUpdateOcrTipsViews;
- (BOOL)updateMemberPaymentGuideViewHidden;
- (BOOL)_isNativeDramaLocked;
- (void)_stickAdStatusUpdate;
- (void)_saveInlineStickerAdState;
- (void)_hideInlineStickerAdToast;
- (void)_showInlineStickerAdToastWithMeta:(id)arg1;
- (void)_skipPendingInlineStickerAdIfNeededWithPlayPos:(double)arg1;
- (void)_syncPendingInlineStickerAdToastWhenEnterTriggerArea;
- (void)_showInlineStickerAdGlassViewIfNeeded;
- (void)_refreshInlineStickerAdGlassZOrderIfNeeded;
- (void)_ensureInlineStickerAdGlassZOrderAfterLikeMutation;
- (void)_showInlineStickerAdRevenueLabelIfNeeded;
- (void)_removeInlineStickerAdOverlayViews;
- (id)_inlineStickerAdGlassTargetBlurEffect;
- (id)_inlineStickerAdGlassEffectView;
- (BOOL)_isInlineStickerAdAnimating;
- (void)_recoverInlineStickerAdGlassVisibilityIfNeeded;
- (void)_resetInlineStickerAdAnimationState;
- (CGPoint)_inlineStickerAdScaledPositionForView:(id)arg1 anchorView:(id)arg2 scale:(double)arg3;
- (void)_addInlineStickerAdScaleAnimationForView:(id)arg1 anchorView:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4 duration:(double)arg5 delay:(double)arg6;
- (void)_animateInlineStickerAdShowWithCompletion:(id /* block */)arg1;
- (void)_updatePlayRateLabelForInlineStickerAdShowing:(BOOL)arg1;
- (void)_finishDismissInlineStickerAdWithView:(id)arg1;
- (void)_animateInlineStickerAdDismissWithView:(id)arg1;
- (CGRect)_inlineStickerAdFrame;
- (void)_showInlineStickerAdWithMeta:(id)arg1;
- (void)_cleanUpAfterInlineStickerAd;
- (void)_resumeFeedPlayAfterInlineStickerAdIfNeeded;
- (void)_dismissInlineStickerAd;
- (void)_dismissInlineStickerAdWithUnexpType:(unsigned long long)arg1;
- (void)inlineStickerAdView:(id)arg1 didTapJumpInfo:(id)arg2 showPosition:(int)arg3;
- (void)inlineStickerAdViewDidPlayToEndTime:(id)arg1;
- (void)inlineStickerAdViewDidTapPromotionButton:(id)arg1;
- (id)_inlineStickerAdReportParamsWithView:(id)arg1 includeShowPlayPercent:(BOOL)arg2 includePlayTime:(BOOL)arg3 includeAdSessionBuffer:(BOOL)arg4;
- (id)_inlineStickerAdSourceSessionBuffer;
- (void)_reportInlineStickerAdJumperExtStatsWithView:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3 actionType:(unsigned long long)arg4;
- (unsigned long long)_inlineStickerAdExposeTimeMs;
- (void)_reportInlineStickerAdWindowExpose:(id)arg1;
- (void)_reportInlineStickerAdWindowEndExposeWithUnexpType:(unsigned long long)arg1;
- (void)_reportInlineStickerAdCardClick:(id)arg1;
- (void)_reportInlineStickerAdLearnMoreExpose:(id)arg1;
- (void)_reportInlineStickerAdLearnMoreClick:(id)arg1;
- (void)_reportInlineStickerAdPromotionContentClick:(id)arg1;
- (void)_reportInlineStickerAdPromotionCloseClick:(id)arg1;
- (void)_reportInlineStickerAdPromptTipsExposeWithMeta:(id)arg1;
- (void)inlineStickerAdViewDidTapToShareStream:(id)arg1;
- (void)_layoutNativeDramaFilingNumberView;
- (void)updateInteractivePanelViewHidden:(BOOL)arg1;
- (void)showInteractivePanelOnlyHeaderAndToolBar;
- (void)updateLongVideoEntry;
- (void)updateLongVideoEntryAnimated:(BOOL)arg1;
- (void)updateLongVideoEntryColor;
- (void)updateLongVideoEntryHiddenStatus;
- (void)setLongVideoEntryHidden:(BOOL)arg1;
- (void)updateLongVideoEntryLayout;
- (void)updateLongVideoEntryVideoDuration:(double)arg1 currentPlayPosition:(double)arg2;
- (void)updatePanelViewShowState:(long long)arg1;
- (BOOL)_canShowOuterLandScapeBtn;
- (void)manualTriggerPauseVideoAction;
- (void)manualTriggerPauseVideoActionWithPauseType:(long long)arg1 passivePauseReason:(long long)arg2;
- (void)_manualTriggerPauseVideoAction:(BOOL)arg1;
- (void)_manualTriggerPauseVideoAction:(BOOL)arg1 pauseType:(long long)arg2 passivePauseReason:(long long)arg3;
- (void)_handleBriefCardViewCountdownStateStop:(BOOL)arg1;
- (void)updateVideoState:(BOOL)arg1;
- (void)pauseMediaForFinderHalfScreenTTSIfNeeded;
- (void)updateVideoState:(BOOL)arg1 pauseType:(long long)arg2 passivePauseReason:(long long)arg3;
- (void)_triggerAntiAddictCheckLogic;
- (void)pauseMediaPlayBySwitchFeed;
- (BOOL)isCurrentMediaPlaying;
- (BOOL)canReceiveFullAreaBackGesture;
- (BOOL)_canReceiveEdgeSwipGes:(CGPoint)arg1;
- (BOOL)pushSwipeGestureShouldBeginWithLocation:(CGPoint)arg1;
- (BOOL)isAuthorViewer;
- (void)showForwardHalfScreenGuide;
- (void)hideForwardHalfScreenGuide;
- (id)findPanelViewForLivingIcon;
- (id)findPanelViewForLiveNotice;
- (unsigned long long)currentLivingIconViewLiveId;
- (unsigned long long)currentLivingIconViewObjectId;
- (id)noticeJumpInfoAdReportInfo;
- (id)livingIconJumpInfoAdReportInfo;
- (unsigned long long)jumpInfoViewLivingIconType;
- (void)cellViewEnterBackground;
- (void)cellViewEnterForeground;
- (void)reportInlineStickerAdWindowEndExposeForPageDisappearIfNeeded;
- (void)checkPlayerViewIsBackground:(BOOL)arg1;
- (void)tryDowngradePlayVideoIfSupport;
- (void)layoutSubviews;
- (void)updatePageControlLayout;
- (void)onEventClick;
- (BOOL)currentSceneIsLandSpace;
- (BOOL)selfViewIsInIPhoneLandscape;
- (CGRect)convertMediaViewRectTo:(id)arg1;
- (CGRect)convertPureMediaViewRectTo:(id)arg1;
- (id)currentBindTid;
- (BOOL)isVaildMediaView;
- (BOOL)isVideoMedia;
- (BOOL)showDislikeTipsIfNeeded;
- (void)progressControlPanelClickSeeLaterButton:(id)arg1;
- (void)enterTriggerArea;
- (BOOL)canPhotoFeedPlay;
- (void)updatePhotoFeedMuteState;
- (BOOL)shouldDisablePhotoFeedAutoPlay;
- (void)startPhotoFeedPlay;
- (void)pausePhotoFeedPlay;
- (void)stopPhotoFeedPlay;
- (void)leaveTriggerArea;
- (BOOL)supportLockScreenControl;
- (void)willBeginDisplay:(long long)arg1;
- (void)didBeginDisplay;
- (void)didEndDisplay:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willBeginHalfScreenShow;
- (void)didEndHalfScreenShow;
- (BOOL)isSupportVideoProcess;
- (BOOL)canVideoFeedPlay;
- (void)updateVideoFeedMuteState;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2 pauseVideo:(BOOL)arg3;
- (void)showMemberShipFeedPlayForFreeTips;
- (void)stopVideoIfSupport;
- (BOOL)isLiveFeed;
- (BOOL)currentMediaIsPlay;
- (BOOL)isCurrentMediaSupportPlay;
- (BOOL)checkInterruptMinimizeIfNeeded;
- (id)currentMediaUnSupportPlayToast;
- (BOOL)currentMediaIsMute;
- (id)playerMeidaWrapIdentifier;
- (id)minimizeContentView:(BOOL)arg1;
- (void)restoreMinimizeContentView:(id)arg1 forPlay:(BOOL)arg2;
- (void)onRestoreMinimizeCompleted;
- (id)fetchCurrentMediaTransferableTarget;
- (id)extractPlayerViewForLandscapeAnimation;
- (void)restorePlayerViewForLandscapeAnimation:(id)arg1;
- (void)refreshToolbarUI:(id)arg1;
- (void)resetPlayProcessToBegin;
- (void)changeVideoSilenceStatue:(BOOL)arg1;
- (double)getCurrentPlayVideoTime;
- (double)getCurrentPlayVideoPercent;
- (double)getPlayVideoTotalTime;
- (double)getActualPlayingTimeInMs;
- (id)playSecondSet;
- (id)progressBarStatus;
- (void)setProgressBarStatus:(id)arg1;
- (void)resetCurrentVideoThumb;
- (id)getCurrendThumb;
- (id)getCurrentMediaThumbImage;
- (id)getCurrendInteractivePanelThumbImage;
- (id)takeMediaCellSnapshot;
- (void)updateVideoSnapshot;
- (void)updateSnapCapture;
- (id)snapshotViewForMeida;
- (id)snapshotImageForMedia;
- (id)userAvatarSnapshot;
- (unsigned long long)currentPage;
- (unsigned long long)getPreloadTaskStatus;
- (void)updateCurrentVideoThumb;
- (void)setPlayRate:(double)arg1;
- (void)setPlayRate:(double)arg1 resumeMediaPlay:(BOOL)arg2;
- (id)playerView;
- (id)liveCell;
- (void)resetInteractivePanelEduShadowBubbleView;
- (void)updateJumpInfoReportList;
- (BOOL)getPortraitProgressPanelHiddenState;
- (BOOL)curFeedCanOpenPIP;
- (BOOL)curFeedWillOpenPIP;
- (BOOL)isCurFeedInPIP;
- (void)onVideoThumbnailBackgroundColorUpdated:(id)arg1 contentTid:(id)arg2;
- (BOOL)isCurrentFeedCellFocused;
- (id)getTopBubbleView;
- (void)browseCollectionViewLongTime:(unsigned long long)arg1;
- (void)photoContentPageTurning:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2 scrollByManual:(BOOL)arg3;
- (void)array:(id)arg1 incrementItemAtIndex:(unsigned long long)arg2;
- (void)retryLoadingCoverImg;
- (void)retryLoadingVideoResource:(BOOL)arg1;
- (void)didSelectVideoMediaMuteChanged:(BOOL)arg1;
- (void)onImageViewDoubleTapAction:(id)arg1;
- (void)didFeedDoubleTapAction:(CGPoint)arg1;
- (id)createLikeCenterAnimationView;
- (void)afterLikeAction;
- (void)handleDoubleTapThumbLikeAction:(CGPoint)arg1;
- (BOOL)isEnableDoubleLikeAction;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)contentMediaDidSeekComplete:(double)arg1;
- (void)onCurrentBGMDidEndPlay:(id)arg1;
- (void)updatePlayPanelUIWithState:(unsigned long long)arg1;
- (void)autoPauseIfNeeded;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onClickMoreAction:(id)arg1;
- (BOOL)isMoreActionButtonShowing;
- (void)performMoreAction;
- (void)onVideoStopPlay;
- (void)onPhotoBGMDidPlay;
- (void)onPhotoBGMDidPause;
- (void)stopVideoPlayerWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (id)getContentFeedUsername;
- (void)onPlayerControlViewTapPauseVideo:(BOOL)arg1;
- (void)onImageViewTapAction;
- (void)onImageViewDidLoadImage:(id)arg1;
- (void)onPlayerControlViewTapToResumePlayVideo;
- (void)onPlayerControlViewPanEndToResumePlayVideoWithPlayPosition:(double)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (id)onVideoGetDescTopRightJumpInfoPanelView;
- (id)onVideoGetBottomGuideView;
- (void)onVideoPlayDecoderError:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onLivePhotoVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 mediaInfo:(id)arg3 index:(unsigned long long)arg4;
- (void)onLivePhotoVideoDidPlayToEndWithMediaInfo:(id)arg1 index:(unsigned long long)arg2;
- (void)collectionViewDidEndDeceleratingAtIndex:(unsigned long long)arg1;
- (void)setViewsOverLapPlayerIsTranslucent:(BOOL)arg1 userInteractionEnabled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)prefetchUniversalJumperWithMaxPlayTime:(double)arg1 forcePrefetch:(BOOL)arg2;
- (void)prefetchUniversalJumperWithJumpInfoView:(id)arg1 showPosition:(int)arg2 maxPlayTime:(double)arg3 forcePrefetch:(BOOL)arg4;
- (void)destroyMiniGameJsContextIfNeeded;
- (void)updateProgressBarAndPlayTimeLabelWithCurrentPlayDuration:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 manual:(BOOL)arg4;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (void)updateCurLoading;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isNewLoading;
- (void)startCycleLoading;
- (void)stopCycleLoading;
- (void)liveFeedDidTap:(id)arg1 routeModel:(id)arg2;
- (void)onLiveBeginPlay:(id)arg1;
- (void)unlockPortraitForManualRotationIfNeeded;
- (void)onLiveFeedClickWithJumpInfoView:(id)arg1;
- (void)onLiveFeedClickSearchComponent;
- (void)onLiveFeedClickRotateButton;
- (void)onLivePreviewEnoughTimeToShowFollowButton;
- (void)onLiveFeedFriendOpenWeChatProfile:(id)arg1;
- (void)onLiveFeedFriendLikeClickLikeList:(id)arg1;
- (void)onLiveFeedFriendLikeClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(BOOL)arg3;
- (void)onLiveFeedPlayStateChanged:(BOOL)arg1;
- (void)onLiveFeedRestoreMinimizeContentView;
- (BOOL)showLiveToolbarActionEducationTips:(unsigned long long)arg1 onClose:(id /* block */)arg2;
- (void)dismissLiveToolbarActionEducationTips;
- (void)onMediaScrollViewDidZoom:(id)arg1;
- (void)replayCurrentFocusCell;
- (CGRect)customPlayerViewRect;
- (CGRect)fetchMediaViewRect;
- (CGRect)fetchMediaCollectionViewRect;
- (double)fetchInteractivePanelTop;
- (void)_handleVideoPinchChange:(BOOL)arg1;
- (void)onVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2;
- (void)_showProgressAnchor:(double)arg1;
- (void)onVideoWithMediaId:(id)arg1 renderSize:(CGSize)arg2;
- (void)contentMediaDidStopPlay:(id)arg1;
- (void)onVideoPipWindowStart:(id)arg1;
- (void)onVideoPipWindowStop:(id)arg1;
- (void)onVideoSeekActionWithDirection:(BOOL)arg1;
- (void)shouldPauseByDeviceUnavailableAction;
- (void)onLiveFeedSatisfactionQuestVisibleStateChange:(BOOL)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2 isCertificateType:(BOOL)arg3;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)showPostTemplateCommetGuideBubbleViewWithRefDataItem:(id)arg1 commentId:(unsigned long long)arg2;
- (void)showSnsCommentGuideBubbleView:(id)arg1;
- (void)onFeedLiveAppointmentStatusChanged;
- (void)onFeedLiveAppointmentUpdate;
- (void)_updateLiveAppointmentState;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedContentWarnFlagChanged:(id)arg1;
- (void)onFeedContentUserFollowStateChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 privateStateChange:(BOOL)arg2;
- (void)onFinderContentVM:(id)arg1 asyncRecommendInfoUpdatedIncommentScene:(int)arg2;
- (void)postCNYBulletComment:(id)arg1 bulletCommentSource:(int)arg2 completion:(id /* block */)arg3;
- (void)onCNYBulletCommentNeedDisplay;
- (void)addFeedSubtitleViewIfNeeded;
- (void)onFeedSubtitlePermissionChanged:(id)arg1;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(BOOL)arg5;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLastestLivingItemUpdate:(id)arg1;
- (void)onFeedHotCommentChanged:(id)arg1;
- (void)onFeedJumpCarouselChanged:(id)arg1;
- (void)onFeedContentBeDisliked:(id)arg1;
- (void)onFeedBulletSwitchChangedNeedReflush:(id)arg1;
- (void)onFeedContent:(id)arg1 postTemplateCommentSuccessfulWithCommentId:(unsigned long long)arg2 targetFeedId:(id)arg3 postFeedID:(id)arg4;
- (void)onFinderDataItemDiagnosisDataChange:(id)arg1;
- (void)onFeedProgressAnchorInfoChange:(id)arg1;
- (int)contentVMTargetLikeFlagIsPrivateLike:(BOOL)arg1;
- (CGPoint)getDoubleLikeDisplayCenter;
- (void)showColumnSwipEdu;
- (void)tryShowDoubleFavFeedback;
- (void)tryShowDoubleFavEduAnimation;
- (void)showLikeMilestone:(id)arg1 isRestoring:(BOOL)arg2;
- (id)getTopContainerViewForLikeMilestone;
- (void)restoreLikeMilestoneIfNeed;
- (BOOL)isShowingLikeMilestone;
- (void)reportLikeMilestoneUnExposeForExitFinderIfNeed;
- (id)likeMilestoneReportParams;
- (BOOL)isMoreActionEduTipsShowing;
- (BOOL)isDislikeEduTipsShowing;
- (void)onFinderDataItemPlayHistoryInfoUpdateWithTid:(id)arg1 playHistoryInfo:(id)arg2;
- (void)onFeedBottomScrollUpAndShowMutexFeatureView:(unsigned long long)arg1;
- (void)onAirPlayAction:(int)arg1;
- (BOOL)mediaIsOnPlay;
- (BOOL)shouldCaluculateAsFocusCell;
- (CGRect)convertFocusRectToView:(id)arg1;
- (double)minPercentcellCanPlayDisplay;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onApplicationBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onProtectedDataWillBecomeUnavailableForBackgroundPlayGuide:(id)arg1;
- (void)onProtectedDataDidBecomeAvailableForBackgroundPlayGuide:(id)arg1;
- (void)viewableExposeReport;
- (void)doCellEndExposeAction;
- (void)checkShowOriginalEntryBubble;
- (void)checkShowSuspendJumpInfoGuideBubble;
- (void)checkShowRedPacketGuideBubble;
- (void)checkShowEmotionGuideBubble;
- (void)checkShowTingEntryIfNeeded;
- (BOOL)isTeenagerRestType;
- (void)showTingEntryFlutterPage;
- (void)dismissTingEntryFlutterView:(BOOL)arg1;
- (void)finishDismissTingEntry;
- (id)getTingEntryTid;
- (id)accessoryDownloadGroupKey;
- (BOOL)canBecomeFirstResponder;
- (void)showTextMenuWithRect:(CGRect)arg1;
- (void)clickLinkAction;
- (CGSize)cellIconSize;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyText;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)goToFriendLikeListDetail;
- (id)panGes;
- (id)tapGes;
- (id)likeGes;
- (id)longPressGes;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)arg1;
- (void)resumeMediaPlay;
- (void)onPan:(id)arg1;
- (void)_handlePanInLandscapeWithGesture:(id)arg1;
- (BOOL)_isTouchOnLandscapeProgressBar:(CGPoint)arg1 inView:(id)arg2;
- (void)_updateLandscapeProgressDragWithPan:(id)arg1 dragState:(unsigned long long)arg2;
- (void)onTap:(id)arg1;
- (void)_onTap:(id)arg1;
- (void)reportPauseButtonExpose;
- (void)resetAutoPauseArgs;
- (void)reportAcceleratePlayExpose;
- (void)triggerPauseVideoAction;
- (void)triggerPauseVideoActionWithPauseType:(long long)arg1 passivePauseReason:(long long)arg2;
- (void)updatePauseLikeProgressPanelHiddenStateTabDeselect;
- (void)reversePauseLikeProgressViewsHiddenState;
- (void)reversePauseLikeProgressViewsHiddenStateWithPauseSelectState:(BOOL)arg1;
- (void)onLikeFeed:(id)arg1;
- (void)onLongPressMedia:(id)arg1;
- (void)handleLongPressRateWithGesture:(id)arg1 isPortrait:(BOOL)arg2;
- (id)genLongPressAccelerateModelWithScreenType:(long long)arg1 duration:(double)arg2;
- (void)handleLongPressWithGesture:(id)arg1;
- (void)lightImpact;
- (BOOL)_isLandscapeLockSpeedTriggeredWithGesture:(id)arg1;
- (void)_updateLandscapeLockPanelVisibilityWithTriggered:(BOOL)arg1;
- (void)_setLandscapeLockSpeedPeerUIHidden:(BOOL)arg1;
- (void)_setLandscapeBackButtonHidden:(BOOL)arg1;
- (id)playbackSpeedSegmentItemsWithRateTypes:(id)arg1;
- (void)setPlaybackSpeedSegmentNonSelectedLabelsHidden:(BOOL)arg1;
- (void)updatePlaybackSpeedSegmentForConfirmationAreaTriggered:(BOOL)arg1;
- (void)_changeSpeedPlayWithPlayRate:(long long)arg1 isPortraitLongPress:(BOOL)arg2;
- (void)startSpeedPlay;
- (void)_setNecessaryViewUserInteractionEnable:(BOOL)arg1;
- (void)updateLandscapePlaybackSpeedViewVisibility;
- (void)_stopSpeedAdjustWithType:(long long)arg1;
- (void)stopSpeedPlayWithType:(long long)arg1;
- (BOOL)_shouldShowPlayRateResultWithFinalRateType:(long long)arg1 confirmationAreaTriggered:(BOOL)arg2;
- (void)_handlePlayBackSpeedViewStopActionWithType:(long long)arg1 showPlayRateResult:(BOOL)arg2;
- (void)stopSpeedPlayWithType:(long long)arg1 showPlayRateResult:(BOOL)arg2;
- (void)cancelLongPressSpeedPlayIfNeeded;
- (void)setGradientLayerHidden:(BOOL)arg1;
- (double)bottomGraddientTopY;
- (void)showCellBottomGradientViewHeight:(double)arg1 colors:(id)arg2;
- (void)removeCellBottomGradientView;
- (BOOL)_shouldEnableLongPressSetRateCommon;
- (BOOL)shouldEnablePortraitLongPressSetRate;
- (BOOL)shouldEnableLandscapeLongPressSetRate;
- (void)portaintLongPressRateSetNavigationBarHidden:(BOOL)arg1;
- (CGRect)longPressArea;
- (BOOL)isPanGesEnable:(CGPoint)arg1;
- (CGRect)progressHotRect;
- (CGRect)progressBarArea;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)interactivePanelVisibleHeightChanged;
- (double)topOfBottomContent;
- (void)interactivePanelBottomGradientHeightChanged;
- (void)interactivePanelClickEventEntry;
- (void)interactivePanelClickBannerJumpCarouselView:(id)arg1 style:(id)arg2;
- (void)onFeedOpenTingPlayerByParamsModel:(id)arg1;
- (void)onListenThumbLikeClicked:(id)arg1 jumpInfo:(id)arg2 style:(id)arg3;
- (void)interactivePanelClickButtonJumpCarouselView:(id)arg1 style:(id)arg2;
- (void)interactivePanelClickJumpCarouselShow;
- (void)interactivePanelClickPOILabel;
- (void)interactivePanelClickRedPacketLink;
- (void)interactivePanelClickMoreAction:(id)arg1;
- (void)interactivePanelClickThankForShareButtonWithThank:(BOOL)arg1;
- (void)interactivePanelHeaderClickAvatarWithContact:(id)arg1;
- (void)interactivePanelHeaderClickNicknameWithContact:(id)arg1;
- (void)openAvatarJumpInfoIfNeeded:(id)arg1 directFromVC:(id)arg2;
- (void)interactivePanelHeaderShowSpamTipsWithString:(id)arg1;
- (void)interactivePanelHeaderClickMoreBtn:(id)arg1;
- (void)interactivePanelHeaderClickFollowBtn:(id)arg1;
- (void)interactivePanelToolbarClickViewAllComment:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)interactivePanelToolbarClickRetryUploading:(id)arg1;
- (void)interactivePanelToolbarClickCancelUploading:(id)arg1;
- (void)interactivePanelToolbarRefreshToolbarUI:(id)arg1;
- (void)interactivePanelToolbarRefreshFriendLikeUI:(id)arg1;
- (void)interactivePanelToolbarFavDataFinished:(id)arg1;
- (void)interactivePanelToolbarClickRealNameAction;
- (void)interactivePanelToolbarClickLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)interactivePanelToolbarWillClickLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)interactivePanelToolbarLikeLongPressAction:(id)arg1 state:(unsigned long long)arg2;
- (void)interactivePanelToolbarLikeLongPressComplection:(id)arg1;
- (BOOL)tryShowAntiLikeMistouchPanel:(id /* block */)arg1;
- (BOOL)interactivePanelToolbarShouldShowConfirmPanelBeforeLikeAction:(id /* block */)arg1;
- (void)interactivePanelToolbarClickRecommendUrl:(id)arg1;
- (void)interactivePanelToolbarWillClickCollectionAction:(id)arg1;
- (void)interactivePanelToolbarClickCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)interactivePanelToolbarClickShareAction:(id)arg1 shareButton:(id)arg2;
- (void)showMoreActionSheetWithShareButton:(id)arg1;
- (void)interactivePanelToolbarClickFeedAllLikeAction:(id)arg1;
- (void)interactivePanelToolbarClickFeedAllFavAction:(id)arg1;
- (void)interactivePanelToolbarClickFeedAllViewedAction:(id)arg1;
- (void)interactivePanelToolbarBulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)interactivePanelToolbarBulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)changeAuthorBulletCommentOpenState:(BOOL)arg1 showSuccessToast:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateBulletCommentLayout:(BOOL)arg1;
- (void)onDeleteBulletComment:(id)arg1 result:(BOOL)arg2;
- (void)interactivePanelFriendLikeClickLikeList:(id)arg1;
- (void)interactivePanelFriendOpenWeChatProfile:(id)arg1;
- (void)interactivePanelFriendLikeRefreshFriendUI:(id)arg1;
- (void)interactivePanelFriendLikeClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(BOOL)arg3;
- (id)getLikeInfo;
- (void)onClickLikeToolBarThankState:(BOOL)arg1;
- (void)changeClickLikeThankState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimation:(unsigned long long)arg1 iconFrame:(CGRect)arg2;
- (void)interactivePanelTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)interactivePanelTextView:(id)arg1 clickText:(id)arg2 withRect:(CGRect)arg3;
- (void)interactivePanelTextView:(id)arg1 longPressedText:(id)arg2 withRect:(CGRect)arg3;
- (void)interactivePanelTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)interactivePanelTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)interactivePanelTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)interactivePanelTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)interactivePanelClickExtLink;
- (void)interactivePanelClickHotWord:(id)arg1;
- (void)interactivePanelClickCreateTimeLabel:(id)arg1;
- (void)interactivePanel:(id)arg1 didLongPressWithGesture:(id)arg2;
- (void)interactivePanelLastestLiveInfoClickAction:(id)arg1;
- (void)interactivePanelExposeWithJumpInfoView:(id)arg1;
- (void)interactivePanelReportUniversalJumperExposeWithJumpInfoView:(id)arg1;
- (void)interactivePanelClickWithJumpInfoView:(id)arg1 clickArea:(int)arg2 entranceType:(int)arg3;
- (void)interactivePanelWithJumpInfoView:(id)arg1 changeToStyleWithIndex:(unsigned long long)arg2;
- (void)interactivePanelJumpInfoCustomExposure:(id)arg1;
- (void)interactivePanelJumpInfoCustomClicked:(id)arg1;
- (void)interactivePanelTapSetRingToneGuideView;
- (void)interactivePanelTapHotComment:(id)arg1;
- (void)interactivePanelTapRecommendComment:(id)arg1;
- (void)interactivePanelTapEmotionCarouselComment:(id)arg1;
- (void)interactivePanelTapMultiImageCarouselComment:(id)arg1;
- (BOOL)interactivePanelShouldHideJumpInfo;
- (void)commonOnFeedCellClickHotComment:(id)arg1 enterType:(unsigned long long)arg2;
- (BOOL)interactivePanelMediaPlaying;
- (void)interactivePanelHotCommentCarousel;
- (void)pauseMediaPlayByBullet;
- (void)showBulletInputViewControllerWithReplyCommentInfo:(id)arg1;
- (void)interactivePanelClickCommentActionComment:(id)arg1 scene:(int)arg2;
- (void)interactivePanelClickRedPacketActionComment:(id)arg1 scene:(int)arg2;
- (void)interactivePanelClickOriginalEntryGuard;
- (void)interactivePanelClickPostSuspendJumpInfo:(id)arg1;
- (void)interactivePanelClickEmotionAction:(id)arg1 scene:(int)arg2;
- (id)getOcrAreasInPanelView:(id)arg1;
- (void)onClickCommonTipsViewWithType:(unsigned long long)arg1 contentVM:(id)arg2;
- (BOOL)canShowAutoScrollSheetTips:(id)arg1;
- (void)interactivePanelOnFeedInteractionResp:(id)arg1;
- (void)_showEmoticonDetailWithEmoticon:(id)arg1;
- (void)reserveNextLiveWithBubble:(id)arg1;
- (void)realReserveNextLiveWithBubble:(id)arg1 userName:(id)arg2 isReserve:(BOOL)arg3;
- (void)checkPremovieAdV2WithPlayPos:(double)arg1 videoDuration:(double)arg2;
- (void)openPremovieAdWithPlayPos:(double)arg1 videoDuration:(double)arg2 realPlayDuration:(double)arg3 lastDragProgressTime:(double)arg4;
- (BOOL)canShowPremovieAd;
- (BOOL)setupPremovieAdHelperAndViewsIfNeed;
- (void)showPremovieTipsAndAdLater;
- (void)doShowPremovieAd;
- (void)premovieAdOnPlayerStateChanged:(unsigned long long)arg1;
- (void)pauseWillShowPremovieAdIfNeed;
- (void)resumeWillShowPremovieAdIfNeed;
- (void)pausePremovieAdIfShowing;
- (void)_resumeInlineStickerAdIfShowing;
- (BOOL)restorePremovieAdIfNeed;
- (BOOL)restoreInlineStickerAdIfNeed;
- (BOOL)isShowingPremovieAd;
- (BOOL)_isShowingLegacyPremovieAd;
- (void)disposePremovieAdUI;
- (void)finderPremovieAdShouldShow;
- (void)changePremovieRelatedViewAlpha:(double)arg1;
- (void)finderPremovieAdShouldResume;
- (void)finderPremovieAdShouldPause;
- (void)finderPremovieAdShouldClose;
- (void)finderPremovieAdDidClickJumpInfo:(id)arg1;
- (void)finderPremovieAdFeedbackViewShouldShowWithAdLabelFrame:(CGRect)arg1;
- (void)finderPremovieAdFeedbackViewFrameShouldChangeWithAdLabelFrame:(CGRect)arg1;
- (void)finderPremovieAdVideoDidPlayTo:(double)arg1;
- (void)finderPremovieAdVideoOnManualPaused:(BOOL)arg1;
- (id)finderPremovieAdGetFeedContentVM;
- (id)finderPremovieAdGetCommonReportParams;
- (void)onFinderFeedSubtitleShowLanguageChanged:(id)arg1;
- (void)onFinderFeedSubtitleOpenStateChanged:(BOOL)arg1;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (void)_closeFeedbackView:(id)arg1 toastText:(id)arg2 autoClosePremovieAd:(BOOL)arg3;
- (id)premovieFeedbackParams;
- (double)immersiveProgressControlBottom;
- (void)progressControlPanelClickPauseButton:(id)arg1;
- (CGRect)progressControlPanelGetMediaArea;
- (id)progressControlPanelGetLongVideoEntry;
- (double)longVideoEntryHeight;
- (void)progressControlPanelClickPlayRateButton:(id)arg1;
- (void)progressControlPanelClickRotateButton:(id)arg1;
- (void)progressControlPanelClickBulletButton:(id)arg1;
- (void)progressControlPanelClickSkipForwardButton:(id)arg1 step:(double)arg2;
- (void)progressControlPanelClickSkipBackwardButton:(id)arg1 step:(double)arg2;
- (void)_changePlayerValueWithSkipStepInSecond:(double)arg1;
- (void)progressControlPanelClickSubtitleButton:(id)arg1;
- (void)progressControlPanelClickBackButton:(id)arg1;
- (void)progressControlPanelLandScapeStateDidHideSelf;
- (void)progressControlPanelClickJumpInfoView:(id)arg1;
- (void)layoutCurProgressBar;
- (void)progressControlPanelCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2 dragType:(unsigned long long)arg3;
- (void)replayAndHideProgressControlPanelView;
- (BOOL)isMediaContentReady;
- (BOOL)hasVideoTemplateBubbleEntrance;
- (void)hideProgressControlPanelView;
- (void)tryMarkPortraitProgressScrolled;
- (void)tryShowProgressGuideIfNeeded;
- (void)showProgressGuide;
- (void)tryShowProgressGuideView:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)dismissProgressGuideView;
- (id)interestBottomView;
- (void)tryShowBottomInterestView;
- (void)showBottomInterestView;
- (void)realShowBottomInterestView;
- (void)tryDismissBottomInterestViewAnimated;
- (void)removeBottomInterestView;
- (void)tryDismissBottomInterestView:(BOOL)arg1;
- (BOOL)showGuideJumpToFinderEntryView;
- (BOOL)_showBottomBannerViewWithShowDuration:(double)arg1;
- (BOOL)showBottomBannerViewWith:(id)arg1;
- (id)showGuideMoreRecommendView:(id)arg1;
- (BOOL)showGuideMoreRelatedView:(id)arg1;
- (void)tryShowScrollUpGuide;
- (void)tryShowFullShareWatchFinderGuide;
- (BOOL)canShowMoreRelatedTipsView;
- (void)showBottomAreaTips:(id)arg1 showArrow:(BOOL)arg2 forbidDismiss:(BOOL)arg3 identity:(unsigned long long)arg4;
- (void)updateBottomAreaTips:(id)arg1;
- (void)dismissBottomAreaTipsIfNeedAnimated:(BOOL)arg1 identities:(id)arg2;
- (void)_showBottomAreaTipsViewWithForbidDismiss:(BOOL)arg1 identity:(unsigned long long)arg2;
- (void)_dismissBottomAreaTipsWithIdentity:(id)arg1;
- (void)moveFeedEntityViewWithOffset:(double)arg1;
- (id /* block */)moveHeaderViewAndDisplayView:(id)arg1 UpwardSpacing:(double)arg2 movAnimDuration:(double)arg3;
- (void)onBottomAreaTipsButtonClicked;
- (void)commonBottomBannerViewonClickAction:(id)arg1;
- (void)commonBottomBannerViewonCloseAction:(id)arg1;
- (id)curTriggerEvents;
- (void)updateTriggerEventStackWithEvent:(long long)arg1 isActive:(BOOL)arg2;
- (id)getOneAvailableSurveyTaskDataWrap;
- (void)checkNpsFinishPlayWithDuration:(double)arg1 maxPlayTime:(double)arg2;
- (void)checkShowNPSSurveyIfNeeded;
- (void)checkShowNPSSurvey;
- (void)showNPSQuestion:(id)arg1;
- (void)prepareNPSFlutterSurvey;
- (BOOL)realShowNPSSurveyIfNeeded:(BOOL)arg1;
- (void)realShowNPSFlutterSurvey:(BOOL)arg1;
- (void)showNPSFlutterSurvey:(BOOL)arg1;
- (CGRect)createNPSTargetRect:(CGRect)arg1;
- (CGRect)createNPSLiveTargetRect;
- (void)reportNPSWithReportType:(unsigned int)arg1;
- (void)clickNPSQuestion:(id)arg1 surveyAnswer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (void)dismissNPSFlutterSurveyView:(BOOL)arg1 completed:(BOOL)arg2;
- (void)restoreNPSPlayerViewToFrame:(CGRect)arg1;
- (void)_dismissNPSFlutterSurveyView:(BOOL)arg1 completed:(BOOL)arg2;
- (void)briefIntroCardViewCountdownOver:(id)arg1;
- (void)setDecorationViewsTranslucent:(BOOL)arg1;
- (void)setMoreActionButtonAlpha:(double)arg1;
- (void)setViewsOverLapPlayerIsTranslucent:(BOOL)arg1;
- (void)setViewsOverLapPlayerUserInteractionEnabled:(BOOL)arg1;
- (void)setAllSubviewsAlphaZero:(BOOL)arg1;
- (void)setAllSubviewsAlphaZeroExceptBullet:(BOOL)arg1;
- (void)setAllSubviewsAlphaZero:(BOOL)arg1 except:(id)arg2;
- (void)_setViews:(id)arg1 isAlphaZero:(BOOL)arg2;
- (void)reportLandscapeWithKVReporter;
- (void)reportFeedStay;
- (void)_configPortraitRotateButtonReport;
- (void)_configLandscapeRotateButtonReportWithView:(id)arg1;
- (void)updateProgressControlPanelView:(BOOL)arg1;
- (void)updateFeedSubtitleViewUI;
- (BOOL)bulletCommentEnabled;
- (double)rightEntryMaxLeft;
- (void)hiddenBottomBannerView;
- (void)hiddenMoreRelatedTipsView;
- (long long)passivePauseReasonWithAudioModuleScene:(int)arg1;
- (long long)passivePauseReasonForAudioModuleInterruption;
- (long long)passivePauseReasonWithMonoServiceBusinessType:(unsigned long long)arg1;
- (BOOL)shouldKeepPlaybackStateForStreamVoiceInputInterruption;
- (void)pauseCurrentMediaForAudioInterruptionWithReason:(long long)arg1 source:(id)arg2 playerView:(id)arg3;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (void)mm_suppressInterruptionEndRotationAnimation;
- (void)onAVAudioSessionInterruption:(id)arg1;
- (void)pausePhotoFeedForAudioInterruptionWithReason:(long long)arg1 source:(id)arg2;
- (void)onBGMPlayerAudioModuleInterruptionBegin;
- (void)onBGMPlayerAudioModuleInterruptionEnd;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onAudioMonoServiceBussinessRemoved:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onVideoMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onVideoMonoServiceBussinessRemoved:(id)arg1 inMainScene:(BOOL)arg2;
- (BOOL)needHandleAudioMonoService:(id)arg1 inMainScene:(BOOL)arg2 eventName:(id)arg3;
- (void)willPresentHalfScreen;
- (void)resumeFromHalfScreen;
- (void)onSendEvent:(id)arg1;
- (id)getGeneralMonitorCellBizId;
- (CGRect)interactivePanelLongVideoEntryFrameInView:(id)arg1;
- (id)interactivePanelBulletFollowOcrAreasInView:(id)arg1;
- (double)interactivePanelBulletFollowAlpha;
- (BOOL)interactivePanelIsVerticalVideo;
- (CGPoint)interactivePanelBulletButtonCenterInView:(id)arg1;
- (void)clearBulletCommentFocus;
- (void)onClickNPSQuestion:(id)arg1 answer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (BOOL)isNPSFlutterSurveyShowing;
- (void)closeNPSBySwipe:(id)arg1;
- (void)superScrollViewDidScroll;
- (void)feedDidChanged:(id)arg1 toIndexPath:(id)arg2;
- (void)onClickTingEntryJump;
- (void)onClickTingEntryClose;
- (void)muteStateChanged;
- (id)getHalfMoveModel;
- (id)lightWhiteColor;
- (id)dynamicWhiteColor;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationRepeat:(id)arg1;
- (void)onConfirmButtonClicked;
- (void)finderProgressPanelDidClickExitPinchInButton;
- (BOOL)finderProgressPanelGetIsPinchInState;
- (void)finderProgressPanelClickPlayAnchor:(double)arg1;
- (void)finderProgressPanelDidBecomeSmaller;
- (void)_recoverInteractivePanelAfterSkipCooldown;
- (BOOL)finderProgressPannelHidePlayRateButton;
- (void)finderProgressPanelClickListenVideoButton:(id)arg1;
- (void)finderProgressPanelClickEffectiveAreaExpandButton:(id)arg1;
- (BOOL)isInGesturePinchState;
- (void)_setIsClickingLandscapeBtn:(BOOL)arg1;
- (BOOL)isRotateToLandscapeTriggerByButton;
- (void)willRotateToLandscape;
- (void)willResetToPortrait;
- (void)didResetToPortrait;
- (void)didResetToPortraitWithLandscapeStayTimeMs:(unsigned long long)arg1;
- (void)tryShowPortraitLockTipWithLandscapeStayTimeMs:(unsigned long long)arg1 triggeredByRotateButton:(BOOL)arg2;
- (void)didRotateToLandscape;
- (void)animatedShowPlayRateResultWithRate:(double)arg1 isTouch:(BOOL)arg2;
- (void)updateFeedTopRightJumpInfoForSpeedWithPlayRate:(double)arg1 waitForSpeedTips:(BOOL)arg2;
- (void)recoverFeedTopRightJumpInfoAfterSpeedIfNeeded;
- (void)onFinderFeedHighlightsPanelShowing:(id)arg1;
- (void)onFinderFeedHighlightsPanelDidDisappear:(id)arg1;
- (void)onFinderFeedHighlightsPanelSelectItemJumpToPlayTimestamp:(double)arg1;
- (id)extInfoForSnapshotPrinter;
- (id)feedLikeMilestoneViewGetReportParams;
- (void)feedLikeMilestoneViewDidSaveImageToAlbum:(id)arg1 forMilestone:(id)arg2;
- (void)hideDidSaveMilestoneSnackBar;
- (void)onLockScreenPlayCommand;
- (void)onLockScreenPauseCommand;
- (id)lockScreenDisplayTitle;
- (BOOL)isLockScreenMediaPlaying;
- (id)lockScreenContentVM;
- (id)lockScreenCoverImage;
- (BOOL)canUpdateLockScreenInfo;
- (void)onBackgroundPlaySettingUpdated:(id)arg1;
- (BOOL)showBackgroundPlayGuideAfterUnlockForFeedID:(id)arg1;
- (void)scheduleBackgroundPlayGuideDisplayAfterDelay:(double)arg1;
- (void)dismissBackgroundPlayGuide;
- (void)enableLockScreenControlIfNeeded;
- (void)clearLockScreenControl;
- (void)updateLockScreenInfo;
- (BOOL)isForceDisableLikeAction;
- (void)setIsForceDisableLikeAction:(BOOL)arg1;
- (BOOL)isEnableMediaHeaderShowFollowTips;
- (void)setIsEnableMediaHeaderShowFollowTips:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)npsDelegate;
- (void)setNpsDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (CGPoint)hitPoint;
- (void)setHitPoint:(CGPoint)arg1;
- (BOOL)hasReportExpose;
- (void)setHasReportExpose:(BOOL)arg1;
- (unsigned long long)landScapeEnterType;
- (void)setLandScapeEnterType:(unsigned long long)arg1;
- (BOOL)disappearForHalfScreen;
- (void)setDisappearForHalfScreen:(BOOL)arg1;
- (id)commonBottomBannerView;
- (void)setCommonBottomBannerView:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)memberPaymentGuideView;
- (void)setMemberPaymentGuideView:(id)arg1;
- (id)redCoverBubbleView;
- (void)setInteractivePanelView:(id)arg1;
- (void)setInteractivePanelConfigModel:(id)arg1;
- (unsigned long long)showingTipsType;
- (id)premovieAdView;
- (void)setPremovieAdView:(id)arg1;
- (id)premovieAdTipsLabel;
- (void)setPremovieAdTipsLabel:(id)arg1;
- (id)premovieAdFeedbackView;
- (void)setPremovieAdFeedbackView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setTapGes:(id)arg1;
- (void)setPanGes:(id)arg1;
- (void)setLikeGes:(id)arg1;
- (void)setLongPressGes:(id)arg1;
- (id /* block */)longPressHandler;
- (void)setLongPressHandler:(id /* block */)arg1;
- (double)offsetY;
- (void)setOffsetY:(double)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (double)maxPlayVideoTime;
- (void)setMaxPlayVideoTime:(double)arg1;
- (void)setLongVideoEntry:(id)arg1;
- (void)setNeedRemoveViewSet:(id)arg1;
- (void)setProgressControlConfigModel:(id)arg1;
- (id)tableViewParamModel;
- (void)setTableViewParamModel:(id)arg1;
- (void)setLandscapeProgressPanelView:(id)arg1;
- (void)setPortraitProgressPanelView:(id)arg1;
- (id)longPressRatePlayStateModel;
- (void)setLongPressRatePlayStateModel:(id)arg1;
- (void)setGuideFinderEntranceBarView:(id)arg1;
- (void)setProgressGuideView:(id)arg1;
- (void)setBottomAreaTipsView:(id)arg1;
- (id)bottomAreaTipsButton;
- (void)setBottomAreaTipsButton:(id)arg1;
- (unsigned long long)bottomAreaTipsGeneration;
- (void)setBottomAreaTipsGeneration:(unsigned long long)arg1;
- (void)setMoreActionButton:(id)arg1;
- (id)premovieAdHelper;
- (void)setPremovieAdHelper:(id)arg1;
- (id)backgroundPlayGuideView;
- (void)setBackgroundPlayGuideView:(id)arg1;
- (id)backgroundPlayGuideContentVM;
- (void)setBackgroundPlayGuideContentVM:(id)arg1;
- (id)backgroundPlayGuideDisplayToken;
- (void)setBackgroundPlayGuideDisplayToken:(id)arg1;
- (id)picExposeSequence;
- (void)setPicExposeSequence:(id)arg1;
- (id)picAutoSequence;
- (void)setPicAutoSequence:(id)arg1;
- (id)picManualSequence;
- (void)setPicManualSequence:(id)arg1;
- (BOOL)isInTriggerArea;
- (void)setIsInTriggerArea:(BOOL)arg1;
- (BOOL)hideProgressBarIfRotateToLandscape;
- (void)setHideProgressBarIfRotateToLandscape:(BOOL)arg1;
- (id)adReportInfo;
- (void)setAdReportInfo:(id)arg1;
- (void)setCellBottomGradientView:(id)arg1;
- (CGPoint)beginTouchPos;
- (void)setBeginTouchPos:(CGPoint)arg1;
- (double)beginTouchProgressBarValue;
- (void)setBeginTouchProgressBarValue:(double)arg1;
- (unsigned long long)currentDragType;
- (void)setCurrentDragType:(unsigned long long)arg1;
- (unsigned long long)panLockState;
- (void)setPanLockState:(unsigned long long)arg1;
- (void)setFineTuneCalculator:(id)arg1;
- (unsigned long long)videoReplayCount;
- (void)setVideoReplayCount:(unsigned long long)arg1;
- (unsigned long long)photoBgmReplayCount;
- (void)setPhotoBgmReplayCount:(unsigned long long)arg1;
- (unsigned long long)feedStayStartTime;
- (void)setFeedStayStartTime:(unsigned long long)arg1;
- (id)feedSubtitleView;
- (void)setBulletCoordinator:(id)arg1;
- (void)setBulletMenuController:(id)arg1;
- (unsigned long long)feedViewerScene;
- (void)setFeedViewerScene:(unsigned long long)arg1;
- (BOOL)needResumeVideo;
- (void)setNeedResumeVideo:(BOOL)arg1;
- (id)moveModel;
- (void)setMoveModel:(id)arg1;
- (id)heartReportTimer;
- (void)setHeartReportTimer:(id)arg1;
- (unsigned long long)heartReportTimerCount;
- (void)setHeartReportTimerCount:(unsigned long long)arg1;
- (id)playbackSpeedView;
- (void)setPlaybackSpeedView:(id)arg1;
- (id)playbackSpeedSegmentView;
- (void)setPlaybackSpeedSegmentView:(id)arg1;
- (id)landscapeLockSpeedPanelView;
- (void)setLandscapeLockSpeedPanelView:(id)arg1;
- (void)setLandscapeEduController:(id)arg1;
- (unsigned long long)longPressSpeedStartTime;
- (void)setLongPressSpeedStartTime:(unsigned long long)arg1;
- (id)inlineStickerAdView;
- (void)setInlineStickerAdView:(id)arg1;
- (id)inlineStickerAdGlassView;
- (void)setInlineStickerAdGlassView:(id)arg1;
- (id)inlineStickerAdRevenueLabel;
- (void)setInlineStickerAdRevenueLabel:(id)arg1;
- (id)inlineStickerAdToast;
- (void)setInlineStickerAdToast:(id)arg1;
- (unsigned long long)inlineStickerAdExposeStartTimeMs;
- (void)setInlineStickerAdExposeStartTimeMs:(unsigned long long)arg1;
- (BOOL)inlineStickerAdDidReportExpose;
- (void)setInlineStickerAdDidReportExpose:(BOOL)arg1;
- (id)nativeDramaFilingNumberView;
- (void)setNativeDramaFilingNumberView:(id)arg1;
- (void)setInterestBottomView:(id)arg1;
- (id)halfASGuidePanelSheet;
- (void)setHalfASGuidePanelSheet:(id)arg1;
- (long long)latestExposeTimeStamp;
- (void)setLatestExposeTimeStamp:(long long)arg1;
- (id)curNPSFlutterVC;
- (void)setCurNPSFlutterVC:(id)arg1;
- (id)curTaskConf;
- (void)setCurTaskConf:(id)arg1;
- (id)curSurveyQuestion;
- (void)setCurSurveyQuestion:(id)arg1;
- (long long)curTriggerEvent;
- (void)setCurTriggerEvent:(long long)arg1;
- (void)setCurTriggerEvents:(id)arg1;
- (CGRect)oriPlayerViewFrame;
- (void)setOriPlayerViewFrame:(CGRect)arg1;
- (CGRect)curPlayerViewFrame;
- (void)setCurPlayerViewFrame:(CGRect)arg1;
- (BOOL)bHadCheckNPSSurvey;
- (void)setBHadCheckNPSSurvey:(BOOL)arg1;
- (BOOL)bHadTriggerFinishPlayNPS;
- (void)setBHadTriggerFinishPlayNPS:(BOOL)arg1;
- (BOOL)bHasShownNPSSurvey;
- (void)setBHasShownNPSSurvey:(BOOL)arg1;
- (BOOL)bNeedShowNPSSurvey;
- (void)setBNeedShowNPSSurvey:(BOOL)arg1;
- (BOOL)isDismissingNPSFlutterSurvey;
- (void)setIsDismissingNPSFlutterSurvey:(BOOL)arg1;
- (unsigned long long)videoPinchState;
- (void)setVideoPinchState:(unsigned long long)arg1;
- (id)curTingEntryFlutterVC;
- (void)setCurTingEntryFlutterVC:(id)arg1;
- (id)tingEntryTid;
- (void)setTingEntryTid:(id)arg1;
- (BOOL)isShowingTing;
- (void)setIsShowingTing:(BOOL)arg1;
- (id)realShownTeenagerRestTid;
- (void)setRealShownTeenagerRestTid:(id)arg1;
- (id)halfScreenFlutterContainerView;
- (void)setHalfScreenFlutterContainerView:(id)arg1;
- (id)likeMilestoneView;
- (void)setLikeMilestoneView:(id)arg1;
- (id)didSaveMilestoneSnackBar;
- (void)setDidSaveMilestoneSnackBar:(id)arg1;
- (void)setLandScapeBackButton:(id)arg1;
- (void)setLandScapeBackButtonBackgroundView:(id)arg1;
- (id)magicAnimationLogic;
- (void)setMagicAnimationLogic:(id)arg1;
- (id)OCRAreaTipsViews;
- (void)setOCRAreaTipsViews:(id)arg1;
- (id)currentHighlightsPanel;
- (void)setCurrentHighlightsPanel:(id)arg1;
- (id)swipEduView;
- (void)setSwipEduView:(id)arg1;
- (void)setLikeEasterEggPresentCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
