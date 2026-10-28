@interface TingApiPlayAppCpp : UnitRCObjcBaseProxyClass <TingApiPlayApp>
+ (id)getOrCreatePlayApp:(int)arg1;
+ (id)getPlayApp:(int)arg1;
- (id)getTask;
- (id)getTingApiReportService;
- (id)getShutdownController;
- (id)getPlayCenterManager;
- (int)getAppId;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onAppTerminate;
- (void)onAppClearData;
- (void)setPlayAppConfig:(id)arg1;
- (id)getPlayAppConfig;
@end
