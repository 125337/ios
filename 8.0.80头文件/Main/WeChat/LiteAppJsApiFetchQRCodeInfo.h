@interface LiteAppJsApiFetchQRCodeInfo : LiteAppJsApi <GetQRCodeInfoLogicDelegate>
{
    GetQRCodeInfoLogic * _qrCodeInfoLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)scanQRCodeLogic;
- (id)getQRCodeInfoLogic;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)arg1;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(id)arg2;
- (id)qrCodeInfoLogic;
- (void)setQrCodeInfoLogic:(id)arg1;
- (void).cxx_destruct;
@end
