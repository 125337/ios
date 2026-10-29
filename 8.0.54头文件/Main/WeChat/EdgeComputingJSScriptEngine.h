@interface EdgeComputingJSScriptEngine : MMObject <EdgeComputingScriptEngineProtocol>
{
    JSContext * context; // +0x8
    NSMutableArray * jsApis; // +0x10
}
- (id)init;
- (void)registerJsApi;
- (BOOL)loadScript:(id)arg1;
- (int)executeIntFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (long long)executeLongFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (id)executeStringFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (id)executeArrayFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (void)clear;
- (void).cxx_destruct;
@end

