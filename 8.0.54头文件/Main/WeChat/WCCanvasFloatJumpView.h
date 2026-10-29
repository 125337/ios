@interface WCCanvasFloatJumpView : WCCanvasFloatActionBaseView
- (id)initWithFrame:(CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;
- (void)hideJumpView:(BOOL)arg1;
- (void)invokeAutoJump;
- (void)invokeSwipeJump;
- (double)swipeJumpOffset;
@end

