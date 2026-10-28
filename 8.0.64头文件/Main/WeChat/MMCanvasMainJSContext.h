@interface MMCanvasMainJSContext : MMWebJSContext
{
    MMBaseJsApiHandler * _baseJsApiHandler; // +0x8
    id /* block */ _postMessageCb; // +0x10
    NSString * _systemInfoJsonStr; // +0x18
}
- (id)initWithJVM:(id)arg1 name:(id)arg2 postMessageCb:(id /* block */)arg3 systemInfoJson:(id)arg4;
- (void)dealloc;
- (void)initBaseJsApiHandler;
- (void)injectNativeContext;
- (void)dispatchCallback:(id)arg1 params:(id)arg2;
- (void)dispatchEvent:(id)arg1 eventInfo:(id)arg2;
- (id)baseJsApiHandler;
- (void)setBaseJsApiHandler:(id)arg1;
- (id /* block */)postMessageCb;
- (void)setPostMessageCb:(id /* block */)arg1;
- (id)systemInfoJsonStr;
- (void)setSystemInfoJsonStr:(id)arg1;
- (void).cxx_destruct;
@end
