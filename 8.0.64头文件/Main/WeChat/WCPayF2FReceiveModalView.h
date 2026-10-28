@interface WCPayF2FReceiveModalView : UIView <WCPayWebImageViewDelegate>
{
    id <WCPayF2FReceiveModalViewDelegate> _delegate; // +0x8
    WCPayF2FReceiveModalViewData * _viewModel; // +0x10
    UIView * _backgroundView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _qrcodeImageView; // +0x28
    UIButton * _closeBtn; // +0x30
    UIButton * _confirmBtn; // +0x38
    UIView * _seperateLine; // +0x40
    UIView * _receviewContentView; // +0x48
    UIView * _containerView; // +0x50
    UIView * _headerView; // +0x58
    WCPayWebImageView * _headImageView; // +0x60
    UILabel * _tipsLabel; // +0x68
    UILabel * _valueLabel; // +0x70
    UIImageView * _qrcodeImage; // +0x78
}
- (id)initWithViewData:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapCloseBtn;
- (void)onTapConfirmBtn;
- (id)getQrcodeImageView;
- (id)genQrCodeImage;
- (id)imageFromView:(id)arg1;
- (void)showInView;
- (void)dissmissView;
- (void)handleTap:(id)arg1;
- (id)headerImageWithPayIcon;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)qrcodeImageView;
- (void)setQrcodeImageView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg1;
- (id)receviewContentView;
- (void)setReceviewContentView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)qrcodeImage;
- (void)setQrcodeImage:(id)arg1;
- (void).cxx_destruct;
@end
