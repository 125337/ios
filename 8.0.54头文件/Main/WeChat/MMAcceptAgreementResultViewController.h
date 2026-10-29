@interface MMAcceptAgreementResultViewController : MMAcceptAgreementBaseViewController <MMAcceptAgreementCommonHeadViewDelegate>
{
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x68
    UIButton * m_actionBtn; // +0x70
    NSString * m_headTitle; // +0x78
    NSString * m_headContent; // +0x80
    NSString * m_headContentWithLink; // +0x88
    BOOL m_isWeakActionBtn; // +0x90
    BOOL _m_isShowLeftCloseBarButton; // +0x91
    BOOL _m_isShowLeftBackBarButton; // +0x92
    BOOL _m_bHiddenOperateButton; // +0x93
    UIImage * m_logoSVGImage; // +0x98
    NSString * m_actionBtnStr; // +0xa0
    id /* block */ _m_resultActionBlock; // +0xa8
    id <MMAcceptAgreementResultViewControllerDelegate> _m_delegate; // +0xb0
}
- (id)initWithHeadTitle:(id)arg1 headContent:(id)arg2;
- (id)initWithHeadTitle:(id)arg1 headContentWithLink:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutActionBtn;
- (void)doAction;
- (void)didClickLeftCloseBarButton;
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
- (id /* block */)m_resultActionBlock;
- (void)setM_resultActionBlock:(id /* block */)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

