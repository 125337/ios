@interface WCEditImagePenTraceMgr : NSObject
{
    UIView * _hitTestCoordinateView; // +0x8
    NSMutableArray * _penTraceViews; // +0x10
}
- (id)genAndAddAPenDrawViewWithLayer:(id)arg1;
- (void)addTraceView:(id)arg1;
- (void)removeATraceView:(id)arg1;
- (void)reAddATraceView:(id)arg1;
- (BOOL)isTracesContainAPoint:(CGPoint)arg1;
- (BOOL)hasPenTrace;
- (BOOL)highLightPenTraceAtPointIfNeeded:(CGPoint)arg1;
- (id)getHighLightPenTraceIndex;
- (void)setPenTraceHidden:(BOOL)arg1 withIndex:(id)arg2;
- (void)setPenTraceHighLight:(BOOL)arg1 withIndex:(id)arg2;
- (void)_playShockIfNeeded;
- (id)penTraceViews;
- (id)hitTestCoordinateView;
- (void)setHitTestCoordinateView:(id)arg1;
- (void)setPenTraceViews:(id)arg1;
- (void).cxx_destruct;
@end
