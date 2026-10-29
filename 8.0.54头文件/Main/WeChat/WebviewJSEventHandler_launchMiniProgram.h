@interface WebviewJSEventHandler_launchMiniProgram : WebviewJSEventHandlerBase
{
    WAAppIdToUsernameTransfer * _appIDTransfer; // +0x8
    BOOL _silentOpen; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)jsapiName;
- (void)endErrorWithMessage:(id)arg1;
- (void)endWithOK;
- (void)launchMiniProgramWithAppID:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 commonUxInfo:(id)arg7 launchParam:(id)arg8;
- (void)launchMiniProgramWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 commonUxInfo:(id)arg7 launchParam:(id)arg8;
- (BOOL)silentOpen;
- (void)setSilentOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end

