@interface MMLiveLikeButton : WCLiveBottomTextButton <CAAnimationDelegate, PAGViewListener>
{
    BOOL _isShakeForLike; // +0x8
    BOOL _isLikeStart; // +0x9
    BOOL _isInClapMode; // +0xa
    BOOL _isLikeExecuting; // +0xb
    BOOL _isTouching; // +0xc
    BOOL _hasInvokePan; // +0xd
    BOOL _supportStopShockForMemory; // +0xe
    BOOL _isDirectlyStopShock; // +0xf
    BOOL _isStopShock; // +0x10
    BOOL _isStopShockAfterLittleTimes; // +0x11
    BOOL _isStopShockAfterLargeTimes; // +0x12
    unsigned long long _maxLikeCountOnce; // +0x18
    id /* block */ _likeInvokeCallback; // +0x20
    id /* block */ _likeClickBeginCallback; // +0x28
    id /* block */ _likeClickEndCallback; // +0x30
    id /* block */ _likeLongPressOverLimitCallback; // +0x38
    id /* block */ _likeExecuteCallback; // +0x40
    id /* block */ _likeAnimatinCallback; // +0x48
    id /* block */ _fontChangeCallback; // +0x50
    long long _type; // +0x58
    double _bottomDescFont; // +0x60
    unsigned long long _currLikeCountOnce; // +0x68
    unsigned long long _currShockCountOnce; // +0x70
    unsigned long long _currentState; // +0x78
    PAGView * _clapAnimationView; // +0x80
    UIImageView * _clapImageView; // +0x88
    MMLivePanGestureRecognizer * _executeLikePanGesture; // +0x90
    double _bottomLabelOffsetY; // +0x98
    unsigned long long _buttonTextLocation; // +0xa0
    double _iconSideLength; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 andBussinessType:(long long)arg2;
- (void)layoutSubviews;
- (void)configLikeButton;
- (void)configLikeButtonExecuteInDragIfNeeded;
- (void)onTopButtonPanGesture:(id)arg1;
- (void)updateLikeButtonImageEdgeInsets:(double)arg1;
- (void)setButtonImage;
- (void)onLikeButtonClickedStart;
- (void)onLikeButtonClickedEnd;
- (void)stopLongPressLike;
- (BOOL)isFingerOnLikeButton;
- (void)executeLike;
- (void)startLikeButtonEnLargeAnimation;
- (void)startLikeButtonReduceAnimation;
- (void)startLikeButtonClapAutoEnlargeAnimation;
- (void)startLikeButtonClapEnlargeAnimation;
- (void)startLikeButtonClapAutoReduceAnimation;
- (void)clearClapAnimationState;
- (void)createClapAnimationView;
- (void)createClapImageView;
- (void)updateClapAnimationViewHidden;
- (void)updateTopButtonImage;
- (void)showClapImageView;
- (void)hideClapImageView;
- (BOOL)needSupportExecuteLikeInDrag;
- (void)updateLikeExecuting:(BOOL)arg1;
- (void)onStartLikeExecuting;
- (void)onStopLikeExecuting;
- (BOOL)needCheckImpactFeedBackForMemory;
- (void)checkImpactFeedBackForMemory;
- (void)checkIsOverMaxLimitFootPrintMemory;
- (void)checkImpactFeedBackTimesOverLimit;
- (void)updateStopShock:(BOOL)arg1;
- (void)updateStopShockAfterLittleTimesIfNeeded:(BOOL)arg1;
- (void)updateStopShockAfterLargeTimesIfNeeded:(BOOL)arg1;
- (BOOL)enableShockForLike;
- (unsigned long long)impacyTimesStrictLimit;
- (unsigned long long)impacyTimesLooseLimit;
- (void)showClapPrepareAnimation;
- (void)enterClapMode:(BOOL)arg1;
- (void)exitClapMode;
- (void)setType:(long long)arg1;
- (void)shockOnceForLike;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (id)getShadowAttributedString:(id)arg1;
- (id)getBottomDescriptionLabel;
- (void)layoutBottomDescriptionLabel;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (void)adjustLikeFont;
- (void)memoryExceededChange:(id)arg1;
- (unsigned long long)maxLikeCountOnce;
- (void)setMaxLikeCountOnce:(unsigned long long)arg1;
- (BOOL)isShakeForLike;
- (void)setIsShakeForLike:(BOOL)arg1;
- (BOOL)isLikeStart;
- (void)setIsLikeStart:(BOOL)arg1;
- (BOOL)isInClapMode;
- (void)setIsInClapMode:(BOOL)arg1;
- (id /* block */)likeInvokeCallback;
- (void)setLikeInvokeCallback:(id /* block */)arg1;
- (id /* block */)likeClickBeginCallback;
- (void)setLikeClickBeginCallback:(id /* block */)arg1;
- (id /* block */)likeClickEndCallback;
- (void)setLikeClickEndCallback:(id /* block */)arg1;
- (id /* block */)likeLongPressOverLimitCallback;
- (void)setLikeLongPressOverLimitCallback:(id /* block */)arg1;
- (id /* block */)likeExecuteCallback;
- (void)setLikeExecuteCallback:(id /* block */)arg1;
- (id /* block */)likeAnimatinCallback;
- (void)setLikeAnimatinCallback:(id /* block */)arg1;
- (id /* block */)fontChangeCallback;
- (void)setFontChangeCallback:(id /* block */)arg1;
- (long long)type;
- (double)bottomDescFont;
- (void)setBottomDescFont:(double)arg1;
- (unsigned long long)currLikeCountOnce;
- (void)setCurrLikeCountOnce:(unsigned long long)arg1;
- (unsigned long long)currShockCountOnce;
- (void)setCurrShockCountOnce:(unsigned long long)arg1;
- (BOOL)isLikeExecuting;
- (void)setIsLikeExecuting:(BOOL)arg1;
- (unsigned long long)currentState;
- (BOOL)isTouching;
- (void)setIsTouching:(BOOL)arg1;
- (BOOL)hasInvokePan;
- (void)setHasInvokePan:(BOOL)arg1;
- (id)clapAnimationView;
- (void)setClapAnimationView:(id)arg1;
- (id)clapImageView;
- (void)setClapImageView:(id)arg1;
- (id)executeLikePanGesture;
- (void)setExecuteLikePanGesture:(id)arg1;
- (double)bottomLabelOffsetY;
- (void)setBottomLabelOffsetY:(double)arg1;
- (unsigned long long)buttonTextLocation;
- (void)setButtonTextLocation:(unsigned long long)arg1;
- (BOOL)supportStopShockForMemory;
- (void)setSupportStopShockForMemory:(BOOL)arg1;
- (BOOL)isDirectlyStopShock;
- (void)setIsDirectlyStopShock:(BOOL)arg1;
- (BOOL)isStopShock;
- (void)setIsStopShock:(BOOL)arg1;
- (BOOL)isStopShockAfterLittleTimes;
- (void)setIsStopShockAfterLittleTimes:(BOOL)arg1;
- (BOOL)isStopShockAfterLargeTimes;
- (void)setIsStopShockAfterLargeTimes:(BOOL)arg1;
- (double)iconSideLength;
- (void)setIconSideLength:(double)arg1;
- (void).cxx_destruct;
@end
