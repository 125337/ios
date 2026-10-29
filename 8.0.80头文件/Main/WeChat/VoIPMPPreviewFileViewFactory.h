@interface VoIPMPPreviewFileViewFactory : NSObject <FlutterPlatformViewFactory>
{
    id <FlutterBinaryMessenger> _messenger; // +0x8
    NSObject * _plugin; // +0x10
}
- (id)initWithMessenger:(id)arg1 plugin:(id)arg2;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (id)messenger;
- (void)setMessenger:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (void).cxx_destruct;
@end
