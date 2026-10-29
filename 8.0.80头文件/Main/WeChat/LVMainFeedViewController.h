@interface LVMainFeedViewController : LVFlutterViewController
{
    LVDelayingGestureRecognizer * _delayingGestureRecognizer; // +0x70
}
+ (id)routeName;
+ (id)extraPlugins;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldSkipNavInteractiveGesture;
- (void)dealloc;
- (void)viewDidLoad;
- (void)releaseGesture;
- (id)delayingGestureRecognizer;
- (void)setDelayingGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
