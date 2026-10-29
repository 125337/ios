@interface KindaFlutterPlugin : NSObject <MMFlutterPlugin>
+ (id)plugin;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
@end

