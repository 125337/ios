@interface WCPayOfflinePayCodeView : MMUIView
{
    double _secondsToRefresh; // +0x8
    BOOL _inAnimation; // +0x10
    BOOL _enable; // +0x11
    int _payCodeStyle; // +0x14
    NSString * _barCodeString; // +0x18
    NSString * _qrCodeString; // +0x20
    id <WCPayOfflinePayCodeViewDelegate> _delegate; // +0x28
    QBarCodeView * _imageBarView; // +0x30
    MMUILabel * _barCodeLabel; // +0x38
    UIView * _barCodeBackGroundView; // +0x40
    MMUILabel * _tipsLabel; // +0x48
    MMUIView * _noticeContentView; // +0x50
    MMUIView * _noticePreConfirmView; // +0x58
    QBarCodeView * _imageQRView; // +0x60
    UIView * _qRCodeBackGroundView; // +0x68
    UIView * _maskView; // +0x70
}
+ (double)qrCodeWidth;
+ (double)barCodeWidth;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)adjustViews;
- (void)setAlpha:(double)arg1;
- (void)dealloc;
- (void)resetViews;
- (void)startAutoRefreshCounting;
- (void)startAutoRefreshCountingAfterSeconds:(unsigned long long)arg1;
- (void)cancelAutoRefreshCounting;
- (void)updateAutoRefreshCount;
- (void)updateCodeImageWithPayCodeStyle:(int)arg1;
- (void)updateCodeImage;
- (void)exitFullScreenIfNeedAnimation:(BOOL)arg1;
- (void)setPayCodeStyle:(int)arg1;
- (void)setBarCodeString:(id)arg1;
- (void)setQrCodeString:(id)arg1;
- (void)setEnable:(BOOL)arg1;
- (void)codeViewTapped:(id)arg1;
- (void)exitFullScreenWithView:(id)arg1 animation:(BOOL)arg2;
- (void)barcodeAnimationBegin;
- (void)barcodeAnimationEnd;
- (void)genNoticePreConfirmView;
- (void)preconfirmTipsViewBtnPress;
- (void)removePreConfirmTipsViewIfNeed;
- (BOOL)isBarcodeViewFullScreen;
- (void)showBarCodeNoticeViewWhenUserTakeScreenshot;
- (int)payCodeStyle;
- (BOOL)enable;
- (id)barCodeString;
- (id)qrCodeString;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageBarView;
- (void)setImageBarView:(id)arg1;
- (id)barCodeLabel;
- (void)setBarCodeLabel:(id)arg1;
- (id)barCodeBackGroundView;
- (void)setBarCodeBackGroundView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)noticeContentView;
- (void)setNoticeContentView:(id)arg1;
- (id)noticePreConfirmView;
- (void)setNoticePreConfirmView:(id)arg1;
- (id)imageQRView;
- (void)setImageQRView:(id)arg1;
- (id)qRCodeBackGroundView;
- (void)setQRCodeBackGroundView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void).cxx_destruct;
@end

