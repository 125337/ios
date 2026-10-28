@interface MMFinderLiveAudioRoomInfoView : UIView <MMFinderLiveAudioRoomMicUserViewDelegate, MMFinderLiveInfoMgrExt, MMLiveConnectMicUserLocationDisplayLogicDelegate, MMFinderLiveKTVStateExt, MMFinderLiveKTVManageExt>
{
    BOOL _anchorIsTalking; // +0x8
    BOOL _isInSuperfanPKStyle; // +0x9
    BOOL _hasHandledJoinLiveFinished; // +0xa
    BOOL _needSpecialProcessKTV; // +0xb
    BOOL _isKTVMode; // +0xc
    id <MMFinderLiveAudioRoomInfoViewDelegate> _actionDelegate; // +0x10
    id <MMFinderLiveAudioRoomInfoViewGiftNotificationDelegate> _giftNotificationDelegate; // +0x18
    id <MMFinderLiveAudioRoomInfoLogicDelegate> _logicDelegate; // +0x20
    unsigned long long _viewScene; // +0x28
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x30
    MMLiveFeedPreviewTaskId * _previewTaskId; // +0x38
    MMFinderLiveKTVMusicContainerView * _ktvMusicContainerView; // +0x40
    WCFinderDataItem * _finderDataItem; // +0x48
    WCFinderContact * _anchorContact; // +0x50
    double _lastSafeAreaInsetTop; // +0x58
    UIImage * _backgroundImage; // +0x60
    UIImageView * _backgroundImageView; // +0x68
    UIColor * _audioWaveColor; // +0x70
    UIView * _userInfoContainerView; // +0x78
    UIScrollView * _ktvUserContainerView; // +0x80
    UIView * _ktvUserBaseView; // +0x88
    CAGradientLayer * _ktvUserContainerGradient; // +0x90
    WCLiveBottomTextButton * _ktvSongBtn; // +0x98
    UIView * _ktvSongBtnContainerView; // +0xa0
    UIView * _ktvSongBtnBaseView; // +0xa8
    UIView * _pkGlobalAnimationContainerView; // +0xb0
    MMFinderLiveAudioRoomCurrentAnchorView * _anchorUserView; // +0xb8
    MMFinderLiveConnectMicUsersInfo * _micUsersInfo; // +0xc0
    NSMutableDictionary * _micUserViewDict; // +0xc8
    NSMutableDictionary * _micSeatViewDict; // +0xd0
    MMLiveGradientLayerView * _leftTeamBackgroundView; // +0xd8
    MMLiveGradientLayerView * _rightTeamBackgroundView; // +0xe0
    UIImageView * _pkTimeIndicatorContainerView; // +0xe8
    MMFinderLiveConnectMicPkProgressTimeIndicator * _pkTimeIndicatorView; // +0xf0
    UIView * _topPkProgressView; // +0xf8
    MMLiveGradientLayerView * _topPkLeftProgressBar; // +0x100
    MMLiveGradientLayerView * _topPkRightProgressBar; // +0x108
    PAGView * _topPkProgressIndicator; // +0x110
    UIImageView * _topPkLeftRewardIcon; // +0x118
    UIImageView * _topPkRightRewardIcon; // +0x120
    UILabel * _topPkLeftRewardLabel; // +0x128
    UILabel * _topPkRightRewardLabel; // +0x130
    MMFinderLivePkTaskedBonusBarBackgroundFrenzyView * _pkFrenzyView; // +0x138
    UIView * _drawAnimationContainerView; // +0x140
    PAGView * _drawAnimationView; // +0x148
    UIImageView * _multiAnchorsPkStartAnimationView; // +0x150
    unsigned long long _lastPkState; // +0x158
    NSString * _waitResultOriginalImageUrlString; // +0x160
    MMLiveConnectMicUserLocationDisplayLogic * _locationDisplayLogic; // +0x168
    UIView * _tempCoverView; // +0x170
    double _contentTopByNewStartController; // +0x178
    MMFinderLiveKTVSingleIconView * _ktvSingleIconView; // +0x180
    UIView * _ktvSingingBgView; // +0x188
    CAGradientLayer * _ktvSingingBgGradient; // +0x190
    MMWebImageView * _ktvSingingBgImage; // +0x198
    MMFinderLiveKTVBox * _ktvBox; // +0x1a0
    unsigned long long _audioRoomScene; // +0x1a8
    CGRect _singingContentFrame; // +0x1b0
}
- (void)onAudioRoomSceneChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)processSEIPBForKTVSyncRecv:(id)arg1;
- (void)clearKTVDatasForExit;
- (void)onKTVModeChanged;
- (void)createKTVModels;
- (BOOL)needSpecialProcessKTV;
- (BOOL)isKTVMode;
- (id)ktvBox;
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
- (void)layoutKTVSingleIconView;
- (void)configKTVMusicContainerView;
- (void)layoutKTVMusicContainerView;
- (void)updateKTVContainerViewHidden;
- (void)configKtvUserContainerView;
- (void)openKtvRequestSongPanel;
- (void)layoutKtvUserContainerView;
- (void)configKtvSingingBgView;
- (void)layoutKtvSingingBgView;
- (void)updateKtvSingingBgViewHidden;
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
- (void)updateBackgroundImage:(id)arg1 andWaveColor:(id)arg2;
- (void)updateAudioRoomModeGiftNotificationContainerViews;
- (void)layoutTempCoverView;
- (void)onMMFinderLiveAudioRoomMicUserViewTappedWithUserInfo:(id)arg1 micSeatInfo:(id)arg2 targetView:(id)arg3;
- (void)onMMFinderLiveAudioRoomMicUserViewLoadAvatarImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)onMMFinderLiveAudioRoomMicUserViewTappedMicMutedButtonWithUserInfo:(id)arg1;
- (void)onFinderLiveAudioRoomBackgroundImageInfoUpdated:(id)arg1 originalUrlString:(id)arg2;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemBasicInfoUpdated:(id)arg3;
- (void)onLiveKTVSelfWaitSongCountUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)onLiveConnectMicAnchorUserLocationDisplayEnded;
- (void)onLiveConnectMicUserLocationDisplayEndedWithUserIdList:(id)arg1;
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
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (BOOL)anchorIsTalking;
- (void)setAnchorIsTalking:(BOOL)arg1;
- (double)lastSafeAreaInsetTop;
- (void)setLastSafeAreaInsetTop:(double)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
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
- (id)ktvSingleIconView;
- (void)setKtvSingleIconView:(id)arg1;
- (id)ktvSingingBgView;
- (void)setKtvSingingBgView:(id)arg1;
- (id)ktvSingingBgGradient;
- (void)setKtvSingingBgGradient:(id)arg1;
- (id)ktvSingingBgImage;
- (void)setKtvSingingBgImage:(id)arg1;
- (CGRect)singingContentFrame;
- (void)setSingingContentFrame:(CGRect)arg1;
- (BOOL)needSpecialProcessKTV;
- (BOOL)isKTVMode;
- (id)ktvBox;
- (unsigned long long)audioRoomScene;
- (void)setAudioRoomScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
