@interface WebviewJSEventHandler_openOverseaWalletSelect : WebviewJSEventHandlerBase
{
    WAAppIdToUsernameTransfer * _appIDTransfer; // +0x8
}
- (id)pagePathWithQuery:(id)arg1;
- (void)endErrorWithMessage:(id)arg1;
- (void)endWithOK;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)launchFakeNativeWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5;
- (void).cxx_destruct;
@end
