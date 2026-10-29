@interface WCCanvasPageMiddleViewController : MMUIViewController <WCCanvasPageViewControllerExt>
{
    BOOL _hasJumped; // +0x68
    WCCanvasPageViewController * _canvasPageVC; // +0x70
}
- (id)initWithCanvasPageVC:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onCanvasViewDidBePushed;
- (id)canvasPageVC;
- (void)setCanvasPageVC:(id)arg1;
- (BOOL)hasJumped;
- (void)setHasJumped:(BOOL)arg1;
- (void).cxx_destruct;
@end

