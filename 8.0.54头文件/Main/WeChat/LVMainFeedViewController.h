@interface LVMainFeedViewController : LVFlutterViewController
{
    LVDelayingGestureRecognizer * _delayingGestureRecognizer; // +0x68
}
+ (id)routeName;
+ (id)extraPlugins;
+ (id)commonReportParams;
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

