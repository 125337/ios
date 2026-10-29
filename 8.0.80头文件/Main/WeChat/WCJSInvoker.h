@interface WCJSInvoker : NSObject
{
    NSString * _javascript; // +0x8
    NSString * _invokeObject; // +0x10
    NSString * _invokeFunc; // +0x18
    NSArray * _invokeArgs; // +0x20
    id /* block */ _completionBlock; // +0x28
    NSString * _debugString; // +0x30
}
+ (id)safeString:(id)arg1;
+ (id)safeEscapeJavaScriptString:(id)arg1;
+ (id)safeDictionary:(id)arg1;
+ (id)safeArray:(id)arg1;
- (id)initWithJavascript:(id)arg1;
- (id)initWithObj:(id)arg1 Func:(id)arg2 Args:(id)arg3;
- (id)finalJavascript;
- (id)invokeInJsContext:(id)arg1;
- (void)invokeInWebview:(id)arg1;
- (void)invokeNParamInWebview:(id)arg1;
- (void)invoke0ParamInWebview:(id)arg1;
- (void)invoke1ParamInWebview:(id)arg1;
- (void)invoke2ParamInWebview:(id)arg1;
- (void)invoke3ParamInWebview:(id)arg1;
- (void)invoke4ParamInWebview:(id)arg1;
- (id)javascript;
- (void)setJavascript:(id)arg1;
- (id)invokeObject;
- (void)setInvokeObject:(id)arg1;
- (id)invokeFunc;
- (void)setInvokeFunc:(id)arg1;
- (id)invokeArgs;
- (void)setInvokeArgs:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)debugString;
- (void)setDebugString:(id)arg1;
- (void).cxx_destruct;
@end
