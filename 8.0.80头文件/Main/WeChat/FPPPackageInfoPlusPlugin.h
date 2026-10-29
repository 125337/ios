@interface FPPPackageInfoPlusPlugin : NSObject <FlutterPlugin>
+ (void)registerWithRegistrar:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)getInstallDate;
- (id)getUpdateDate;
- (id)getTimeMillisStringFromDate:(id)arg1;
@end
