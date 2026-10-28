@interface WCCanvasButtonComponent : WCCanvasComponent <WCCanvasImageLoaderObserver, WCCanvasClickEventManagerDelegate>
{
    BOOL _dynamicButtonSize; // +0x8
    WCHighLightButton * _button; // +0x10
    WCAdURLImageView * _bgImgView; // +0x18
    UILongPressGestureRecognizer * _longpressGesture; // +0x20
    WCCanvasClickEventManager * _clickManager; // +0x28
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)onClickButton:(id)arg1;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)onButtonClickEventWithSource:(unsigned long long)arg1;
- (void)onLongpressButton:(id)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)fetchRelatedComponent;
- (void)onFinderLiveNoticeReserved;
- (BOOL)isAppointmentInfoValid;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (id)button;
- (id)bgImgView;
- (id)clickManager;
- (id)longpressGesture;
- (void)checkAndUpdateButtonState;
- (void)checkFinderLiveNoticeButtonStateWithLocal;
- (void)setButtonColors:(BOOL)arg1;
- (void)getComponentStyleWithBackgroundColor:(id *)arg1 textColor:(id *)arg2;
- (void)setComponentStyleWithBackgroundColor:(id)arg1 textColor:(id)arg2 contentSize:(CGSize)arg3;
- (void)setButtonComponentTitleColor:(id)arg1 withDuration:(double)arg2;
- (void)setButtonComponentTitleFont:(id)arg1;
- (void)setButtonImage:(id)arg1;
- (void)updateButtonImageColor;
- (void)onClickEventUpdateTitleWith:(id)arg1;
- (void)onClickEventUpdateTitleWith:(id)arg1 buttonAppearance:(BOOL)arg2 buttonEnabled:(BOOL)arg3;
- (void)tryUpdateFinderLiveNotice;
- (void)setButton:(id)arg1;
- (void)setBgImgView:(id)arg1;
- (void)setLongpressGesture:(id)arg1;
- (void)setClickManager:(id)arg1;
- (BOOL)dynamicButtonSize;
- (void)setDynamicButtonSize:(BOOL)arg1;
- (void).cxx_destruct;
@end
