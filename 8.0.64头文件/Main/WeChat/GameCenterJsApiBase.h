@interface GameCenterJsApiBase : WebviewJSEventHandlerBase
- (void)event:(id)arg1 endWithErrorDesc:(id)arg2;
- (void)event:(id)arg1 successEndWithResult:(id)arg2;
- (id)getPkgContentInfo:(id)arg1 withContents:(BOOL)arg2 ridInfoSet:(id)arg3;
@end
