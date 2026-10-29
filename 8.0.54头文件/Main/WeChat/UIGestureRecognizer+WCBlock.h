@interface UIGestureRecognizer (WCBlock)
+ (id)recognizerWithHandler:(id /* block */)arg1;
+ (void)hookUIGestureRecognizer;
- (id)initWithHandler:(id /* block */)arg1;
- (void)handleAction:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (id /* block */)handler;
- (id)getStateDesc;
- (void)setForceDisable:(BOOL)arg1;
- (BOOL)forceDisable;
- (BOOL)swizzle_isEnabled;
@end

