@interface FLTDeviceInfoPlusPlugin : NSObject <FlutterPlugin>
+ (void)registerWithRegistrar:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)isDevicePhysical;
@end
