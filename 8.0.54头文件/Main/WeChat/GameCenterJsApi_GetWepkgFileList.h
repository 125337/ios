@interface GameCenterJsApi_GetWepkgFileList : GameCenterJsApiBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handlePkg:(id)arg1 event:(id)arg2 updateIfNeed:(BOOL)arg3;
- (void)forceUpdateConfig:(id)arg1 event:(id)arg2;
- (void)onPkgUpdate:(id)arg1 event:(id)arg2;
@end

