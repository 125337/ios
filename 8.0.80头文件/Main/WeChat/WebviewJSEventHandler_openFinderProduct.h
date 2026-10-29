@interface WebviewJSEventHandler_openFinderProduct : WebviewJSEventHandlerBase
{
    WAAppIdToUsernameTransfer * _appIDTransfer; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)jsapiName;
- (void)endErrorWithMessage:(id)arg1;
- (void)endWithOK;
- (void)openFinderProductWithAppID:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 productParam:(id)arg7;
- (void)openFinderProductWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 productParam:(id)arg7;
- (void).cxx_destruct;
@end
