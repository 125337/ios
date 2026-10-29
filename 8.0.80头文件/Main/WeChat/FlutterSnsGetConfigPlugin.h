@interface FlutterSnsGetConfigPlugin : NSObject <MMFlutterPlugin, PlatformGetConfigApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)getConfigKey:(id)arg1 error:(id *)arg2;
- (id)getDynamicConfigKey:(id)arg1 error:(id *)arg2;
@end
