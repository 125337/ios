@interface FlutterNativeScrollViewPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    FlutterNativeScrollView * _nativeScrollView; // +0x10
    UIView * _flutterView; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (id)getScrollView;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onDetachedToViewController;
- (void)attachNativeScrollView:(id)arg1;
- (void)didScroll:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)nativeScrollView;
- (void)setNativeScrollView:(id)arg1;
- (id)flutterView;
- (void)setFlutterView:(id)arg1;
- (void).cxx_destruct;
@end
