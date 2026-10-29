@interface MinimizeStarFloatingView : UIView <MiniTaskUIMgrExt, MoveWithTouchAlgorithmDelegate, IMiniMizeUserdRecordUpdateExt>
{
    BOOL m_recordFloatingMoveImg; // +0x8
    BOOL _isIdleState; // +0x9
    BOOL _isShowing; // +0xa
    BOOL _animatedForAdsorbToWindow; // +0xb
    id <MinimizeStarFloatingViewDelegate> _delegate; // +0x10
    NSString * _currTaskKey; // +0x18
    unsigned long long _genFloatingTime; // +0x20
    long long _scene; // +0x28
    UIImageView * _containerView; // +0x30
    UIImageView * _iconView; // +0x38
    MMUIView * _backgroundView; // +0x40
    UIVisualEffectView * _blurEffectView; // +0x48
    MMTimer * _countdownTimer; // +0x50
    MMTimer * _changeStatuTimer; // +0x58
    MoveWithTouchAlgorithm * _m_moveAlgorithm; // +0x60
    MinimizeTaskContainerMoveContext * _originMoveContext; // +0x68
    double _animateDurationForAdsorbToWindow; // +0x70
    long long _animationSerial; // +0x78
    UIEdgeInsets _edgeInset; // +0x80
    CGRect _origiFrame; // +0xa0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (void)showFloating;
- (void)showAndResetTimer;
- (void)startChangeStatuTimer;
- (void)stopChangeStatusTimer;
- (void)didStopCountdown;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setIsIdleState:(BOOL)arg1;
- (void)onOrientationChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)animationToValueForViewsWhenMoveEndsWithFrame:(CGRect)arg1;
- (void)adjustAfterAdsorbToWindowWithNewFrame:(CGRect)arg1;
- (double)topSafeAreaLength;
- (double)bottomSafeAreaLength;
- (double)floatViewScreenWidth;
- (UIEdgeInsets)realSafeAreaInsetsOfWindow;
- (UIEdgeInsets)adjuestRealSafeAreaInsets:(UIEdgeInsets)arg1;
- (void)onCountdownTimer:(id)arg1;
- (void)onChangeStatuTimer:(id)arg1;
- (void)onOpenMiniTaskList;
- (void)onExitMiniTaskList;
- (void)onMiniTaskInteractivePushProgress:(double)arg1;
- (void)onMiniTaskInteractivePopProgress:(double)arg1;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (BOOL)shouldLockToPortrait;
- (void)onMoveBeginWithTouchAlgorithmBegin:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1 Touch:(id)arg2;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithnMoveEnd:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)reportParams;
- (void)reportFloatingOpen;
- (void)reportFloatingClose:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currTaskKey;
- (void)setCurrTaskKey:(id)arg1;
- (unsigned long long)genFloatingTime;
- (void)setGenFloatingTime:(unsigned long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (BOOL)isIdleState;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (UIEdgeInsets)edgeInset;
- (void)setEdgeInset:(UIEdgeInsets)arg1;
- (CGRect)origiFrame;
- (void)setOrigiFrame:(CGRect)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (id)changeStatuTimer;
- (void)setChangeStatuTimer:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)m_moveAlgorithm;
- (void)setM_moveAlgorithm:(id)arg1;
- (id)originMoveContext;
- (void)setOriginMoveContext:(id)arg1;
- (BOOL)animatedForAdsorbToWindow;
- (void)setAnimatedForAdsorbToWindow:(BOOL)arg1;
- (double)animateDurationForAdsorbToWindow;
- (void)setAnimateDurationForAdsorbToWindow:(double)arg1;
- (long long)animationSerial;
- (void)setAnimationSerial:(long long)arg1;
- (void).cxx_destruct;
@end

