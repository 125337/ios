@interface FlutterEngineRegistrar : NSObject <FlutterPluginRegistrar>
{
    NSString * _pluginKey; // +0x8
    FlutterEngine * _flutterEngine; // +0x10
}
- (id)initWithPlugin:(id)arg1 flutterEngine:(id)arg2;
- (id)messenger;
- (id)textures;
- (void)publish:(id)arg1;
- (void)addMethodCallDelegate:(id)arg1 channel:(id)arg2;
- (void)addApplicationDelegate:(id)arg1;
- (id)lookupKeyForAsset:(id)arg1;
- (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2;
- (void)registerViewFactory:(id)arg1 withId:(id)arg2;
- (void)registerViewFactory:(id)arg1 withId:(id)arg2 gestureRecognizersBlockingPolicy:(int)arg3;
- (id)flutterEngine;
- (void)setFlutterEngine:(id)arg1;
- (void).cxx_destruct;
@end
