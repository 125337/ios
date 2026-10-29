@interface TingApiPlayAppCpp : UnitRCObjcBaseProxyClass <TingApiPlayApp>
+ (id)getOrCreatePlayApp:(int)arg1;
+ (id)getPlayApp:(int)arg1;
+ (id)getOrCreateStandAlonePlayApp:(id)arg1;
+ (id)getOrCreateStandAlonePlayApp:(id)arg1 config:(id)arg2;
+ (id)getStandAlonePlayApp:(id)arg1;
+ (id)releaseStandAlonePlayApp:(id)arg1;
+ (id)releaseStandAlonePlayApp:(id)arg1 stopPlay:(BOOL)arg2;
+ (id)playingPlayApp;
- (id)getTask;
- (id)createTask;
- (void)updateTask:(id)arg1;
- (id)getTingApiReportService;
- (id)getShutdownController;
- (id)getPlayCenterManager;
- (int)getAppId;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onAppTerminate;
- (void)onAppClearData;
- (void)onAppDestroy;
- (void)removeMinimize;
- (void)setPlayAppConfig:(id)arg1;
- (id)getPlayAppConfig;
- (void)addPlayTaskControllerListener:(id)arg1;
- (void)removePlayTaskControllerListener:(id)arg1;
- (void)onPlayTaskChange:(id)arg1;
@end
