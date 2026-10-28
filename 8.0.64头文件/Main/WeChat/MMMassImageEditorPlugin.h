@interface MMMassImageEditorPlugin : NSObject <MMFlutterPlugin, FPMaasImageEditorApi>
{
    NSObject<FlutterTextureRegistry> * _flutterTextureRegistery; // +0x8
    MJFlutterImageEditorSession * _imageEditorSession; // +0x10
    MMFlutterInstance * _pageInstance; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)getSdkVersionWithError:(id *)arg1;
- (void)launchMaasCoreWithCompletion:(id /* block */)arg1;
- (void)teardownMaasWithCompletion:(id /* block */)arg1;
- (id)releaseFlutterInstanceWithError:(id *)arg1;
- (id)deviceSupportWithError:(id *)arg1;
- (id)flutterTextureRegistery;
- (void)setFlutterTextureRegistery:(id)arg1;
- (id)imageEditorSession;
- (void)setImageEditorSession:(id)arg1;
- (id)pageInstance;
- (void)setPageInstance:(id)arg1;
- (void).cxx_destruct;
@end
