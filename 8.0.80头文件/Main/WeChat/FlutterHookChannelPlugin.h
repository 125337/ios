@interface FlutterHookChannelPlugin : NSObject <MMFlutterPlugin, FlutterHookChannelHost>
- (void)onAttachedToEngine:(id)arg1;
- (void)clipboardHasStringWithCompletion:(id /* block */)arg1;
@end
