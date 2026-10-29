@interface MMAcceptAgreementResultViewController : MMAcceptAgreementBaseViewController <MMAcceptAgreementCommonHeadViewDelegate>
{
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x70
    UIButton * m_actionBtn; // +0x78
    MMUILabel * m_customerServiceLabel; // +0x80
    NSString * m_headTitle; // +0x88
    NSString * m_headContent; // +0x90
    NSString * m_headContentWithLink; // +0x98
    BOOL m_isWeakActionBtn; // +0xa0
    BOOL _m_isShowLeftCloseBarButton; // +0xa1
    BOOL _m_isShowLeftBackBarButton; // +0xa2
    BOOL _m_bHiddenOperateButton; // +0xa3
    BOOL _forceDisplay; // +0xa4
    UIImage * m_logoSVGImage; // +0xa8
    NSString * m_actionBtnStr; // +0xb0
    id /* block */ _m_resultActionBlock; // +0xb8
    id <MMAcceptAgreementResultViewControllerDelegate> _m_delegate; // +0xc0
}
- (id)initWithHeadTitle:(id)arg1 headContent:(id)arg2;
- (id)initWithHeadTitle:(id)arg1 headContentWithLink:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutActionBtn;
- (void)layoutCustomerServiceLabel;
- (void)onCustomerServiceLabelTapped;
- (void)doAction;
- (void)onHeadContentLinkClicked:(id)arg1;
- (id)m_logoSVGImage;
- (void)setM_logoSVGImage:(id)arg1;
- (id)m_actionBtnStr;
- (void)setM_actionBtnStr:(id)arg1;
- (BOOL)m_isWeakActionBtn;
- (void)setM_isWeakActionBtn:(BOOL)arg1;
- (BOOL)m_isShowLeftCloseBarButton;
- (void)setM_isShowLeftCloseBarButton:(BOOL)arg1;
- (BOOL)m_isShowLeftBackBarButton;
- (void)setM_isShowLeftBackBarButton:(BOOL)arg1;
- (BOOL)m_bHiddenOperateButton;
- (void)setM_bHiddenOperateButton:(BOOL)arg1;
- (BOOL)forceDisplay;
- (void)setForceDisplay:(BOOL)arg1;
- (id /* block */)m_resultActionBlock;
- (void)setM_resultActionBlock:(id /* block */)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
