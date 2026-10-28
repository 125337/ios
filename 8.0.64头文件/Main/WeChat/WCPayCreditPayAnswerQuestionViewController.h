@interface WCPayCreditPayAnswerQuestionViewController : WCPayBaseViewController <WCPayCreditPaySelectQuestionViewControllerDelegate>
{
    UIButton * m_footerButton; // +0x98
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xa0
    WCBaseTextFieldItem * m_firstQuestionItem; // +0xa8
    WCBaseTextFieldItem * m_firstAnswerTextFieldItem; // +0xb0
    WCPayQuestionSelectItem * m_firstSelectItem; // +0xb8
    WCBaseTextFieldItem * m_firstNextQuestionItem; // +0xc0
    WCBaseTextFieldItem * m_secondQuestionItem; // +0xc8
    WCBaseTextFieldItem * m_secondAnswerTextFieldItem; // +0xd0
    WCPayQuestionSelectItem * m_secondSelectItem; // +0xd8
    WCBaseTextFieldItem * m_secondNextQuestionItem; // +0xe0
    WCBizInfoGroup * m_group; // +0xe8
    id <WCPayCreditPayAnswerQuestionViewControllerDelegate> m_delegate; // +0xf0
    unsigned int m_uiQuestionIndex; // +0xf8
    WCPayCreditPayQuestionNode * m_firstQuestionNode; // +0x100
    WCPayCreditPayQuestionNode * m_secondQuestionNode; // +0x108
}
- (id)init;
- (double)getQuestionItemHeight:(id)arg1;
- (void)reloadTableView;
- (void)clickQuestionCell:(id)arg1;
- (void)clickSelectItemCell:(id)arg1;
- (void)setSelected:(id)arg1 selected:(BOOL)arg2;
- (void)setAnswer:(id)arg1 answer:(id)arg2;
- (void)WCPayCreditPaySelectQuestionViewControllerSelected:(id)arg1;
- (void)makeQuestionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeAnswerCell:(id)arg1 cellInfo:(id)arg2;
- (void)initFooterView;
- (void)reloadTextFieldItem;
- (void)initNavigationBar;
- (void)onBack;
- (void)onConfirmToBack;
- (void)initMyData;
- (void)initMyView;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (id)getCommitAnswerTips;
- (void)onNext;
- (void)onConfirmToCommit;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (BOOL)canDoNext;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void).cxx_destruct;
@end
