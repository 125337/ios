@interface MMWebviewMiniWindowNavi : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x8
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x10
}
- (void)viewDidLoad;
- (void)setupWebTransitionControllerWithTaskData:(id)arg1;
- (id)rootWebVC;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (void).cxx_destruct;
@end
