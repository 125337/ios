@interface MMImageOpenWeAppLogic : NSObject <MMActionSheetQRCodeRowViewDelegate, WAWxMaterialRefreshExt, QRCodeInMultiDisplayViewDelegate, BaseScanLogicDelegate>
{
    BOOL _disable; // +0x8
    BOOL _haveMaterialButton; // +0x9
    ScanQRCodeDataUsedInMultiCode * _detectMultiCodeData; // +0x10
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x18
    id <MMImageOpenWeAppDelegate> _delegate; // +0x20
    QRCodeInMultiDisplayView * _qrCodeMultiView; // +0x28
    MMImageActionOpenWeAppListItem * _openWeAppList; // +0x30
    NSMutableArray * _openWeAppItemList; // +0x38
    NSString * _materialFileExt; // +0x40
    NSString * _imagePath; // +0x48
    UIImage * _image; // +0x50
    MMUIViewController * _curViewController; // +0x58
}
- (id)initWithViewController:(id)arg1;
- (void)dealloc;
- (id)scanQRCodeLogic;
- (void)updateWithScanParams:(id)arg1;
- (id)qrCodeRowView;
- (void)tryScanImage:(id)arg1 imagePath:(id)arg2;
- (void)onTappedRowInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onDotViewClicked:(id)arg1;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)dismissQRCodeMultiView;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(BOOL)arg1;
- (BOOL)addWAOpenWxMaterialButton:(id)arg1;
- (void)onScanEnds;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (BOOL)disable;
- (void)setDisable:(BOOL)arg1;
- (id)detectMultiCodeData;
- (void)setDetectMultiCodeData:(id)arg1;
- (void)setScanQRCodeLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)qrCodeMultiView;
- (void)setQrCodeMultiView:(id)arg1;
- (id)openWeAppList;
- (void)setOpenWeAppList:(id)arg1;
- (id)openWeAppItemList;
- (void)setOpenWeAppItemList:(id)arg1;
- (BOOL)haveMaterialButton;
- (void)setHaveMaterialButton:(BOOL)arg1;
- (id)materialFileExt;
- (void)setMaterialFileExt:(id)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)curViewController;
- (void)setCurViewController:(id)arg1;
- (void).cxx_destruct;
@end

