@interface WCCanvasFloatConversionBarComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    WCCanvasComponent * _buttonComponent; // +0x8
    UIImageView * _backgroundContentView; // +0x10
    UIVisualEffectView * _backgroundBlurView; // +0x18
    UIImageView * _iconView; // +0x20
    MMUILabel * _titleView; // +0x28
    MMUILabel * _descView; // +0x30
    unsigned long long _showingAnimationStage; // +0x38
    UIColor * _buttonOriBackgroundColor; // +0x40
    UIColor * _buttonOriTextColor; // +0x48
    CGRect _buttonOriFrame; // +0x50
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)generateContentViews;
- (void)updateContentViewsLayout;
- (void)prepareForAnimation;
- (id)buttonComponent;
- (id)backgroundContentView;
- (id)backgroundBlurView;
- (id)iconView;
- (id)titleView;
- (id)descView;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (unsigned long long)fetchComponentInitAnimationStage;
- (void)showComponentInitAnimation;
- (void)showComponentAnimationHold1;
- (void)showComponentAnimationStage2;
- (void)showComponentAnimationHold2;
- (void)showComponentAnimationStage3;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)loadImageForUrl:(id)arg1;
- (double)fetchMaxWidthForContent;
- (void)setButtonComponent:(id)arg1;
- (void)setBackgroundContentView:(id)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (unsigned long long)showingAnimationStage;
- (void)setShowingAnimationStage:(unsigned long long)arg1;
- (CGRect)buttonOriFrame;
- (void)setButtonOriFrame:(CGRect)arg1;
- (id)buttonOriBackgroundColor;
- (void)setButtonOriBackgroundColor:(id)arg1;
- (id)buttonOriTextColor;
- (void)setButtonOriTextColor:(id)arg1;
- (void).cxx_destruct;
@end

