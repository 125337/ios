@interface WACanvasDataSampleMgr : NSObject <WACanvasDataSampleMgrExt>
- (id)init;
- (id)getCurrentCanvasImage:(id)arg1 scaleFactor:(float)arg2;
- (id)getCurrentHTMLWebViewImage:(id)arg1 scaleFactor:(float)arg2;
- (id)getGameServerData:(id)arg1;
- (id)getResizedImageByAppId:(id)arg1 targetViewId:(int)arg2;
- (id)aesGcmEncrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (void)requestReportCanvasSampleData:(id)arg1 onSuccess:(id /* block */)arg2 onFailure:(id /* block */)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2 onSuccess:(id /* block */)arg3 onFailure:(id /* block */)arg4;
- (void)onServiceRequestSample:(id)arg1 EventInfo:(id)arg2 Success:(id /* block */)arg3 Failure:(id /* block */)arg4 targetViewId:(int)arg5 isDebugMode:(BOOL)arg6;
- (void)onBeforeQRCodeRecognized:(id)arg1;
- (void)onBeforeProfileRedirect:(id)arg1;
- (void)onBeforeWAGameExit:(id)arg1;
- (void)onAfterWebViewLoad:(id)arg1 viewId:(int)arg2;
@end
