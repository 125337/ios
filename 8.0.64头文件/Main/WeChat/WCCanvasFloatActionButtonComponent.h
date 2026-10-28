@interface WCCanvasFloatActionButtonComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    UIImageView * _iconView; // +0x8
    RichTextView * _titleView; // +0x10
    RichTextView * _descView; // +0x18
    UIImageView * _backgroundImgView; // +0x20
    UIVisualEffectView * _backgroundBlurView; // +0x28
    WCCanvasComponent * _buttonComponent; // +0x30
    double _appearPaddingTop; // +0x38
    double _appearPaddingBottom; // +0x40
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (void)initViews;
- (void)initBackgroundStyle;
- (void)initButtonComponent;
- (void)initIconView;
- (void)initTitleView;
- (void)initDescView;
- (id)createTextViewWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4;
- (double)fetchMaxWidthForContent;
- (void)initFullViewBtn;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)updateContentsLayout;
- (void)loadIconResource;
- (void)initBackgroundImgWithUrl;
- (void)loadBackgroundImgResource;
- (void)initBackgroundWithBlurEffect;
- (id)fetchComponentColorFor:(unsigned long long)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (id)backgroundImgView;
- (void)setBackgroundImgView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)buttonComponent;
- (void)setButtonComponent:(id)arg1;
- (double)appearPaddingTop;
- (void)setAppearPaddingTop:(double)arg1;
- (double)appearPaddingBottom;
- (void)setAppearPaddingBottom:(double)arg1;
- (void).cxx_destruct;
@end
