@interface ChatbotJumpPlugin : NSObject <MMFlutterPlugin, ChatbotJumpHostApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openWebSearchJsapiParam:(id)arg1 error:(id *)arg2;
@end
