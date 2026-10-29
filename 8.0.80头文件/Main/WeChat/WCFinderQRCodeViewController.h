@interface WCFinderQRCodeViewController : MMUIViewController <WCFinderQRCodeCgiDelegate>
{
    UIView * _cardView; // +0x70
    MMWebImageView * _avatar; // +0x78
    UILabel * _nameLabel; // +0x80
    UILabel * _descLabel; // +0x88
    WCFinderAuthInfoIconView * _icon; // +0x90
    UIImageView * _qrcodeView; // +0x98
    UILabel * _tipsLabel; // +0xa0
    UIButton * _saveQRCodeButton; // +0xa8
    WCFinderQCCodeNameCardViewModel * _viewModel; // +0xb0
    FinderQRCodeResponse * _qrcodeResponse; // +0xb8
}
- (id)initWithContact:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)didTapSaveQRCodeButton;
- (id)cardView;
- (id)avatar;
- (id)nameLabel;
- (id)descLabel;
- (id)icon;
- (id)qrcodeView;
- (id)tipsLabel;
- (id)saveQRCodeButton;
- (void)qrcodeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qrcodeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)registerYReportSdk;
- (void)setCardView:(id)arg1;
- (void)setAvatar:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setQrcodeView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setSaveQRCodeButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)qrcodeResponse;
- (void)setQrcodeResponse:(id)arg1;
- (void).cxx_destruct;
@end
