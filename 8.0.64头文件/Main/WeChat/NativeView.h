@interface NativeView : NSObject <FlutterPlatformView>
{
    UIView * _view; // +0x8
    FlutterMethodChannel * _channel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (void)buttonClick:(id)arg1;
- (id)view;
- (void).cxx_destruct;
@end
