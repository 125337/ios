@interface LiteAppJsApiLaunchMiniProgram : LiteAppJsApi
{
    WAAppIdToUsernameTransfer * _appIDTransfer; // +0x20
    NSMutableArray * _widgetParameters; // +0x28
    NSDictionary * _extraParamInfo; // +0x30
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)launchMiniProgramWithAppID:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 launchParam:(id)arg7;
- (void)launchMiniProgramWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 launchParam:(id)arg7;
- (id /* block */)getShareAction;
- (id)widgetParameters;
- (void)setWidgetParameters:(id)arg1;
- (id)extraParamInfo;
- (void)setExtraParamInfo:(id)arg1;
- (void).cxx_destruct;
@end

