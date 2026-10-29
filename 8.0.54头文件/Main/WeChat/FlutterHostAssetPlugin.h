@interface FlutterHostAssetPlugin : NSObject <MMFlutterPlugin, FlutterHostAssetHost>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)loadKey:(id)arg1 error:(id *)arg2;
- (id)loadStringKey:(id)arg1 cache:(BOOL)arg2 error:(id *)arg3;
@end

