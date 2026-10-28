@interface LiteAppJsApiAdScanQRCode : LiteAppJsApiAdBase
{
    NSString * _qrUrl; // +0x20
    NSString * _qrExtInfo; // +0x28
}
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)scanQRCode:(id)arg1 qrExtInfo:(id)arg2;
- (void)onUpdateQrCode:(id)arg1 componentId:(id)arg2 snsId:(id)arg3;
- (id)qrUrl;
- (void)setQrUrl:(id)arg1;
- (id)qrExtInfo;
- (void)setQrExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
