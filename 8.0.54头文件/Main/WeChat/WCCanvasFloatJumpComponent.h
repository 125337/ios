@interface WCCanvasFloatJumpComponent : WCCanvasComponent
{
    MMUILabel * _titleView; // +0x8
    MMUIImageView * _iconView; // +0x10
    WCCanvasComponent * _buttonComponent; // +0x18
    long long _jumpCount; // +0x20
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (void)initViews;
- (void)initButtonComponent;
- (void)initTitleView;
- (void)initBgButton;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)buttonComponent;
- (void)setButtonComponent:(id)arg1;
- (long long)jumpCount;
- (void)setJumpCount:(long long)arg1;
- (void).cxx_destruct;
@end

