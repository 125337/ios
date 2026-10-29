@interface MMLiveInformViewController : MMAcceptAgreementBaseViewController
{
    BOOL _isWeakActionButton; // +0x70
    UIImage * _logoImage; // +0x78
    NSString * _headTitle; // +0x80
    NSString * _headContent; // +0x88
    NSString * _actionButtonTitle; // +0x90
    MMAcceptAgreementCommonHeadView * _commonHeadView; // +0x98
    UIButton * _actionButton; // +0xa0
}
- (id)initWithHeadTitle:(id)arg1 headContent:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutActionButton;
- (void)onClickActionButton:(id)arg1;
- (id)logoImage;
- (void)setLogoImage:(id)arg1;
- (id)headTitle;
- (void)setHeadTitle:(id)arg1;
- (id)headContent;
- (void)setHeadContent:(id)arg1;
- (id)actionButtonTitle;
- (void)setActionButtonTitle:(id)arg1;
- (BOOL)isWeakActionButton;
- (void)setIsWeakActionButton:(BOOL)arg1;
- (id)commonHeadView;
- (void)setCommonHeadView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
