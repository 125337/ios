@interface MMFinderLiveHeaderView : MMLiveBaseComponentView <WCFinderHeadImageViewDelegate, WCFinderContactExt, PAGViewListener, IMMFontMgrExt, MMFinderLiveMusicHeaderButtonDelegate, MMFinderLiveKTVBrandHeaderButtonDelegate, MMSceneDelegateExt, MMLiveSyndicateMembersUpdateListener>
{
    BOOL _hideActionButton; // +0x8
    BOOL _hideCloseButton; // +0x9
    BOOL _isCurrentInSubScene; // +0xa
    BOOL _isInLive; // +0xb
    BOOL _hasDisplayGroupJoin; // +0xc
    BOOL _isClickFollowingAnimatingFlag; // +0xd
    BOOL _needShowfollowBtn; // +0xe
    BOOL _hasShowFollowButton; // +0xf
    BOOL _hasRegisteredKeyExtensions; // +0x10
    BOOL _hadShownFollowAnimation; // +0x11
    BOOL _isFollowState; // +0x12
    BOOL _isFollowShowIntterupt; // +0x13
    unsigned int _musicButtonShowStatus; // +0x14
    WCFinderContact * _anchorContact; // +0x18
    MMLiveSyndicateMembers * _syndicateMembers; // +0x20
    id /* block */ _headImageOrLabelCallback; // +0x28
    id /* block */ _subtitleLabelCallBack; // +0x30
    id /* block */ _closeButtonCallback; // +0x38
    id /* block */ _miniWindowButtonCallback; // +0x40
    id /* block */ _actionButtonCallback; // +0x48
    id /* block */ _followButtonCallback; // +0x50
    id /* block */ _followingButtonCallback; // +0x58
    id /* block */ _castingButtonCallback; // +0x60
    id /* block */ _clarityButtonCallback; // +0x68
    id /* block */ _musicButtonCallback; // +0x70
    id /* block */ _ktvBrandButtonCallback; // +0x78
    id /* block */ _changeAppSceneButtonCallback; // +0x80
    id /* block */ _tapFansGroupIconCallback; // +0x88
    id /* block */ _contentRightChangeCallback; // +0x90
    id /* block */ _rightControlsLeftChangeCallback; // +0x98
    WCLiveBlurButton * _actionButton; // +0xa0
    double _horizontalContentInset; // +0xa8
    id /* block */ _redDotQueryBlock; // +0xb0
    WCFinderHeadImageView * _anchorHeadImageView; // +0xb8
    MMUILabel * _anchorNameLabel; // +0xc0
    WCFinderAuthInfoIconView * _authIconView; // +0xc8
    MMFinderLiveClarityHeaderButton * _headerClarityButton; // +0xd0
    MMFinderLiveAnchorHeaderEcInfoView * _anchorHeaderEcInfoView; // +0xd8
    id /* block */ _shopInfoSheetInvoker; // +0xe0
    UIView * _identityViewsContainerView; // +0xe8
    UIView * _actionViewsContainerView; // +0xf0
    unsigned long long _scene; // +0xf8
    WCLiveBlurButton * _closeButton; // +0x100
    WCLiveBlurButton * _miniWindowButton; // +0x108
    WCLiveBlurButton * _changeAppSceneButton; // +0x110
    WCLiveBlurButton * _castingButton; // +0x118
    long long _lastOrientation; // +0x120
    MMFinderLiveHeaderFollowButton * _followBtn; // +0x128
    MMUIButton * _followingBtn; // +0x130
    MMWebImageView * _brandLabelView; // +0x138
    MMFinderLiveFansGroupSignView * _groupSignView; // +0x140
    PAGView * _followAnimationView; // +0x148
    double _lastContentRight; // +0x150
    double _lastRightControlsLeft; // +0x158
    MMFinderLiveMusicHeaderButton * _headerMusicButton; // +0x160
    MMFinderLiveKTVBrandHeaderButton * _headerKTVBrandButton; // +0x168
    NSString * _followButtonShowSessionId; // +0x170
    MMUILabel * _subtitleLabel; // +0x178
    MMUIImageView * _subtitleJumpIcon; // +0x180
    MMUILabel * _brandLiveMarkFollowTipsLabel; // +0x188
    MMFinderLiveAnniversaryDecorationViewModel * _anniversaryDecorationViewModel; // +0x190
    PAGView * _avatarBackgroundView; // +0x198
    NSString * _currentAvatarBackgroundViewUrl; // +0x1a0
    CGSize _originAnchorNameLabelSize; // +0x1a8
    CGSize _groupSignViewSize; // +0x1b8
    CGSize _originMarkLabelSize; // +0x1c8
    CGAffineTransform _contentTransform; // +0x1d8
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3 scene:(unsigned long long)arg4;
- (id)initWithFrame:(CGRect)arg1 andLiveTask:(id)arg2 componentKey:(id)arg3 scene:(unsigned long long)arg4;
- (void)dealloc;
- (void)initNotifications;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)setupUI;
- (void)updateDataWhenLayout;
- (void)layoutUI;
- (void)updateFansGroupState;
- (void)delayFoldJoinFansGroupView;
- (void)foldJoinFansGroupView;
- (void)expandJoinFansGroupView;
- (BOOL)isJoinFansGroupBannerExpanded;
- (void)playJoinFansGroupAnimation;
- (BOOL)isShowJoinFansGroupState;
- (void)updateFansGroupHiddenWithRefresh:(BOOL)arg1;
- (BOOL)enableShowFansGroupEntrance;
- (double)getFansGroupSignWidthForLayoutLeft:(BOOL)arg1;
- (id)followingBtn;
- (id)brandLabelView;
- (id)rightButton;
- (void)showAnchorInfo;
- (void)hideAnchorInfo;
- (void)updateAuthInfo;
- (BOOL)showCastingButton;
- (BOOL)hideCastingButton;
- (BOOL)showClarityButtonWithDataItem:(id)arg1;
- (BOOL)hideClarityButton;
- (void)updateCurrentClarityDataItem:(id)arg1;
- (BOOL)isHeaderClarityButtonDisplay;
- (BOOL)isCurrentClarityDataItemValid;
- (void)showMusicButton;
- (void)hideMusicButton;
- (BOOL)updateMusicId:(id)arg1;
- (void)showKTVBrandButton;
- (void)hideKTVBrandButton;
- (BOOL)updateKTVBrandSongItem:(id)arg1;
- (double)contentRight;
- (double)rightControlsLeft;
- (void)checkContentRightChange;
- (void)checkRightControlsLeftChange;
- (double)followBtnLeft;
- (void)updateFollowBtnLayout;
- (BOOL)shouldHideFollowBtn;
- (void)updateFollowStateCache:(BOOL)arg1 isFinderBizLive:(BOOL)arg2;
- (void)setCacheSongItemForId:(id)arg1 item:(id)arg2;
- (id)objectCacheSongItemForId:(id)arg1;
- (BOOL)shouldShowFollowStatus;
- (void)updateViewModel:(id)arg1;
- (void)refreshWidgetsForFontSizeChange;
- (void)onEnterLive;
- (void)reportOnEnterLive;
- (void)visibilityChanged:(BOOL)arg1 invokeType:(unsigned long long)arg2;
- (void)setContentTransform:(CGAffineTransform)arg1;
- (void)setHorizontalContentInset:(double)arg1;
- (void)setSyndicateMembers:(id)arg1;
- (void)updateAnchorDisplayName;
- (id)anchorContact;
- (id)finderLiveTask;
- (void)setHideActionButton:(BOOL)arg1;
- (void)setHideCloseButton:(BOOL)arg1;
- (BOOL)isMiniWindowButtonHidden;
- (void)guideFollow;
- (void)followAttentdLottery;
- (id)closeButton;
- (void)updateActionButtonImage;
- (id)actionButton;
- (id)castingButton;
- (id)miniWindowButton;
- (id)getMinimizeIconName;
- (id)headerClarityButton;
- (id)headerMusicButton;
- (id)headerKTVBrandButton;
- (id)anchorHeadImageView;
- (id)anchorNameLabel;
- (id)followBtn;
- (id)subtitleLabel;
- (id)brandLiveMarkFollowTipsLabel;
- (id)anchorHeaderEcInfoView;
- (void)updateAnchorHeaderEcInfo:(id)arg1;
- (void)updateAnchorHeaderEcMarquee:(id)arg1;
- (void)layoutAnchorHeaderEcInfoView;
- (id)subtitleJumpIcon;
- (id)groupSignView;
- (id)authIconView;
- (void)showFollowButton;
- (void)hideFollowingButton;
- (void)animationFollowing;
- (void)showBrandLiveMarkFollowTipsIfNeed;
- (void)__hidefollowingBtn;
- (BOOL)shouldFollowingBtnHidden;
- (BOOL)shouldFollowingAnimationHidden;
- (BOOL)shouldAuthIconViewHidden;
- (void)onFansGroupStateChanged:(unsigned long long)arg1;
- (void)onFansGroupNameChanged:(id)arg1;
- (double)followStatusWidth;
- (CGSize)anchorNameLabelWidthWithText:(id)arg1;
- (id)subtitle;
- (BOOL)hasSubtitles;
- (BOOL)needShowSubtitleBrandLiveTips;
- (BOOL)hasGameHonorary;
- (BOOL)hasGuideAdsInfo;
- (BOOL)hasEligibilityEntrance;
- (BOOL)isShowEligibilityEntrance;
- (BOOL)hasShowBoundBizLive;
- (BOOL)isFollowState;
- (double)anchorLabelViewsMaxWidth;
- (double)calculateNameContentWidth;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onGroupSignViewTap;
- (void)onChangeAppSceneButtonClicked;
- (void)onActionButtonClicked;
- (void)onCloseButtonClicked;
- (void)onCastingButtonClicked;
- (void)onMiniWindowButtonClicked;
- (void)onFollowButtonClicked;
- (void)onFollowingButtonClicked;
- (void)handleNameLabelTapGesture:(id)arg1;
- (void)callHeadImageOrLabelCallback;
- (void)callSubtitleCallback;
- (void)updateAvatar;
- (void)updateChangeAppSceneButton;
- (void)updateChangeAppSceneButtonForCurrentAppScene;
- (void)playAvatarBackgroundView:(id)arg1;
- (void)stopAvatarBackgroundView;
- (void)showFocusLabelAnimated:(BOOL)arg1 label:(id)arg2 scale:(double)arg3 alpha:(double)arg4 completion:(id /* block */)arg5;
- (void)showUnfocusViewAnimated:(id)arg1 alpha:(double)arg2;
- (BOOL)actionButtonRedDotHasRedDot;
- (id)getActionButtonRedDotPath;
- (void)reloadActionButtonRedDot;
- (void)configureComponentsForOperationUiMode:(unsigned long long)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)onLiveSyndicateMembersUpdated:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onFinderLiveHeaderViewClickedWithMusicDataItem:(id)arg1 song:(id)arg2;
- (void)onFinderLiveKTVBrandHeaderButton:(id)arg1 clickedWithSongItem:(id)arg2;
- (void)onSubSceneClosed;
- (void)onFontSizeChange;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2;
- (void)onFinderLiveTask:(id)arg1 enableDisplayFollowBtn:(BOOL)arg2;
- (unsigned long long)nameStyle;
- (BOOL)checkTask:(id)arg1;
- (void)onBrandLabelClicked:(id)arg1;
- (id)audienceLogReporter;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setAnchorContact:(id)arg1;
- (id)syndicateMembers;
- (BOOL)hideActionButton;
- (BOOL)hideCloseButton;
- (id /* block */)headImageOrLabelCallback;
- (void)setHeadImageOrLabelCallback:(id /* block */)arg1;
- (id /* block */)subtitleLabelCallBack;
- (void)setSubtitleLabelCallBack:(id /* block */)arg1;
- (id /* block */)closeButtonCallback;
- (void)setCloseButtonCallback:(id /* block */)arg1;
- (id /* block */)miniWindowButtonCallback;
- (void)setMiniWindowButtonCallback:(id /* block */)arg1;
- (id /* block */)actionButtonCallback;
- (void)setActionButtonCallback:(id /* block */)arg1;
- (id /* block */)followButtonCallback;
- (void)setFollowButtonCallback:(id /* block */)arg1;
- (id /* block */)followingButtonCallback;
- (void)setFollowingButtonCallback:(id /* block */)arg1;
- (id /* block */)castingButtonCallback;
- (void)setCastingButtonCallback:(id /* block */)arg1;
- (id /* block */)clarityButtonCallback;
- (void)setClarityButtonCallback:(id /* block */)arg1;
- (id /* block */)musicButtonCallback;
- (void)setMusicButtonCallback:(id /* block */)arg1;
- (id /* block */)ktvBrandButtonCallback;
- (void)setKtvBrandButtonCallback:(id /* block */)arg1;
- (id /* block */)changeAppSceneButtonCallback;
- (void)setChangeAppSceneButtonCallback:(id /* block */)arg1;
- (id /* block */)tapFansGroupIconCallback;
- (void)setTapFansGroupIconCallback:(id /* block */)arg1;
- (id /* block */)contentRightChangeCallback;
- (void)setContentRightChangeCallback:(id /* block */)arg1;
- (id /* block */)rightControlsLeftChangeCallback;
- (void)setRightControlsLeftChangeCallback:(id /* block */)arg1;
- (unsigned int)musicButtonShowStatus;
- (void)setMusicButtonShowStatus:(unsigned int)arg1;
- (void)setActionButton:(id)arg1;
- (CGAffineTransform)contentTransform;
- (double)horizontalContentInset;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (void)setAnchorHeadImageView:(id)arg1;
- (void)setAnchorNameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setHeaderClarityButton:(id)arg1;
- (void)setAnchorHeaderEcInfoView:(id)arg1;
- (id /* block */)shopInfoSheetInvoker;
- (void)setShopInfoSheetInvoker:(id /* block */)arg1;
- (id)identityViewsContainerView;
- (void)setIdentityViewsContainerView:(id)arg1;
- (id)actionViewsContainerView;
- (void)setActionViewsContainerView:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (CGSize)originAnchorNameLabelSize;
- (void)setOriginAnchorNameLabelSize:(CGSize)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setMiniWindowButton:(id)arg1;
- (id)changeAppSceneButton;
- (void)setChangeAppSceneButton:(id)arg1;
- (void)setCastingButton:(id)arg1;
- (BOOL)isCurrentInSubScene;
- (void)setIsCurrentInSubScene:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (void)setFollowBtn:(id)arg1;
- (void)setFollowingBtn:(id)arg1;
- (void)setBrandLabelView:(id)arg1;
- (void)setGroupSignView:(id)arg1;
- (CGSize)groupSignViewSize;
- (void)setGroupSignViewSize:(CGSize)arg1;
- (BOOL)hasDisplayGroupJoin;
- (void)setHasDisplayGroupJoin:(BOOL)arg1;
- (id)followAnimationView;
- (void)setFollowAnimationView:(id)arg1;
- (BOOL)isClickFollowingAnimatingFlag;
- (void)setIsClickFollowingAnimatingFlag:(BOOL)arg1;
- (double)lastContentRight;
- (void)setLastContentRight:(double)arg1;
- (double)lastRightControlsLeft;
- (void)setLastRightControlsLeft:(double)arg1;
- (void)setHeaderMusicButton:(id)arg1;
- (void)setHeaderKTVBrandButton:(id)arg1;
- (BOOL)needShowfollowBtn;
- (void)setNeedShowfollowBtn:(BOOL)arg1;
- (BOOL)hasShowFollowButton;
- (void)setHasShowFollowButton:(BOOL)arg1;
- (id)followButtonShowSessionId;
- (void)setFollowButtonShowSessionId:(id)arg1;
- (BOOL)hasRegisteredKeyExtensions;
- (void)setHasRegisteredKeyExtensions:(BOOL)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleJumpIcon:(id)arg1;
- (void)setBrandLiveMarkFollowTipsLabel:(id)arg1;
- (CGSize)originMarkLabelSize;
- (void)setOriginMarkLabelSize:(CGSize)arg1;
- (BOOL)hadShownFollowAnimation;
- (void)setHadShownFollowAnimation:(BOOL)arg1;
- (void)setIsFollowState:(BOOL)arg1;
- (BOOL)isFollowShowIntterupt;
- (void)setIsFollowShowIntterupt:(BOOL)arg1;
- (id)anniversaryDecorationViewModel;
- (void)setAnniversaryDecorationViewModel:(id)arg1;
- (id)avatarBackgroundView;
- (void)setAvatarBackgroundView:(id)arg1;
- (id)currentAvatarBackgroundViewUrl;
- (void)setCurrentAvatarBackgroundViewUrl:(id)arg1;
- (void).cxx_destruct;
@end
