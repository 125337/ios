@interface MMExptHitToolsViewController : MMUIViewController
{
    unsigned int m_selectedExptId; // +0x70
    WCBaseTextFieldItem * m_inputExptId; // +0x78
    UITextView * stepOneTv; // +0x80
    UITextView * stepTwoTv; // +0x88
    UITextView * stepThreeTv; // +0x90
    UITextView * exptInfoTv; // +0x98
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)initView;
- (id)genHeaderView;
- (id)genStepView;
- (void)resetUI:(unsigned int)arg1;
- (void)onClickReqBtn:(id)arg1;
- (void)onClickConfirm:(id)arg1;
- (void)onClickTryHitBtn:(id)arg1;
- (void)checkExptHit:(unsigned int)arg1;
- (id)getExptItem:(id)arg1;
- (void)showToast:(id)arg1;
- (void).cxx_destruct;
@end
