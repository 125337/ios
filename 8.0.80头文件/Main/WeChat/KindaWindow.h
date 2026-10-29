@interface KindaWindow : UIWindow
+ (id)shareInstance;
- (id)init;
- (void)dealloc;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setRootViewController:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)didBecomeVisible;
- (void)didBecomeHidden;
- (void)didBecomeKey;
- (void)didResignKey;
- (void)keyboardWillShow;
- (void)keyboardDidShow;
- (void)keyboardWillHide;
- (void)keyboardDidHide;
@end
