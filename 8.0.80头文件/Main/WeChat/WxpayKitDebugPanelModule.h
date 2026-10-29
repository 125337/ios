@interface WxpayKitDebugPanelModule : NSObject
+ (void)initialize;
+ (id)moduleName;
+ (BOOL)handlesModule:(id)arg1;
+ (id)moduleInfo;
+ (BOOL)advertisesToAppId:(id)arg1;
+ (BOOL)method:(id)arg1 admitsCaller:(id)arg2;
+ (id)invokeMethod:(id)arg1 arguments:(id)arg2 caller:(id)arg3 reply:(id /* block */)arg4;
+ (id)deniedMethod:(id)arg1 caller:(id)arg2;
+ (void)installPackage:(id)arg1 caller:(id)arg2 reply:(id /* block */)arg3;
+ (void)resetPackage:(id)arg1 caller:(id)arg2 reply:(id /* block */)arg3;
+ (id)packageInfo:(id)arg1 caller:(id)arg2;
+ (id)sign:(id)arg1 caller:(id)arg2;
+ (id)listPackagesForCaller:(id)arg1;
+ (void)deletePackage:(id)arg1 caller:(id)arg2 reply:(id /* block */)arg3;
+ (void)openPackage:(id)arg1 caller:(id)arg2 reply:(id /* block */)arg3;
+ (void)attachAppId:(id)arg1 appUuid:(unsigned int)arg2 packagePath:(id)arg3 view:(id)arg4;
+ (void)detachAppUuid:(unsigned int)arg1;
+ (void)markPassThroughGuideShownForAppUuid:(unsigned int)arg1;
+ (id)authorizedSceneForAppId:(id)arg1 appUuid:(unsigned int)arg2;
+ (id)panelConfigForAppId:(id)arg1 appUuid:(unsigned int)arg2;
+ (id)updateAppId:(id)arg1 appUuid:(unsigned int)arg2 field:(id)arg3 enabled:(BOOL)arg4;
+ (id)readStoreLocked;
+ (id)snapshotStore;
+ (id)mutateStore:(id /* block */)arg1;
+ (void)applyScene:(id)arg1 config:(id)arg2 serviceReady:(BOOL)arg3;
@end
