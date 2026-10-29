@interface WebviewJSEventHandler_openBusinessView : WebviewJSEventHandlerBase <PBMessageObserverDelegate>
{
    WAContactGetter * _contactGetter; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)endWithError:(id)arg1 errCode:(long long)arg2;
- (void)endWithSuccessExtraData:(id)arg1;
- (void)endWithResult:(id)arg1 errCode:(long long)arg2 extraData:(id)arg3;
- (void)requestAuthorizationForLaunch:(id)arg1 queryStr:(id)arg2 referrerAppId:(id)arg3 context:(id)arg4;
- (void)handleAuthorizationForLaunchResponse:(id)arg1;
- (void)doOpenWeAppWithRequest:(id)arg1 response:(id)arg2 contact:(id)arg3 context:(id)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (void).cxx_destruct;
@end
