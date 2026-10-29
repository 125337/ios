@interface WAWebviewBottomBannerView : UIView
{
    WAWebViewBottomBannerViewModel * _viewModel; // +0x8
    id <WAWebviewBottomBannerViewDelegate> _delegate; // +0x10
    MMWebImageView * _iconImgView; // +0x18
    UIView * _mmHeadImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _titleTailLabel; // +0x30
    UIImageView * _originalIcon; // +0x38
    UIImageView * _leftCornerImgView; // +0x40
    UIImageView * _rightCornerImgView; // +0x48
    NSArray * _buttons; // +0x50
    WCTagsView * _tagsView; // +0x58
    WAWebviewHighlightedBottomBannerView * _highlightedBannerView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)reloadData;
- (void)highlightBannerView:(BOOL)arg1;
- (void)generateButtons;
- (void)onButtonClicked:(id)arg1;
- (void)onHighlightedBottomBannerViewClicked;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)titleTailLabel;
- (id)tagsView;
- (id)titleLabel;
- (id)originalIcon;
- (id)leftCornerImgView;
- (id)rightCornerImgView;
- (id)highlightedBannerView;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)mmHeadImageView;
- (void)setMmHeadImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleTailLabel:(id)arg1;
- (void)setOriginalIcon:(id)arg1;
- (void)setLeftCornerImgView:(id)arg1;
- (void)setRightCornerImgView:(id)arg1;
- (id)buttons;
- (void)setButtons:(id)arg1;
- (void)setTagsView:(id)arg1;
- (void)setHighlightedBannerView:(id)arg1;
- (void).cxx_destruct;
@end
