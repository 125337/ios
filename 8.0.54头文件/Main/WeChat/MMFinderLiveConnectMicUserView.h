@interface MMFinderLiveConnectMicUserView : UIView <MoveWithTouchAlgorithmDelegate>
{
    BOOL _useVideo; // +0x8
    BOOL _canShowHangupButton; // +0x9
    BOOL _isMovingView; // +0xa
    BOOL _isInShowAnimation; // +0xb
    BOOL _isInHideAnimation; // +0xc
    BOOL _isInMoveResultAnimation; // +0xd
    id <MMFinderLiveConnectMicUserViewDelegate> _actionDelegate; // +0x10
    unsigned long long _state; // +0x18
    MMFinderLiveConnectMicUser * _connectMicUser; // +0x20
    UIButton * _hangupButton; // +0x28
    MoveWithTouchAlgorithm * _moveAlgorithm; // +0x30
    UIView * _blurBackgroundView; // +0x38
    UIView * _userInfoContainerView; // +0x40
    UILabel * _nicknameLabel; // +0x48
    UIImageView * _talkingIconView; // +0x50
    UIView * _otherInfoContainerView; // +0x58
    UIImageView * _tipIconView; // +0x60
    UILabel * _tipLabel; // +0x68
    UILabel * _connectingTipLabel; // +0x70
    UIView * _randomMicContainerView; // +0x78
    WCFinderHeadImageView * _randomMicAvatarView; // +0x80
    UILabel * _randomMicTipLabel; // +0x88
    UIView * _randomMicAvatarAnimationContainerFirstView; // +0x90
    UIView * _randomMicAvatarAnimationContainerSecondView; // +0x98
    UIImageView * _randomMicMatchedIconView; // +0xa0
    unsigned long long _randomMicAnimationState; // +0xa8
    unsigned long long _rollingAnimationPhase; // +0xb0
    CAShapeLayer * _shapeLayer; // +0xb8
    double _viewEdgeOffsetTopBottom; // +0xc0
    NSMutableDictionary * _avatarCache; // +0xc8
    long long _avatarsRolled; // +0xd0
    NSMutableArray * _avatarItems; // +0xd8
    CGPoint _currentOrigin; // +0xe0
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)currentViewSize;
- (void)createMoveAlgorithm;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)createRandomAvatarViewWithIndexSet:(id)arg1;
- (void)updateViewCorner;
- (void)updateRandomMicAvatarView;
- (void)checkAndStartRandomMicAvatarAnimation;
- (void)startFirstRandomMicAvatarAnimationIsNewStart:(BOOL)arg1;
- (void)startSecondRandomMicAvatarAnimation;
- (void)showUserAvatarAndClearRandomMicAvatarAnimation:(BOOL)arg1;
- (void)startScaleUserAvatarAnimation;
- (void)showWithConnectMicUser:(id)arg1 state:(unsigned long long)arg2 useVideo:(BOOL)arg3 andCanShowHangupButton:(BOOL)arg4;
- (void)updateConnectMicUser:(id)arg1;
- (void)checkAndChangeStateToWait;
- (void)clearRandomMicAnimationData;
- (void)clearAndHide;
- (void)clearAndHideWithAnimation:(BOOL)arg1;
- (BOOL)isSelfCloserToTheLeft;
- (void)hangup;
- (void)adsorbToWindow;
- (void)checkAndUpdatePosition;
- (void)updateAvatarsWithFinderLiveContacts:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setConnectMicUser:(id)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (BOOL)shouldLockToPortrait;
- (BOOL)shouldForcePortrait;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)resetAvatarItems;
- (void)commitStagedUpdatesForItemsInRollingAnimationPhase:(unsigned long long)arg1 delay:(BOOL)arg2;
- (void)commitStagedUpdatesForItemsInRollingAnimationPhase:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned long long)state;
- (id)connectMicUser;
- (id)hangupButton;
- (void)setHangupButton:(id)arg1;
- (id)moveAlgorithm;
- (void)setMoveAlgorithm:(id)arg1;
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

