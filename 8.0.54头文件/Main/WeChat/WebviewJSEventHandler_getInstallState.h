@interface WebviewJSEventHandler_getInstallState : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)processPackageUrls:(id)arg1;
- (BOOL)getInstallStateWithPackageUrl:(id)arg1;
- (BOOL)batchGetIntstallState:(id)arg1 intoDictionary:(id *)arg2;
- (void)batchGetInstallStateInBackground:(id)arg1 event:(id)arg2;
@end

