@interface MMFinderScreenRecordWebTipView : MMPageSheetBaseView <MMWebViewDelegate>
{
    UIView * _contentView; // +0x8
    MMWebViewController * _webViewController; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initWebView;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (id)contentView;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (void)setContentView:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void).cxx_destruct;
@end
