@interface ContactsAuthorityListViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
}
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewDidLayoutSubviews;
- (id)buildTitleAttributedWithName:(id)arg1 count:(long long)arg2 showCount:(BOOL)arg3;
- (id)makeAuthCellWithSel:(SEL)arg1 name:(id)arg2 count:(long long)arg3;
- (id)makeAuthCellWithSel:(SEL)arg1 name:(id)arg2;
- (void)reloadTableData;
- (void)showSocialBlackAuthManageView;
- (void)showSnsAuthManageView;
- (void)showFinderAuthManageView;
- (void)showWowAuthManageView;
- (void)showWeRunBlackAuthManageView;
- (void)showBlackListView;
- (void).cxx_destruct;
@end
