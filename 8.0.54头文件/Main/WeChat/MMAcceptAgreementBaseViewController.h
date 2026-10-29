@interface MMAcceptAgreementBaseViewController : MMUIViewController <MMTableViewInfoDelegate>
{
    MMUIActivityIndicatorView * m_buttonLoadingView; // +0x68
    MMTableViewInfo * _m_tableViewInfo; // +0x70
    MMTableView * _m_tableView; // +0x78
    MMAcceptAgreementCommonHeadView * _m_commonHeadView; // +0x80
    UIColor * _m_navigationBarColor; // +0x88
}
- (id)init;
- (void)initTableView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)reloadTableData;
- (id)genActionButton;
- (id)genWeakActionButton;
- (void)buttonStartLoading:(id)arg1;
- (void)buttonStopLoading:(id)arg1 buttonTitle:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadFootViewWithTableContentHeight:(double)arg1 operateButton:(id)arg2;
- (id)navigationBarBackgroundColor;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_navigationBarColor;
- (void)setM_navigationBarColor:(id)arg1;
- (void).cxx_destruct;
@end

