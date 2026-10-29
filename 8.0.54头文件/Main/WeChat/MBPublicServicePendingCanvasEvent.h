@interface MBPublicServicePendingCanvasEvent : NSObject
{
    BOOL _pendingFirstFrame; // +0x8
    UIView * _pendingView; // +0x10
    CGRect _pendingLayout; // +0x18
}
- (id)pendingView;
- (void)setPendingView:(id)arg1;
- (BOOL)pendingFirstFrame;
- (void)setPendingFirstFrame:(BOOL)arg1;
- (CGRect)pendingLayout;
- (void)setPendingLayout:(CGRect)arg1;
- (void).cxx_destruct;
@end

