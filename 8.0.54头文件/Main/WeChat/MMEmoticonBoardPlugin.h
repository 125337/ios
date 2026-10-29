@interface MMEmoticonBoardPlugin : NSObject <MMFlutterPlugin>
{
    UIViewController * _attachedViewController; // +0x8
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x10
    MMEmoticonBoardNativeViewFactory * _viewFactory; // +0x18
}
+ (id)plugin;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)attachedViewController;
- (void)setAttachedViewController:(id)arg1;
- (id)registrar;
- (void)setRegistrar:(id)arg1;
- (id)viewFactory;
- (void)setViewFactory:(id)arg1;
- (void).cxx_destruct;
@end

