@interface GameCenterJsEventInfo : NSObject
{
    NSString * _methodName; // +0x8
    NSString * _identifier; // +0x10
    NSDictionary * _params; // +0x18
    JSEvent * _jsEvent; // +0x20
    WebviewJSEventHandler_gameCenterFacade * _eventHandler; // +0x28
}
- (void)successWithMessage:(id)arg1;
- (void)failWithMessage:(id)arg1;
- (void)completeWithMessage:(id)arg1 success:(BOOL)arg2;
- (void)completeWithMessage:(id)arg1 success:(BOOL)arg2 dict:(id)arg3;
- (void)failWithError:(id)arg1;
- (id)getResultDictWithMessage:(id)arg1 success:(BOOL)arg2 dict:(id)arg3;
- (id)methodName;
- (void)setMethodName:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
- (void).cxx_destruct;
@end
