@interface FlutterMMDevKitPlugin : NSObject <MMFlutterPlugin, FlutterMMDevKitHost>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)enableMMDevKitWithError:(id *)arg1;
@end
