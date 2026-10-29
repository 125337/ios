@interface MMAcceptAgreementBaseViewController : MMUIViewController <MMTableViewInfoDelegate>
{
    MMUIActivityIndicatorView * m_buttonLoadingView; // +0x70
    BOOL _navigationActionButtonWasHidden; // +0x78
    MMTableViewInfo * _m_tableViewInfo; // +0x80
    MMTableView * _m_tableView; // +0x88
    MMAcceptAgreementCommonHeadView * _m_commonHeadView; // +0x90
    UIColor * _m_navigationBarColor; // +0x98
    UIButton * _navigationActionButton; // +0xa0
    UIBarButtonItem * _actionButtonNavigationItem; // +0xa8
    NSArray * _savedRightBarButtonItems; // +0xb0
}
- (id)init;
- (void)initTableView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)reloadTableData;
- (id)genActionButton;
- (id)genWeakActionButton;
- (void)updateActionButton:(id)arg1 showInNavigationBar:(BOOL)arg2;
- (void)onNavigationActionButton;
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
- (id)navigationActionButton;
- (void)setNavigationActionButton:(id)arg1;
- (id)actionButtonNavigationItem;
- (void)setActionButtonNavigationItem:(id)arg1;
- (id)savedRightBarButtonItems;
- (void)setSavedRightBarButtonItems:(id)arg1;
- (BOOL)navigationActionButtonWasHidden;
- (void)setNavigationActionButtonWasHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
