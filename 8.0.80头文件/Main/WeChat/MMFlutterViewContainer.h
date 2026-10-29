@interface MMFlutterViewContainer : UIView
{
    BOOL _hasDispatchedAppear; // +0x8
    MMFlutterViewController * _flutterVC; // +0x10
}
- (id)initWithFlutterInstance:(id)arg1;
- (void)layoutSubviews;
- (void)dispatchAppear;
- (void)dispatchDisappear;
- (void)didMoveToWindow;
- (void)showInView:(id)arg1 frame:(CGRect)arg2;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (BOOL)hasDispatchedAppear;
- (void)setHasDispatchedAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
