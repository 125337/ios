@interface MMFinderLiveAudioRoomInfoView : UIView <MMFinderLiveAudioRoomMicUserViewDelegate, MMFinderLiveInfoMgrExt, MMLiveConnectMicUserLocationDisplayLogicDelegate, MMFinderLiveKTVStateExt, MMFinderLiveKTVManageExt, MMLiveAudioRoomSubTitleViewDelegate, MMFinderLiveLikeAudienceDataMgrExt, MMLiveLikeDataMgrExt, MMFinderLiveMicDoubleClickLikeGuideLogicDelegate>
{
    BOOL _canShowChatRoomSubTitleView; // +0x8
    BOOL _anchorIsTalking; // +0x9
    BOOL _isInSuperfanPKStyle; // +0xa
    BOOL _hasHandledJoinLiveFinished; // +0xb
    BOOL _isConnectMicDoubleClickLikeEnabled; // +0xc
    BOOL _isLongPressLikeActive; // +0xd
    BOOL _isMicLikeReceiveEnabled; // +0xe
    BOOL _enterAnyMode; // +0xf
    BOOL _needSpecialProcessKTV; // +0x10
    BOOL _isKTVMode; // +0x11
    id <MMFinderLiveAudioRoomInfoViewDelegate> _actionDelegate; // +0x18
    id <MMFinderLiveAudioRoomInfoViewGiftNotificationDelegate> _giftNotificationDelegate; // +0x20
    id <MMFinderLiveAudioRoomInfoLogicDelegate> _logicDelegate; // +0x28
    unsigned long long _viewScene; // +0x30
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x38
    MMLiveFeedPreviewTaskId * _previewTaskId; // +0x40
    MMFinderLiveKTVMusicContainerView * _ktvMusicContainerView; // +0x48
    WCFinderDataItem * _finderDataItem; // +0x50
    MMLiveAudioRoomContext * _audioRoomContext; // +0x58
    WCFinderContact * _anchorContact; // +0x60
    double _lastSafeAreaInsetTop; // +0x68
    UIImage * _backgroundImage; // +0x70
    UIImage * _normalBackgroundImage; // +0x78
    UIImage * _ktvSingingBackgroundImage; // +0x80
    UIImageView * _backgroundImageView; // +0x88
    UIColor * _audioWaveColor; // +0x90
    UIColor * _normalAudioWaveColor; // +0x98
    UIColor * _ktvSingingAudioWaveColor; // +0xa0
    UIView * _userInfoContainerView; // +0xa8
    UIScrollView * _ktvUserContainerView; // +0xb0
    UIView * _ktvUserBaseView; // +0xb8
    CAGradientLayer * _ktvUserContainerGradient; // +0xc0
    WCLiveBottomTextButton * _ktvSongBtn; // +0xc8
    UIView * _ktvSongBtnContainerView; // +0xd0
    UIView * _ktvSongBtnBaseView; // +0xd8
    UIView * _pkGlobalAnimationContainerView; // +0xe0
    MMFinderLiveAudioRoomCurrentAnchorView * _anchorUserView; // +0xe8
    MMFinderLiveConnectMicUsersInfo * _micUsersInfo; // +0xf0
    NSMutableDictionary * _micUserViewDict; // +0xf8
    NSMutableDictionary * _micSeatViewDict; // +0x100
    unsigned long long _currentMicUserCount; // +0x108
    MMLiveGradientLayerView * _leftTeamBackgroundView; // +0x110
    MMLiveGradientLayerView * _rightTeamBackgroundView; // +0x118
    UIImageView * _pkTimeIndicatorContainerView; // +0x120
    MMFinderLiveConnectMicPkProgressTimeIndicator * _pkTimeIndicatorView; // +0x128
    UIView * _topPkProgressView; // +0x130
    MMLiveGradientLayerView * _topPkLeftProgressBar; // +0x138
    MMLiveGradientLayerView * _topPkRightProgressBar; // +0x140
    PAGView * _topPkProgressIndicator; // +0x148
    UIImageView * _topPkLeftRewardIcon; // +0x150
    UIImageView * _topPkRightRewardIcon; // +0x158
    UILabel * _topPkLeftRewardLabel; // +0x160
    UILabel * _topPkRightRewardLabel; // +0x168
    MMFinderLivePkTaskedBonusBarBackgroundFrenzyView * _pkFrenzyView; // +0x170
    UIView * _drawAnimationContainerView; // +0x178
    PAGView * _drawAnimationView; // +0x180
    UIImageView * _multiAnchorsPkStartAnimationView; // +0x188
    unsigned long long _lastPkState; // +0x190
    NSString * _waitResultOriginalImageUrlString; // +0x198
    MMLiveConnectMicUserLocationDisplayLogic * _locationDisplayLogic; // +0x1a0
    UIView * _tempCoverView; // +0x1a8
    double _contentTopByNewStartController; // +0x1b0
    UIImageView * _imageViewForStartController; // +0x1b8
    UIView * _micSeatContainerForStartController; // +0x1c0
    NSMutableArray * _micSeatImageViewsForStartController; // +0x1c8
    MMFinderLiveKTVSingleIconView * _ktvSingleIconView; // +0x1d0
    UIView * _ktvSingingBgView; // +0x1d8
    CAGradientLayer * _ktvSingingBgGradient; // +0x1e0
    UIImageView * _ktvSingingBgImageView; // +0x1e8
    MMLiveKTVMinimizeContentView * _ktvRelatedLiveView; // +0x1f0
    UIView * _chatRoomUserBaseView; // +0x1f8
    CAGradientLayer * _chatRoomUserContainerGradient; // +0x200
    UIScrollView * _chatRoomUserContainerView; // +0x208
    UIView * _chatRoomEmptySeatBaseView; // +0x210
    MMFinderLiveAudioRoomMicUserView * _chatRoomEmptySeatView; // +0x218
    NSMutableArray * _chatRoomMicViewsList; // +0x220
    NSMutableArray * _chatRoomCachedSeatViewsList; // +0x228
    NSMutableArray * _ktvMicViewsList; // +0x230
    NSString * _micTopicTitle; // +0x238
    NSString * _micTopicContent; // +0x240
    UILabel * _micTopicTitleLabel; // +0x248
    UIView * _micTopicContentContainerView; // +0x250
    RichTextView * _micTopicContentTextView; // +0x258
    MMFinderLiveAudioRoomTalkingUserView * _chatRoomTalkingUserView; // +0x260
    MMLiveAudioRoomSubTitleView * _chatRoomSubTitleView; // +0x268
    MMLiveLikeAnimationUtil * _doubleClickedLikeAnimationUtil; // +0x270
    UIView * _likeAnimationWrapper; // +0x278
    MMFinderLiveConnectMicUser * _longPressLikeMicUserInfo; // +0x280
    UIView * _longPressTargetAvatarView; // +0x288
    unsigned long long _pendingAnchorLikeReportCount; // +0x290
    unsigned long long _pendingAnchorDoubleClickReportCount; // +0x298
    NSString * _pendingAnchorLikeReportUserName; // +0x2a0
    MMLiveLikeAnimationUtil * _micOtherLikeAnimationUtil; // +0x2a8
    NSMutableDictionary * _micLikePlayUtilDict; // +0x2b0
    MMLiveLikePlayUtil * _anchorLikePlayUtil; // +0x2b8
    MMFinderLiveMicDoubleClickLikeGuideLogic * _micDoubleClickLikeGuideLogic; // +0x2c0
    MMFinderLiveMicDoubleClickLikeGuideView * _micDoubleClickLikeGuideView; // +0x2c8
    long long _currFeedStreamSceneState; // +0x2d0
    MMFinderLiveKTVBox * _ktvBox; // +0x2d8
    unsigned long long _audioRoomScene; // +0x2e0
    CGRect _singingContentFrame; // +0x2e8
}
- (void)onAudioRoomSceneChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)processSEIPBForKTVSyncRecv:(id)arg1;
- (void)clearKTVDatasForExit;
- (void)onKTVModeChanged;
- (void)createKTVModels;
- (BOOL)needSpecialProcessKTV;
- (BOOL)isKTVMode;
- (id)ktvBox;
- (BOOL)isMinimizeModeInFeedStreamScene;
- (BOOL)isOnlyMinimizeModeInFeedStreamScene;
- (BOOL)isPIPModeInFeedStreamScene;
- (BOOL)isOnlyPIPModeInFeedStreamScene;
- (BOOL)isPIPOrMinimizeModeInFeedStreamScene;
- (BOOL)notAnyModeInFeedStreamScene;
- (void)prepareForEnterMinimizeModeInFeedStreamScene;
- (void)processForExitMinimizeModeInFeedStreamScene;
- (void)prepareForEnterPIPModeInFeedStreamScene;
- (void)processForExitPIPModeInFeedStreamScene;
- (void)prepareForEnterAnyMode;
- (void)processForExitAllMode;
- (id)initWithFrame:(CGRect)arg1 viewScene:(unsigned long long)arg2 andTaskId:(id)arg3;
- (id)initWithTaskId:(id)arg1 viewScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 viewScene:(unsigned long long)arg2;
- (void)initDefaultData;
- (void)dealloc;
- (void)clearDatasForExit;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)getLiveTask;
- (id)getFinderLiveTask;
- (BOOL)isViewSceneInLiveRoom;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)updateWithConnectMicUsersInfo:(id)arg1;
- (void)updateMicLocation;
- (id)generateGiftNotificationContainerViewsDict;
- (void)updateUserPkState;
- (void)updateLiveHeatValueForUserId:(id)arg1 withMicUserInfo:(id)arg2;
- (double)getContentBottom;
- (void)forceHideTagViewsForUserInfo:(id)arg1;
- (void)clearForceHideSeatNameLabelFlag;
- (void)handleJoinLiveFinished;
- (void)onEnterLive;
- (void)handleDataItemUpdated;
- (void)handleForLivePauseViewShowChanged:(BOOL)arg1;
- (id)minimizeSrcView;
- (void)attachTempCoverView:(id)arg1;
- (void)deAttachTempCoverView;
- (void)fixContentOffsetAfterOrientationChanged;
- (id)previewTaskId;
- (void)setFinderDataItem:(id)arg1;
- (void)setMicUsersInfo:(id)arg1;
- (id)uniqueTaskId;
- (id)getAnchorSdkUserId;
- (id)audienceLogReporter;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configUI;
- (void)configBackgroundImageView;
- (void)layoutBackgroundImageView;
- (void)updateContentTopByNewStartController:(double)arg1;
- (double)getContentTop;
- (double)getKTVContentTop;
- (double)getTopControlWidgetTopMarginOutOfLiveRoom;
- (void)configUserInfoContainerView;
- (void)layoutUserInfoContainerView;
- (void)configKTVSingleIconView;
- (void)configImageViewForStartController;
- (void)configMicSeatContainerForStartController;
- (void)layoutKTVSingleIconView;
- (void)layoutImageViewForStartController;
- (void)layoutMicSeatContainerForStartController;
- (void)configKTVRelatedLiveView;
- (void)layoutKTVRelatedLiveView;
- (void)configKTVMusicContainerView;
- (void)layoutKTVMusicContainerView;
- (void)updateKTVContainerViewHidden;
- (void)configKtvUserContainerView;
- (void)updateKTVUserBaseViewHidden;
- (void)openKtvRequestSongPanel;
- (void)layoutKtvUserContainerView;
- (void)updateKTVSongBtnBaseViewHidden;
- (void)configChatRoomUserContainerView;
- (void)configMicTopicViews;
- (void)updateMicTopicWithTitle:(id)arg1;
- (void)updateMicTopicWithContent:(id)arg1;
- (void)onMicTopicContentContainerViewTapped;
- (void)layoutChatRoomContainerView;
- (void)updateChatRoomContainerVisibility;
- (void)updateChatRoomSubTitleViewCanShow;
- (void)updateCanShowChatRoomSubTitleView:(BOOL)arg1;
- (void)layoutMicTopicViews;
- (void)configChatRoomTalkingUserView;
- (void)layoutChatRoomTalkingUserView;
- (void)configChatRoomSubTitleView;
- (void)layoutChatRoomSubTitleView;
- (void)onMMLiveAudioRoomSubTitleViewHiddenChanged:(id)arg1;
- (void)configKtvSingingBgView;
- (void)layoutKtvSingingBgView;
- (void)updateKtvSingingBgViewHidden;
- (void)updateKtvAudioRoomBg;
- (BOOL)canShowKtvSongBtn;
- (void)attachUserInfoView:(id)arg1;
- (void)layoutAnchorUserView;
- (CGRect)getFocusedItemViewFrame;
- (void)layoutConnectMicUsersView;
- (void)updateMicItemViewFrame:(id)arg1;
- (void)realUpdateItemViewFrame:(id)arg1 withMicIndex:(unsigned long long)arg2;
- (void)updateConnectMicViewsAndDict;
- (void)clearConnectMicViewsAndDict;
- (void)clearMicUserViewDict;
- (void)clearMicSeatViewDict;
- (void)clearKTVMicViewsList;
- (void)clearChatRoomMicViewsList;
- (void)clearChatRoomCachedSeatViewsList;
- (void)clearChatRoomEmptySeatView;
- (void)updateViewsWithUIChangeType:(unsigned long long)arg1;
- (void)updateViewWithSdkUserId:(id)arg1 andUIChangeType:(unsigned long long)arg2;
- (void)updateAllMicViewsAfterAudioWaveColorChanged;
- (void)updateAnchorIsTalking:(BOOL)arg1;
- (void)updateViewsAfterMicMutedStateChanged;
- (void)updateUserPkViews;
- (void)configureDrawAnimationView;
- (void)configureStartPkAnimationView;
- (void)configurePkTimeIndicatorView;
- (void)configureTeamingBackgroundView;
- (void)configureTopPkProgressView;
- (void)updateTopPkProgressView;
- (id)leftPkTeam;
- (id)rightPkTeam;
- (id)getTopPKProgressIndicatorPAGPath;
- (BOOL)isFeedStreamTask;
- (BOOL)showTopProgress;
- (void)layoutPkViews;
- (void)layoutDrawAnimationView;
- (void)layoutStartPkAnimationView;
- (void)layoutPkTimeIndicatorView;
- (void)layoutTeamingBackgroundView;
- (BOOL)isTimeIndicatorPermanentInPk;
- (void)updatePkAtmosphereBackgroundIfNeeded;
- (void)layoutTopPkProgressView;
- (BOOL)shouldUseKtvSingingBg;
- (void)updateBackgroundImage:(id)arg1 andWaveColor:(id)arg2 isKtvSongBg:(BOOL)arg3;
- (void)realUpdateBackgroundImage;
- (void)updateAudioRoomModeGiftNotificationContainerViews;
- (void)layoutTempCoverView;
- (void)onMMFinderLiveAudioRoomMicUserViewTappedWithUserInfo:(id)arg1 micSeatInfo:(id)arg2 targetView:(id)arg3;
- (void)onMMFinderLiveAudioRoomMicUserViewDoubleTappedWithUserInfo:(id)arg1 touchPoint:(CGPoint)arg2 targetView:(id)arg3;
- (void)playAvatarPulseAnimation:(id)arg1;
- (void)onMMFinderLiveAudioRoomMicUserViewLongPressBeganWithUserInfo:(id)arg1 targetView:(id)arg2;
- (void)onMMFinderLiveAudioRoomMicUserViewLongPressEndedWithUserInfo:(id)arg1 targetView:(id)arg2;
- (void)reportAnchorLikeForConnectMicWithUserName:(id)arg1 isDoubleClick:(BOOL)arg2;
- (void)flushPendingAnchorLikeReport;
- (void)executeLongPressLike;
- (void)playAvatarLongPressEnlargeAnimation:(id)arg1;
- (void)playAvatarLongPressReduceAnimation:(id)arg1;
- (void)onKtvSingerDoubleTapped:(id)arg1 touchPoint:(CGPoint)arg2 targetView:(id)arg3 micUserInfo:(id)arg4;
- (void)onKtvSingerLongPressBegan:(id)arg1 targetView:(id)arg2 micUserInfo:(id)arg3;
- (void)onKtvSingerLongPressEnded:(id)arg1 targetView:(id)arg2;
- (void)onMMFinderLiveAudioRoomMicUserViewLoadAvatarImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)onMMFinderLiveAudioRoomMicUserViewTappedMicMutedButtonWithUserInfo:(id)arg1;
- (void)onFinderLiveAudioRoomBackgroundImageInfoUpdated:(id)arg1 originalUrlString:(id)arg2;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemBasicInfoUpdated:(id)arg3;
- (void)onLiveKTVAllWaitSongCountUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)onLiveConnectMicAnchorUserLocationDisplayEnded;
- (void)onLiveConnectMicUserLocationDisplayEndedWithUserIdList:(id)arg1;
- (void)configDoubleClickLike;
- (void)configMicDoubleClickLikeGuide;
- (BOOL)canShowMicDoubleClickLikeGuide;
- (id)getFirstNonAnchorMicUserViewForGuide;
- (void)showMicDoubleClickLikeGuideAtView:(id)arg1;
- (void)dismissMicDoubleClickLikeGuide;
- (void)onLiveLikeAudienceIsLikeEnabledChangedWithTaskId:(id)arg1;
- (void)onLiveLikeAudienceDisplayLikeCountUpdate:(unsigned long long)arg1 othersDisplayLikeCount:(unsigned long long)arg2 taskId:(id)arg3 micId:(id)arg4;
- (void)onLiveLikeAudienceLikeContactListUpdate:(id)arg1 taskId:(id)arg2 micId:(id)arg3;
- (BOOL)isNonAnchorMicIdForLikeReceive:(id)arg1;
- (void)configMicLikeReceive;
- (void)configAnchorLikeReceive;
- (CGPoint)getAnchorAvatarCenterInLikeWrapper;
- (void)clearMicLike;
- (void)onDisplayLikeCountUpdate:(unsigned long long)arg1 withTaskId:(id)arg2 forRole:(long long)arg3;
- (void)onLikeContactListUpdate:(id)arg1;
- (void)onConnectMicOperationViewDoubleClickedLikeAnchorWithTaskId:(id)arg1;
- (id)likePlayUtilForMicId:(id)arg1;
- (CGPoint)getAvatarCenterForMicId:(id)arg1;
- (id)findMicUserViewForMicId:(id)arg1;
- (void)cleanupLikePlayUtilForMicId:(id)arg1;
- (long long)layoutOrientation;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)giftNotificationDelegate;
- (void)setGiftNotificationDelegate:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (unsigned long long)viewScene;
- (void)setViewScene:(unsigned long long)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (void)setPreviewTaskId:(id)arg1;
- (id)ktvMusicContainerView;
- (void)setKtvMusicContainerView:(id)arg1;
- (id)finderDataItem;
- (id)audioRoomContext;
- (void)setAudioRoomContext:(id)arg1;
- (BOOL)canShowChatRoomSubTitleView;
- (void)setCanShowChatRoomSubTitleView:(BOOL)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (BOOL)anchorIsTalking;
- (void)setAnchorIsTalking:(BOOL)arg1;
- (double)lastSafeAreaInsetTop;
- (void)setLastSafeAreaInsetTop:(double)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)normalBackgroundImage;
- (void)setNormalBackgroundImage:(id)arg1;
- (id)ktvSingingBackgroundImage;
- (void)setKtvSingingBackgroundImage:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
- (id)normalAudioWaveColor;
- (void)setNormalAudioWaveColor:(id)arg1;
- (id)ktvSingingAudioWaveColor;
- (void)setKtvSingingAudioWaveColor:(id)arg1;
- (id)userInfoContainerView;
- (void)setUserInfoContainerView:(id)arg1;
- (id)ktvUserContainerView;
- (void)setKtvUserContainerView:(id)arg1;
- (id)ktvUserBaseView;
- (void)setKtvUserBaseView:(id)arg1;
- (id)ktvUserContainerGradient;
- (void)setKtvUserContainerGradient:(id)arg1;
- (id)ktvSongBtn;
- (void)setKtvSongBtn:(id)arg1;
- (id)ktvSongBtnContainerView;
- (void)setKtvSongBtnContainerView:(id)arg1;
- (id)ktvSongBtnBaseView;
- (void)setKtvSongBtnBaseView:(id)arg1;
- (id)pkGlobalAnimationContainerView;
- (void)setPkGlobalAnimationContainerView:(id)arg1;
- (id)anchorUserView;
- (void)setAnchorUserView:(id)arg1;
- (id)micUsersInfo;
- (id)micUserViewDict;
- (void)setMicUserViewDict:(id)arg1;
- (id)micSeatViewDict;
- (void)setMicSeatViewDict:(id)arg1;
- (unsigned long long)currentMicUserCount;
- (void)setCurrentMicUserCount:(unsigned long long)arg1;
- (id)leftTeamBackgroundView;
- (void)setLeftTeamBackgroundView:(id)arg1;
- (id)rightTeamBackgroundView;
- (void)setRightTeamBackgroundView:(id)arg1;
- (id)pkTimeIndicatorContainerView;
- (void)setPkTimeIndicatorContainerView:(id)arg1;
- (id)pkTimeIndicatorView;
- (void)setPkTimeIndicatorView:(id)arg1;
- (id)topPkProgressView;
- (void)setTopPkProgressView:(id)arg1;
- (id)topPkLeftProgressBar;
- (void)setTopPkLeftProgressBar:(id)arg1;
- (id)topPkRightProgressBar;
- (void)setTopPkRightProgressBar:(id)arg1;
- (id)topPkProgressIndicator;
- (void)setTopPkProgressIndicator:(id)arg1;
- (id)topPkLeftRewardIcon;
- (void)setTopPkLeftRewardIcon:(id)arg1;
- (id)topPkRightRewardIcon;
- (void)setTopPkRightRewardIcon:(id)arg1;
- (id)topPkLeftRewardLabel;
- (void)setTopPkLeftRewardLabel:(id)arg1;
- (id)topPkRightRewardLabel;
- (void)setTopPkRightRewardLabel:(id)arg1;
- (id)pkFrenzyView;
- (void)setPkFrenzyView:(id)arg1;
- (BOOL)isInSuperfanPKStyle;
- (void)setIsInSuperfanPKStyle:(BOOL)arg1;
- (id)drawAnimationContainerView;
- (void)setDrawAnimationContainerView:(id)arg1;
- (id)drawAnimationView;
- (void)setDrawAnimationView:(id)arg1;
- (id)multiAnchorsPkStartAnimationView;
- (void)setMultiAnchorsPkStartAnimationView:(id)arg1;
- (unsigned long long)lastPkState;
- (void)setLastPkState:(unsigned long long)arg1;
- (id)waitResultOriginalImageUrlString;
- (void)setWaitResultOriginalImageUrlString:(id)arg1;
- (id)locationDisplayLogic;
- (void)setLocationDisplayLogic:(id)arg1;
- (BOOL)hasHandledJoinLiveFinished;
- (void)setHasHandledJoinLiveFinished:(BOOL)arg1;
- (id)tempCoverView;
- (void)setTempCoverView:(id)arg1;
- (double)contentTopByNewStartController;
- (void)setContentTopByNewStartController:(double)arg1;
- (id)imageViewForStartController;
- (void)setImageViewForStartController:(id)arg1;
- (id)micSeatContainerForStartController;
- (void)setMicSeatContainerForStartController:(id)arg1;
- (id)micSeatImageViewsForStartController;
- (void)setMicSeatImageViewsForStartController:(id)arg1;
- (id)ktvSingleIconView;
- (void)setKtvSingleIconView:(id)arg1;
- (id)ktvSingingBgView;
- (void)setKtvSingingBgView:(id)arg1;
- (id)ktvSingingBgGradient;
- (void)setKtvSingingBgGradient:(id)arg1;
- (id)ktvSingingBgImageView;
- (void)setKtvSingingBgImageView:(id)arg1;
- (CGRect)singingContentFrame;
- (void)setSingingContentFrame:(CGRect)arg1;
- (id)ktvRelatedLiveView;
- (void)setKtvRelatedLiveView:(id)arg1;
- (id)chatRoomUserBaseView;
- (void)setChatRoomUserBaseView:(id)arg1;
- (id)chatRoomUserContainerGradient;
- (void)setChatRoomUserContainerGradient:(id)arg1;
- (id)chatRoomUserContainerView;
- (void)setChatRoomUserContainerView:(id)arg1;
- (id)chatRoomEmptySeatBaseView;
- (void)setChatRoomEmptySeatBaseView:(id)arg1;
- (id)chatRoomEmptySeatView;
- (void)setChatRoomEmptySeatView:(id)arg1;
- (id)chatRoomMicViewsList;
- (void)setChatRoomMicViewsList:(id)arg1;
- (id)chatRoomCachedSeatViewsList;
- (void)setChatRoomCachedSeatViewsList:(id)arg1;
- (id)ktvMicViewsList;
- (void)setKtvMicViewsList:(id)arg1;
- (id)micTopicTitle;
- (void)setMicTopicTitle:(id)arg1;
- (id)micTopicContent;
- (void)setMicTopicContent:(id)arg1;
- (id)micTopicTitleLabel;
- (void)setMicTopicTitleLabel:(id)arg1;
- (id)micTopicContentContainerView;
- (void)setMicTopicContentContainerView:(id)arg1;
- (id)micTopicContentTextView;
- (void)setMicTopicContentTextView:(id)arg1;
- (id)chatRoomTalkingUserView;
- (void)setChatRoomTalkingUserView:(id)arg1;
- (id)chatRoomSubTitleView;
- (void)setChatRoomSubTitleView:(id)arg1;
- (id)doubleClickedLikeAnimationUtil;
- (void)setDoubleClickedLikeAnimationUtil:(id)arg1;
- (id)likeAnimationWrapper;
- (void)setLikeAnimationWrapper:(id)arg1;
- (BOOL)isConnectMicDoubleClickLikeEnabled;
- (void)setIsConnectMicDoubleClickLikeEnabled:(BOOL)arg1;
- (BOOL)isLongPressLikeActive;
- (void)setIsLongPressLikeActive:(BOOL)arg1;
- (id)longPressLikeMicUserInfo;
- (void)setLongPressLikeMicUserInfo:(id)arg1;
- (id)longPressTargetAvatarView;
- (void)setLongPressTargetAvatarView:(id)arg1;
- (unsigned long long)pendingAnchorLikeReportCount;
- (void)setPendingAnchorLikeReportCount:(unsigned long long)arg1;
- (unsigned long long)pendingAnchorDoubleClickReportCount;
- (void)setPendingAnchorDoubleClickReportCount:(unsigned long long)arg1;
- (id)pendingAnchorLikeReportUserName;
- (void)setPendingAnchorLikeReportUserName:(id)arg1;
- (id)micOtherLikeAnimationUtil;
- (void)setMicOtherLikeAnimationUtil:(id)arg1;
- (id)micLikePlayUtilDict;
- (void)setMicLikePlayUtilDict:(id)arg1;
- (BOOL)isMicLikeReceiveEnabled;
- (void)setIsMicLikeReceiveEnabled:(BOOL)arg1;
- (id)anchorLikePlayUtil;
- (void)setAnchorLikePlayUtil:(id)arg1;
- (id)micDoubleClickLikeGuideLogic;
- (void)setMicDoubleClickLikeGuideLogic:(id)arg1;
- (id)micDoubleClickLikeGuideView;
- (void)setMicDoubleClickLikeGuideView:(id)arg1;
- (long long)currFeedStreamSceneState;
- (void)setCurrFeedStreamSceneState:(long long)arg1;
- (BOOL)enterAnyMode;
- (void)setEnterAnyMode:(BOOL)arg1;
- (BOOL)needSpecialProcessKTV;
- (BOOL)isKTVMode;
- (id)ktvBox;
- (unsigned long long)audioRoomScene;
- (void)setAudioRoomScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
