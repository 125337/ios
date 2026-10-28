@interface CameraScanViewControllerOpenParams : NSObject
{
    BOOL _bHideMyQRCodeBtn; // +0x8
    BOOL _bHideAlbumBtn; // +0x9
    BOOL _bHideTorchButton; // +0xa
    NSString * _descStr; // +0x10
    CameraScanGoodsAdInfo * _adInfo; // +0x18
    CameraScanGoodsJSAPIInfo * _jsapiInfo; // +0x20
}
- (BOOL)bHideMyQRCodeBtn;
- (void)setBHideMyQRCodeBtn:(BOOL)arg1;
- (BOOL)bHideAlbumBtn;
- (void)setBHideAlbumBtn:(BOOL)arg1;
- (BOOL)bHideTorchButton;
- (void)setBHideTorchButton:(BOOL)arg1;
- (id)descStr;
- (void)setDescStr:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)jsapiInfo;
- (void)setJsapiInfo:(id)arg1;
- (void).cxx_destruct;
@end
