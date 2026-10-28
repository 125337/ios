@interface TemplateSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TemplateSessionMgrExt, TemplateMsgSearchHelperDelegate, BrandSessionMgrExt>
{
    MMTableView * m_tableView; // +0x70
    CBaseContact * _templateContact; // +0x78
    TemplateMsgSearchHelper * _searchHelper; // +0x80
}
- (id)init;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)onNavBackBarButtonClicked;
- (BOOL)shouldInteractivePop;
- (void)onSettingButton:(id)arg1;
- (void)initTableView;
- (void)initMsgSearchHelper;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)onTemplateSessionUpdate;
- (void)msgSearchBarActive;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (id)templateContact;
- (void)setTemplateContact:(id)arg1;
- (id)searchHelper;
- (void)setSearchHelper:(id)arg1;
- (void).cxx_destruct;
@end
