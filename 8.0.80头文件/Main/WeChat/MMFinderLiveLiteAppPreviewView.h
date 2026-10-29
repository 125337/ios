@interface MMFinderLiveLiteAppPreviewView : MMFinderLiveLiteAppPlatformView <MMFinderLiveFrontEndPreviewViewChannel>
{
    MMLiteAppViewController * _liteApp; // +0x8
    FlutterMethodChannel * _channel; // +0x10
}
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (void)setChannel:(id)arg1;
- (void)handleJSMethod:(id)arg1 params:(id)arg2 WithResult:(id /* block */)arg3;
- (id)liteApp;
- (void)setLiteApp:(id)arg1;
- (id)channel;
- (void).cxx_destruct;
@end
