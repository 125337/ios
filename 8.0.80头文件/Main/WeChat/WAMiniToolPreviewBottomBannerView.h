@interface WAMiniToolPreviewBottomBannerView : WAWebviewBottomBannerView
{
    id <WAMiniToolPreviewBottomBannerViewDelegate> _miniToolDelegate; // +0x8
    NSString * _bannerTitle; // +0x10
    NSString * _buttonTitle; // +0x18
    UILabel * _previewTitleLabel; // +0x20
    UIButton * _addButton; // +0x28
}
- (void)initSubviews;
- (void)layoutSubviews;
- (void)reloadData;
- (void)highlightBannerView:(BOOL)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)onAddBtnClicked;
- (id)miniToolDelegate;
- (void)setMiniToolDelegate:(id)arg1;
- (id)bannerTitle;
- (id)buttonTitle;
- (id)previewTitleLabel;
- (void)setPreviewTitleLabel:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (void).cxx_destruct;
@end
