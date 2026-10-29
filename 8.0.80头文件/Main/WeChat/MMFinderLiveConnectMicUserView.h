@interface MMFinderLiveConnectMicUserView : UIView <MoveWithTouchAlgorithmDelegate>
{
    BOOL _useVideo; // +0x8
    BOOL _canShowHangupButton; // +0x9
    BOOL _isMovingView; // +0xa
    BOOL _isInShowAnimation; // +0xb
    BOOL _isInHideAnimation; // +0xc
    BOOL _isInMoveResultAnimation; // +0xd
    BOOL _isFolded; // +0xe
    id <MMFinderLiveConnectMicUserViewDelegate> _actionDelegate; // +0x10
    unsigned long long _state; // +0x18
    MMFinderLiveConnectMicUser * _connectMicUser; // +0x20
    UIButton * _hangupButton; // +0x28
    UIView * _floatingView; // +0x30
    MoveWithTouchAlgorithm * _moveAlgorithm; // +0x38
    double _topBoundary; // +0x40
    UIView * _contentContainerView; // +0x48
    UIView * _grayBackgroundView; // +0x50
    UIView * _foldedVerticalLineView; // +0x58
    UIView * _blurBackgroundView; // +0x60
    UIView * _userInfoContainerView; // +0x68
    UILabel * _nicknameLabel; // +0x70
    UIImageView * _talkingIconView; // +0x78
    UIView * _otherInfoContainerView; // +0x80
    UIImageView * _tipIconView; // +0x88
    UILabel * _tipLabel; // +0x90
    UILabel * _connectingTipLabel; // +0x98
    UIView * _randomMicContainerView; // +0xa0
    WCFinderHeadImageView * _randomMicAvatarView; // +0xa8
    UILabel * _randomMicTipLabel; // +0xb0
    UIView * _randomMicAvatarAnimationContainerFirstView; // +0xb8
    UIView * _randomMicAvatarAnimationContainerSecondView; // +0xc0
    UIImageView * _randomMicMatchedIconView; // +0xc8
    unsigned long long _randomMicAnimationState; // +0xd0
    unsigned long long _rollingAnimationPhase; // +0xd8
    UIView * _randomGuideContainerView; // +0xe0
    UILabel * _randomGuideTitleLabel; // +0xe8
    UILabel * _randomGuideDescLabel; // +0xf0
    UIButton * _restartRandomMicButton; // +0xf8
    UIView * _connectingMicContainerView; // +0x100
    UILabel * _connectingMicTitleLabel; // +0x108
    UILabel * _connectingMicTimeLabel; // +0x110
    UIButton * _stopConnectingButton; // +0x118
    MMUIButton * _closeButton; // +0x120
    double _foldAnimationSecondPhaseProgress; // +0x128
    CAShapeLayer * _shapeLayer; // +0x130
    double _viewEdgeOffsetTopBottom; // +0x138
    NSMutableDictionary * _avatarCache; // +0x140
    long long _avatarsRolled; // +0x148
    NSMutableArray * _avatarItems; // +0x150
    CGPoint _currentOrigin; // +0x158
}
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (CGSize)currentViewSize;
- (void)createMoveAlgorithm;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateViewsFrameAndAlpha;
- (id)createRandomAvatarViewWithIndexSet:(id)arg1;
- (void)updateRandomMicAvatarView;
- (void)checkAndStartRandomMicAvatarAnimation;
- (void)startFirstRandomMicAvatarAnimationIsNewStart:(BOOL)arg1;
- (void)startSecondRandomMicAvatarAnimation;
- (void)showUserAvatarAndClearRandomMicAvatarAnimation:(BOOL)arg1;
- (void)startScaleUserAvatarAnimation;
- (void)updateTopBoundary:(double)arg1;
- (void)showWithConnectMicUser:(id)arg1 state:(unsigned long long)arg2 useVideo:(BOOL)arg3 tryFoldViewAfterDelay:(BOOL)arg4;
- (void)updateConnectMicUser:(id)arg1;
- (void)checkAndChangeStateToWait;
- (void)checkAndTryFold;
- (void)clearRandomMicAnimationData;
- (void)clearAndHide;
- (void)clearAndHideWithAnimation:(BOOL)arg1;
- (BOOL)isSelfCloserToTheLeft;
- (void)onTapRestartRandomMicButton:(id)arg1;
- (void)onTapStopConnectingButton:(id)arg1;
- (void)onTapCloseButton:(id)arg1;
- (void)adsorbToWindow;
- (void)checkAndUpdatePosition;
- (void)updateAvatarsWithFinderLiveContacts:(id)arg1;
- (void)updateConnectingMicTime:(unsigned int)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setConnectMicUser:(id)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (BOOL)shouldLockToPortrait;
- (BOOL)shouldForcePortrait;
- (BOOL)isFoldEnabled;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (double)leftMostBoundaryOfPositionX;
- (double)rightMostBoundaryOfPositionX;
- (double)foldAnimationSecondPhasePositionX;
- (double)foldAnimationFirstPhaseDuration;
- (double)foldAnimationSecondPhaseDuration;
- (void)doFoldOrUnfoldAnimationWithFlag:(BOOL)arg1;
- (void)resetAvatarItems;
- (void)commitStagedUpdatesForItemsInRollingAnimationPhase:(unsigned long long)arg1 delay:(BOOL)arg2;
- (void)commitStagedUpdatesForItemsInRollingAnimationPhase:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned long long)state;
- (id)connectMicUser;
- (id)hangupButton;
- (void)setHangupButton:(id)arg1;
- (id)floatingView;
- (void)setFloatingView:(id)arg1;
- (id)moveAlgorithm;
- (void)setMoveAlgorithm:(id)arg1;
- (double)topBoundary;
- (void)setTopBoundary:(double)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)grayBackgroundView;
- (void)setGrayBackgroundView:(id)arg1;
- (id)foldedVerticalLineView;
- (void)setFoldedVerticalLineView:(id)arg1;
- (id)blurBackgroundView;
- (void)setBlurBackgroundView:(id)arg1;
- (id)userInfoContainerView;
- (void)setUserInfoContainerView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)talkingIconView;
- (void)setTalkingIconView:(id)arg1;
- (id)otherInfoContainerView;
- (void)setOtherInfoContainerView:(id)arg1;
- (id)tipIconView;
- (void)setTipIconView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)connectingTipLabel;
- (void)setConnectingTipLabel:(id)arg1;
- (id)randomMicContainerView;
- (void)setRandomMicContainerView:(id)arg1;
- (id)randomMicAvatarView;
- (void)setRandomMicAvatarView:(id)arg1;
- (id)randomMicTipLabel;
- (void)setRandomMicTipLabel:(id)arg1;
- (id)randomMicAvatarAnimationContainerFirstView;
- (void)setRandomMicAvatarAnimationContainerFirstView:(id)arg1;
- (id)randomMicAvatarAnimationContainerSecondView;
- (void)setRandomMicAvatarAnimationContainerSecondView:(id)arg1;
- (id)randomMicMatchedIconView;
- (void)setRandomMicMatchedIconView:(id)arg1;
- (unsigned long long)randomMicAnimationState;
- (void)setRandomMicAnimationState:(unsigned long long)arg1;
- (unsigned long long)rollingAnimationPhase;
- (void)setRollingAnimationPhase:(unsigned long long)arg1;
- (id)randomGuideContainerView;
- (void)setRandomGuideContainerView:(id)arg1;
- (id)randomGuideTitleLabel;
- (void)setRandomGuideTitleLabel:(id)arg1;
- (id)randomGuideDescLabel;
- (void)setRandomGuideDescLabel:(id)arg1;
- (id)restartRandomMicButton;
- (void)setRestartRandomMicButton:(id)arg1;
- (id)connectingMicContainerView;
- (void)setConnectingMicContainerView:(id)arg1;
- (id)connectingMicTitleLabel;
- (void)setConnectingMicTitleLabel:(id)arg1;
- (id)connectingMicTimeLabel;
- (void)setConnectingMicTimeLabel:(id)arg1;
- (id)stopConnectingButton;
- (void)setStopConnectingButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (CGPoint)currentOrigin;
- (void)setCurrentOrigin:(CGPoint)arg1;
- (BOOL)useVideo;
- (void)setUseVideo:(BOOL)arg1;
- (BOOL)canShowHangupButton;
- (void)setCanShowHangupButton:(BOOL)arg1;
- (BOOL)isMovingView;
- (void)setIsMovingView:(BOOL)arg1;
- (BOOL)isInShowAnimation;
- (void)setIsInShowAnimation:(BOOL)arg1;
- (BOOL)isInHideAnimation;
- (void)setIsInHideAnimation:(BOOL)arg1;
- (BOOL)isInMoveResultAnimation;
- (void)setIsInMoveResultAnimation:(BOOL)arg1;
- (BOOL)isFolded;
- (void)setIsFolded:(BOOL)arg1;
- (double)foldAnimationSecondPhaseProgress;
- (void)setFoldAnimationSecondPhaseProgress:(double)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (double)viewEdgeOffsetTopBottom;
- (void)setViewEdgeOffsetTopBottom:(double)arg1;
- (id)avatarCache;
- (void)setAvatarCache:(id)arg1;
- (long long)avatarsRolled;
- (void)setAvatarsRolled:(long long)arg1;
- (id)avatarItems;
- (void)setAvatarItems:(id)arg1;
- (void).cxx_destruct;
@end
