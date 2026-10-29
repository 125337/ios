@interface WCCanvasPureImageComponent : WCCanvasComponent <WCCanvasImageLoaderObserver, FullScreenGestureDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    WCCanvasDynamicDataLoader * _dataLoader; // +0x8
    UIImageView * _m_imageView; // +0x10
    WXFullScreenGestureRecognizer * _gesture; // +0x18
    NSMutableDictionary * _qrCodeUrlUpdateDic; // +0x20
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initGesture;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)m_imageView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onFullScreenLongPressBegin;
- (void)doScanQRCode;
- (void)loadImage:(BOOL)arg1;
- (id)dataLoader;
- (void)checkAndUpdateQrCodeUrl;
- (void)onUpdateQrCode:(id)arg1 componentId:(id)arg2 snsId:(id)arg3;
- (void)setDataLoader:(id)arg1;
- (void)setM_imageView:(id)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (id)qrCodeUrlUpdateDic;
- (void)setQrCodeUrlUpdateDic:(id)arg1;
- (void).cxx_destruct;
@end

