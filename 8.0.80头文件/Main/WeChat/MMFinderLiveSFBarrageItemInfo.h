@interface MMFinderLiveSFBarrageItemInfo : NSObject
{
    BOOL _isAnimating; // +0x8
    BOOL _isOffScreenMode; // +0x9
    BOOL _isInTappedState; // +0xa
    BOOL _isInDisappearState; // +0xb
    MMFinderLiveSFBarrageCellView * _barrageCell; // +0x10
    MMFinderLiveSFBarrageSingleTrackInfo * _rootTrackInfo; // +0x18
    unsigned long long _barrageSeqNum; // +0x20
    unsigned long long _moveAnimType; // +0x28
    double _fullyVisibleTime; // +0x30
    double _animateSpeed; // +0x38
    double _animationStartTime; // +0x40
    id /* block */ _didTapBlock; // +0x48
    id /* block */ _actionInvokeBlock; // +0x50
    id /* block */ _autoRecoverUnTappedBlock; // +0x58
    id /* block */ _getSingleEnableCommentBlock; // +0x60
    id /* block */ _tappedStateChangeCallback; // +0x68
    id /* block */ _movingCompletion; // +0x70
    CGPoint _animationStartPos; // +0x78
}
- (id)initWithBarrageCell:(id)arg1;
- (void)dealloc;
- (void)setIsInTappedState:(BOOL)arg1;
- (void)removeMovingAnimation;
- (CGRect)presentationFrame;
- (BOOL)isActualStartMovingAnimation;
- (id)barrageCell;
- (void)setBarrageCell:(id)arg1;
- (id)rootTrackInfo;
- (void)setRootTrackInfo:(id)arg1;
- (unsigned long long)barrageSeqNum;
- (void)setBarrageSeqNum:(unsigned long long)arg1;
- (unsigned long long)moveAnimType;
- (void)setMoveAnimType:(unsigned long long)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (double)fullyVisibleTime;
- (void)setFullyVisibleTime:(double)arg1;
- (double)animateSpeed;
- (void)setAnimateSpeed:(double)arg1;
- (CGPoint)animationStartPos;
- (void)setAnimationStartPos:(CGPoint)arg1;
- (double)animationStartTime;
- (void)setAnimationStartTime:(double)arg1;
- (BOOL)isOffScreenMode;
- (void)setIsOffScreenMode:(BOOL)arg1;
- (id /* block */)didTapBlock;
- (void)setDidTapBlock:(id /* block */)arg1;
- (id /* block */)actionInvokeBlock;
- (void)setActionInvokeBlock:(id /* block */)arg1;
- (id /* block */)autoRecoverUnTappedBlock;
- (void)setAutoRecoverUnTappedBlock:(id /* block */)arg1;
- (id /* block */)getSingleEnableCommentBlock;
- (void)setGetSingleEnableCommentBlock:(id /* block */)arg1;
- (id /* block */)tappedStateChangeCallback;
- (void)setTappedStateChangeCallback:(id /* block */)arg1;
- (id /* block */)movingCompletion;
- (void)setMovingCompletion:(id /* block */)arg1;
- (BOOL)isInTappedState;
- (BOOL)isInDisappearState;
- (void)setIsInDisappearState:(BOOL)arg1;
- (void).cxx_destruct;
@end
