@interface MMInputBarPlugin : NSObject <InputBarApi, MMFlutterPlugin>
+ (id)plugin;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)loadShortbarEmojisConfigName:(id)arg1 error:(id *)arg2;
@end

