@interface MMPrefetcherMainJSContext : MMWebJSContext
{
    MMBaseJsApiHandler * _baseJsApiHandler; // +0x8
    JSValue * _cleanAtomCallback; // +0x10
}
- (id)initWithJVM:(id)arg1 name:(id)arg2;
- (void)setupForCleanAtomString;
- (void)cleanAtomString;
- (id)invoke:(id)arg1 func:(id)arg2 params:(id)arg3;
- (void)dispatchEventToTarget:(id)arg1 event:(id)arg2 extraData:(id)arg3;
- (void)callbackToContextWithEventType:(id)arg1 event:(id)arg2;
- (void)internalInit;
- (id)baseJsApiHandler;
- (void)setBaseJsApiHandler:(id)arg1;
- (id)cleanAtomCallback;
- (void)setCleanAtomCallback:(id)arg1;
- (void).cxx_destruct;
@end

