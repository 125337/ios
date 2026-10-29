@interface WAJSEventHandler_showImageOperateSheet : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, BaseScanLogicDelegate>
{
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x8
    int m_qrcodeActionSheetIndex; // +0x10
    WCActionSheetWithScanWXCode * m_actionSheet; // +0x18
    BOOL _hasScanScreen; // +0x20
    double _elementTop; // +0x28
    double _elementLeft; // +0x30
    double _elementWidth; // +0x38
    double _elementHeight; // +0x40
    NSString * _imageUrl; // +0x48
    double _imageWidth; // +0x50
    double _imageHeight; // +0x58
    NSString * _base64DataString; // +0x60
}
- (void)handleJSEvent:(id)arg1;
- (void)tryScanImage;
- (id)getImageData;
- (id)tryGetImageFromBase64Data;
- (id)tryGetLocalImage:(id)arg1;
- (void)PreScanQRCode:(id)arg1;
- (void)onScanEnds;
- (void)didShowScanResult;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncGetImageData:(id)arg1 AndPerformSelector:(SEL)arg2;
- (void)sendMsgWithImageData:(id)arg1;
- (void)saveImgWithImageData:(id)arg1;
- (void)addImgFavWithImageData:(id)arg1;
- (double)elementTop;
- (void)setElementTop:(double)arg1;
- (double)elementLeft;
- (void)setElementLeft:(double)arg1;
- (double)elementWidth;
- (void)setElementWidth:(double)arg1;
- (double)elementHeight;
- (void)setElementHeight:(double)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (double)imageWidth;
- (void)setImageWidth:(double)arg1;
- (double)imageHeight;
- (void)setImageHeight:(double)arg1;
- (id)base64DataString;
- (void)setBase64DataString:(id)arg1;
- (void).cxx_destruct;
@end
