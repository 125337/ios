@interface LiteAppAlbumView : NSObject <FlutterPlatformView, SystemImagePickViewControllerDelegate>
{
    UIView * _view; // +0x8
    FlutterMethodChannel * _channel; // +0x10
    SystemImagePickViewController * vc; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (id)view;
- (void)onClickAsset:(id)arg1;
- (void)onChangeAsset:(id)arg1;
- (void)onAlbumChange:(id)arg1;
- (void).cxx_destruct;
@end

