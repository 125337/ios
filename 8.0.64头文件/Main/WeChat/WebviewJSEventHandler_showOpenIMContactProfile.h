@interface WebviewJSEventHandler_showOpenIMContactProfile : WebviewJSEventHandlerBase
{
    unsigned long long _scene; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showOpenIMContactInfoForThirdAppViewControllerWithDataUrl:(id)arg1 targetContact:(id)arg2 spamWording:(id)arg3 spamContext:(id)arg4 bPopVCWhenLeave:(BOOL)arg5 halfScreen:(BOOL)arg6;
- (void)showOpenIMContactInfoForThirdAppErrorTipWitherrMsg:(id)arg1 bPopVCWhenLeave:(BOOL)arg2;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
@end
