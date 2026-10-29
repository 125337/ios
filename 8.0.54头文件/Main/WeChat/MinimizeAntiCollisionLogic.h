@interface MinimizeAntiCollisionLogic : NSObject
{
    id <MinimizeAntiCollisionLogicDelegate> _delegate; // +0x8
    NSMutableArray * _trackedViews; // +0x10
}
- (id)init;
- (void)trackView:(id)arg1;
- (void)handleTrackedViewMove:(id)arg1;
- (id)find:(id)arg1;
- (CGPoint)checkCollision:(id)arg1 with:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)trackedViews;
- (void)setTrackedViews:(id)arg1;
- (void).cxx_destruct;
@end

