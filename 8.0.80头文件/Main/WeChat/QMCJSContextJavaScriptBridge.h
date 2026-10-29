@interface QMCJSContextJavaScriptBridge : QMCBaseJavaScriptBridge
{
    JSContext * _ctx; // +0x8
}
- (id)initWithJSContext:(id)arg1;
- (void)setUpWithJSContext:(id)arg1;
- (void)evaluateJavascript:(id)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (void).cxx_destruct;
@end
