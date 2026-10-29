@interface LiteAppWebviewViewFactory : NSObject <FlutterPlatformViewFactory>
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
}
- (id)initWithMessenger:(id)arg1;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (void).cxx_destruct;
@end
