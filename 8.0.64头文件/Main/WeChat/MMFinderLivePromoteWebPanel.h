@interface MMFinderLivePromoteWebPanel : MMPageSheetBaseView <MMWebViewPresetUIChildViewDelegate>
{
    NSString * _adapterUrl; // +0x8
    MMWebViewController * _webVC; // +0x10
    MMFinderLiveWebPageSheetParams * _params; // +0x18
    double _contentHeight; // +0x20
    UIView * _contentView; // +0x28
    MMUIButton * _closeButton; // +0x30
}
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (void)updatePromoteWebPanelWithUrl:(id)arg1 contentViewHeight:(double)arg2;
- (id)parentNavigationItemWithWebview:(id)arg1;
- (id)webVC;
- (void)setContentHeight:(double)arg1;
- (void)createUI;
- (void)layoutUI;
- (id)contentView;
- (void)setupPageSheetConfig;
- (id)closeButton;
- (void)leftButtonAction;
- (id)adapterUrl;
- (void)setAdapterUrl:(id)arg1;
- (void)setWebVC:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (double)contentHeight;
- (void)setContentView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
