@interface WebviewJSEventHandler_saveImage : WebviewJSEventHandlerBase <WCActionSheetDelegate, BaseScanLogicDelegate, WCImageTranslateDelegate>
{
    NSString * m_imgUrl; // +0x8
    NSString * m_base64Data; // +0x10
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x18
    int m_qrcodeActionSheetIndex; // +0x20
    WCActionSheetWithScanWXCode * m_actionSheet; // +0x28
    UIImage * _scanImage; // +0x30
    MMUIViewController * _webViewController; // +0x38
    BOOL _showActionSheet; // +0x40
    BOOL _isScanScreen; // +0x41
    BOOL _canShowActionSheetOnlyForQrCode; // +0x42
    double _elementTop; // +0x48
    double _elementLeft; // +0x50
    double _elementWidth; // +0x58
    double _elementHeight; // +0x60
    NSDictionary * _eventConfigDict; // +0x68
    WCImageTranslateLogic * _imgTranslateLogic; // +0x70
}
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)reportWebviewImageActionWithActionSheet:(id)arg1 itemType:(unsigned int)arg2;
- (void)reportImageSearchMenuItemExposed;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)canShowActionSheetOnlyForQrCode;
- (BOOL)shouldAddScanQRCodeButton;
- (BOOL)shouldAddFavButton;
- (BOOL)shouldAddShareButton;
- (BOOL)shouldAddSaveToAlbumButton;
- (BOOL)shouldAddTranslateImageButton;
- (BOOL)shouldAddImageSearchButton;
- (void)scanImageByWebData;
- (void)prepareForPreTranslateImage;
- (void)preTranslateImageWihtUrl:(id)arg1;
- (void)pushTranslatedPhotoViewController;
- (id)setupAndGetPhotoViewController;
- (id)__genImageBySnapLocation;
- (void)scanImageBySnapLocation;
- (void)scanImageBySnapshotScreen;
- (void)PreScanQRCode;
- (void)saveImageToAlbumWithUrl:(id)arg1 OrBase64Data:(id)arg2 Selector:(SEL)arg3;
- (void)sendMsgWithImageData:(id)arg1;
- (void)saveImgWithImageData:(id)arg1;
- (void)addImgFavWithImageData:(id)arg1;
- (void)startImageSearch:(id)arg1;
- (void)startCircleToSearch:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)onPushViewContoller:(id)arg1 animated:(BOOL)arg2;
- (void)onScanEnds;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (BOOL)isForbidForward;
- (void)onPreDetectWordSuccess:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (id)m_imgUrl;
- (void)setM_imgUrl:(id)arg1;
- (id)m_base64Data;
- (void)setM_base64Data:(id)arg1;
- (BOOL)showActionSheet;
- (void)setShowActionSheet:(BOOL)arg1;
- (double)elementTop;
- (void)setElementTop:(double)arg1;
- (double)elementLeft;
- (void)setElementLeft:(double)arg1;
- (double)elementWidth;
- (void)setElementWidth:(double)arg1;
- (double)elementHeight;
- (void)setElementHeight:(double)arg1;
- (id)eventConfigDict;
- (void)setEventConfigDict:(id)arg1;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (BOOL)isScanScreen;
- (void)setIsScanScreen:(BOOL)arg1;
- (void)setCanShowActionSheetOnlyForQrCode:(BOOL)arg1;
- (void).cxx_destruct;
@end

