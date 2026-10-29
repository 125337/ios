@interface WebviewJSEventHandler_openSpecificView : WebviewJSEventHandlerBase <VerifyPhoneDelegate, BrandOpenSpecificViewHandlerDelegate>
{
    BrandOpenSpecificViewHandler * _openSpecificViewHandler; // +0x8
    BOOL _isDismissCurrentViewController; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)routeEnableTest;
- (BOOL)shouldDismissCurrentViewController;
- (id)getCurrentController;
- (void).cxx_destruct;
@end

