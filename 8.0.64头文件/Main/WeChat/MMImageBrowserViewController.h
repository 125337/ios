@interface MMImageBrowserViewController : MMMediaBrowserViewController <RecentForwardScrollViewDelegate, EditImageForwardAndEditLogicDelegate, BaseScanLogicDelegate, MMActionSheetQRCodeRowViewDelegate, QRCodeInMultiDisplayViewDelegate, WCImageTranslateDelegate, WCTranslateImgViewControllerDelegate, OCRTransHalfScreenViewControllerDelegate, WCActionSheetDelegate>
{
    EditImageForwardAndEditLogicController * m_editImageLogicController; // +0x70
    unsigned int _livePhotoClickCount; // +0x78
    CMessageWrap * _originMsg; // +0x80
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x88
    QRCodeInMultiDisplayView * _qrCodeMultiView; // +0x90
    WCImageTranslateLogic * _imgTranslateLogic; // +0x98
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0xa0
    WCActionSheet * _saveActionSheet; // +0xa8
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)registerYReportSdk;
- (BOOL)onSingleTap;
- (void)setupScrollActionSheet;
- (void)addActionSheetItem:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (id)imgTranslateLogic;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (BOOL)showActionSheetBeforeSaveToAlbum;
- (void)handleSaveImageToAlbum;
- (void)handleEditImage;
- (void)handleSearchImage;
- (void)handleTranslateImage;
- (void)handleImageOCR;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onScanEnds;
- (void)onTappedRowInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)dismissQRCodeMultiView;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onDotViewClicked:(id)arg1;
- (void)onSelectMarkDotInfo:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (void)photoVCWillBePoped;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)showOCRHalfScreenViewCtrl;
- (void)onClickLivePhotoButton;
- (id)originMsg;
- (void)setOriginMsg:(id)arg1;
- (id)scanQRCodeLogic;
- (void)setScanQRCodeLogic:(id)arg1;
- (id)qrCodeMultiView;
- (void)setQrCodeMultiView:(id)arg1;
- (void)setImgTranslateLogic:(id)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (id)saveActionSheet;
- (void)setSaveActionSheet:(id)arg1;
- (unsigned int)livePhotoClickCount;
- (void)setLivePhotoClickCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
