@interface WebviewJSEventHandler_privateCommonApi : WebviewJSEventHandlerBase <PrivateCommonApiHandlerDelegate>
{
    PrivateCommonApiHandler * _handler; // +0x8
}
+ (BOOL)isValidPrivateUrl:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleCommonApiWithResult:(unsigned long long)arg1 params:(id)arg2;
- (id)getViewController;
- (Class)handlerClassForOpCode:(id)arg1;
- (BOOL)syncHanleWithOpcode:(id)arg1 params:(id)arg2;
- (void)handleAccessLastUser;
- (void)handleAccessSystemInfo;
- (void).cxx_destruct;
@end
