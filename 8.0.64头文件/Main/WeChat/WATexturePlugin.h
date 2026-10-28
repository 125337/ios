@interface WATexturePlugin : NSObject <FlutterPlugin>
{
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x8
    WANativeViewPlugin * _nativeViewPlugin; // +0x10
    FlutterMethodChannel * _channel; // +0x18
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)initWithFlutterEngine:(id)arg1 nativeViewPlugin:(id)arg2;
- (void)dealloc;
- (void)updateTextureInfo:(long long)arg1 contentMode:(long long)arg2 textureSize:(CGSize)arg3;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)registrar;
- (void)setRegistrar:(id)arg1;
- (id)nativeViewPlugin;
- (void)setNativeViewPlugin:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (void).cxx_destruct;
@end
