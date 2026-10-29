@interface MagicEcsNirvanaBizDelegate : NSObject <IMagicSimpleDelegate>
{
    MagicEcsNirvanaBizHolder * _holder; // +0x8
    MagicEcsNirvanaViewController * _viewController; // +0x10
    UIView * _vConsoleContainer; // +0x18
}
- (id)init;
- (id)provideVConsoleContainer;
- (void)onCanvasCreated:(unsigned int)arg1 canvasView:(id)arg2;
- (void)onCanvasFirstFrameRendered;
- (id)holder;
- (void)setHolder:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)vConsoleContainer;
- (void).cxx_destruct;
@end
