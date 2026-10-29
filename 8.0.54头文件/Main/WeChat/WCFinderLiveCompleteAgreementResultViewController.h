@interface WCFinderLiveCompleteAgreementResultViewController : MMAcceptAgreementBaseViewController <MMAcceptAgreementCommonHeadViewDelegate>
{
    UIButton * m_actionBtn; // +0x68
    NSString * m_headTitle; // +0x70
    NSString * m_headContent; // +0x78
    NSString * m_headContentWithLink; // +0x80
    BOOL m_isWeakActionBtn; // +0x88
    UIImage * m_logoSVGImage; // +0x90
    NSString * m_actionBtnStr; // +0x98
    FinderJumpInfo * _extJumpAction; // +0xa0
    id <WCFinderLiveCompleteAgreementResultViewControllerDelegate> _m_delegate; // +0xa8
    MMFinderLiveTaskId * _liveTaskId; // +0xb0
    UIView * _backgroundView; // +0xb8
    UIButton * _extJumpActionButton; // +0xc0
}
- (id)initWithHeadTitle:(id)arg1 headContent:(id)arg2 liveTaskId:(id)arg3;
- (id)initWithHeadTitle:(id)arg1 headContentWithLink:(id)arg2 liveTaskId:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)createAndLayoutActionButtons;
- (void)createActionBtnsIfNeed;
- (void)layoutActionButtons;
- (BOOL)shouldShowExtJumpActinoButton;
- (void)doExtJumpAction;
- (void)layoutCommonHeadView;
- (void)doAction;
- (void)onHeadContentLinkClicked:(id)arg1;
- (void)setupBlurBackground;
- (BOOL)useTransparentNavibar;
- (id)liveTask;
- (id)m_logoSVGImage;
- (void)setM_logoSVGImage:(id)arg1;
- (id)m_actionBtnStr;
- (void)setM_actionBtnStr:(id)arg1;
- (BOOL)m_isWeakActionBtn;
- (void)setM_isWeakActionBtn:(BOOL)arg1;
- (id)extJumpAction;
- (void)setExtJumpAction:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)liveTaskId;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)extJumpActionButton;
- (void)setExtJumpActionButton:(id)arg1;
- (void).cxx_destruct;
@end

