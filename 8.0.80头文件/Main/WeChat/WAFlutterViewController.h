@interface WAFlutterViewController : FlutterViewController
{
    BOOL _isRealAppear; // +0x8
    FlutterEngine * _skylineEngine; // +0x10
    NSMutableSet * _touchSet; // +0x18
}
- (id)initWithEngine:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;
- (void)detachFlutterEngine;
- (void)destroyFlutterEngine;
- (void)updateByUIWindow:(id)arg1;
- (void)revertOpaque;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)cancelTouches;
- (void)dealloc;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)skylineEngine;
- (void)setSkylineEngine:(id)arg1;
- (id)touchSet;
- (void)setTouchSet:(id)arg1;
- (BOOL)isRealAppear;
- (void)setIsRealAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
