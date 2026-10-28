@interface MMLiteAppPlatformViewFactory : NSObject <FlutterPlatformViewFactory>
{
    MMLiteAppPlatformViewPlugin * _plugin; // +0x8
    NSMapTable * _viewMap; // +0x10
}
- (id)init;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)viewMap;
- (void)setViewMap:(id)arg1;
- (void).cxx_destruct;
@end
