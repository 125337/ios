@interface MinimizeAntiCollisionLogic : NSObject
{
    id <MinimizeAntiCollisionLogicDelegate> _delegate; // +0x8
    NSMutableArray * _trackedViews; // +0x10
    double _safeTopInset; // +0x18
    double _safeBottomInset; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)trackView:(id)arg1;
- (void)avoidCollisonSelf:(CGRect)arg1;
- (void)avoidCollisionFromFrame:(CGRect)arg1 except:(id)arg2;
- (void)handleTrackedViewMove:(id)arg1;
- (id)find:(id)arg1;
- (CGPoint)checkCollision:(id)arg1 with:(id)arg2;
- (CGPoint)checkCollisionWithFixedFrame:(CGRect)arg1 flexibleFrame:(CGRect)arg2 atWindow:(id)arg3;
- (CGRect)getContentFrame:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)trackedViews;
- (void)setTrackedViews:(id)arg1;
- (double)safeTopInset;
- (void)setSafeTopInset:(double)arg1;
- (double)safeBottomInset;
- (void)setSafeBottomInset:(double)arg1;
- (void).cxx_destruct;
@end
