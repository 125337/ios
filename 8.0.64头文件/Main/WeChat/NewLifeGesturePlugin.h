@interface NewLifeGesturePlugin : NSObject <MMFlutterPlugin, FlutterNewLifeGesture>
{
    MMFlutterViewController * _viewController; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)onFlowListTopIsTop:(BOOL)arg1 error:(id *)arg2;
- (void)enableEdgeDragEnable:(BOOL)arg1 error:(id *)arg2;
- (void)setEdgeDragThresholdThreshold:(double)arg1 error:(id *)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
