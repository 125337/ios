@interface WCPayECardDetailViewController : WCPayBaseViewController <WCPayQryCancelECardDescCgiDelegate>
{
    id <WCPayECardDetailViewControllerDelegate> _delegate; // +0x90
    WCPayQryCancelECardDescCgi * _descCgi; // +0x98
    QryCancelECardDescRes * _descResponse; // +0xa0
    UIButton * _footerButton; // +0xa8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadView;
- (void)setupFooterButton;
- (id)dotsAndLabelsWithWidth:(double)arg1 titles:(id)arg2;
- (id)createDotLabel;
- (void)requestData;
- (void)close;
- (void)clickfooterButton;
- (void)qryCancelECardDescCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryCancelECardDescCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)descCgi;
- (void)setDescCgi:(id)arg1;
- (id)descResponse;
- (void)setDescResponse:(id)arg1;
- (id)footerButton;
- (void)setFooterButton:(id)arg1;
- (void).cxx_destruct;
@end

