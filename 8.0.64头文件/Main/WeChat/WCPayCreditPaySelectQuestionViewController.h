@interface WCPayCreditPaySelectQuestionViewController : WCPayBaseViewController
{
    id <WCPayCreditPaySelectQuestionViewControllerDelegate> m_delegate; // +0x98
    long long m_uiLastSelectedQuestionID; // +0xa0
    NSMutableArray * m_aryQuestion; // +0xa8
    NSString * m_nsLastSelectedQuestionID; // +0xb0
}
- (id)initWithQuestionAry:(id)arg1 withLastSelectedQuestionID:(id)arg2;
- (void)initNavigationBar;
- (void)setDelegate:(id)arg1;
- (void)onBack;
- (double)getQuestionItemHeight:(id)arg1;
- (void)initTableView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickCell:(id)arg1 indexPath:(id)arg2;
- (void)viewDidLoad;
- (id)m_nsLastSelectedQuestionID;
- (void)setM_nsLastSelectedQuestionID:(id)arg1;
- (void).cxx_destruct;
@end
