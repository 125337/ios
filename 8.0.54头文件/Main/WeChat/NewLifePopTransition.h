@interface NewLifePopTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _cancelled; // +0x8
    BOOL _isFromFlutter; // +0x9
    BOOL _hasClearSnapshot; // +0xa
    int _taskId; // +0xc
    double _duration; // +0x10
    UIView * _fromView; // +0x18
    UIView * _fromViewMask; // +0x20
    UIImageView * _toSnapshotImageView; // +0x28
    UIView * _toSnapshotView; // +0x30
    UIView * _toView; // +0x38
    UIView * _toViewMask; // +0x40
    UIView * _backgroundView; // +0x48
    UIColor * _backgroundColor; // +0x50
    id /* block */ _endCallback; // +0x58
    id /* block */ _popTargetCallback; // +0x60
    UIImage * _toImage; // +0x68
    UIViewPropertyAnimator * _animator; // +0x70
    CGPoint _viewOffset; // +0x78
    CGRect _toContentFrame; // +0x88
    CGRect _toFrame; // +0xa8
    CGRect _fromFrame; // +0xc8
    CGRect _fromContentFrame; // +0xe8
    CGRect _maskTargetFrame; // +0x108
}
- (void)dealloc;
- (void)dragWithProgress:(double)arg1 translation:(CGPoint)arg2;
- (void)scrollDownInProgress:(double)arg1 translation:(CGPoint)arg2;
- (void)continueInteractiveTransition;
- (void)cancelTransition;
- (void)animateTransition:(id)arg1;
- (void)tryClearSnapShotView;
- (double)transitionDuration:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (int)taskId;
- (void)setTaskId:(int)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (CGPoint)viewOffset;
- (void)setViewOffset:(CGPoint)arg1;
- (id)fromView;
- (void)setFromView:(id)arg1;
- (id)fromViewMask;
- (void)setFromViewMask:(id)arg1;
- (id)toSnapshotImageView;
- (void)setToSnapshotImageView:(id)arg1;
- (id)toSnapshotView;
- (void)setToSnapshotView:(id)arg1;
- (id)toView;
- (void)setToView:(id)arg1;
- (id)toViewMask;
- (void)setToViewMask:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (CGRect)toContentFrame;
- (void)setToContentFrame:(CGRect)arg1;
- (CGRect)toFrame;
- (void)setToFrame:(CGRect)arg1;
- (CGRect)fromFrame;
- (void)setFromFrame:(CGRect)arg1;
- (CGRect)fromContentFrame;
- (void)setFromContentFrame:(CGRect)arg1;
- (CGRect)maskTargetFrame;
- (void)setMaskTargetFrame:(CGRect)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)isFromFlutter;
- (void)setIsFromFlutter:(BOOL)arg1;
- (BOOL)hasClearSnapshot;
- (void)setHasClearSnapshot:(BOOL)arg1;
- (id /* block */)endCallback;
- (void)setEndCallback:(id /* block */)arg1;
- (id /* block */)popTargetCallback;
- (void)setPopTargetCallback:(id /* block */)arg1;
- (id)toImage;
- (void)setToImage:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end

