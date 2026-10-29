@interface BrsBoxNotificationSettingViewController : BrandContactsViewController
{
    BOOL _needReloadData; // +0xb0
    WCTableViewNormalCellManager * _autoNotifyCellInfo; // +0xb8
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reloadIfNeeded;
- (BOOL)isContactNeedExtraFiltered:(id)arg1;
- (id)vcTitle;
- (id)bottomCountString;
- (unsigned int)searchbarScene;
- (id)webSearchSuffix;
- (id)getSearchEmptyTipsLabelText;
- (void)initNavbar;
- (void)initSearchBar;
- (void)reloadNotifySettting;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)getContactsDataScene;
- (unsigned int)getFTSSearchType;
- (unsigned long long)getAsyncSearchOption;
- (id)getContactResultKey;
- (void)onUpdateScopeGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (void)onUpdateImportantNotifyNum:(unsigned int)arg1 forUser:(id)arg2;
- (void)onUpdateAccountGlobalAutoNotify:(BOOL)arg1;
- (void)onSwitchAutoNotify:(id)arg1;
- (void)reportAutoNotifySwitchExposeIfNeeded;
- (void)reportAutoNotifySwitchClkWithIsOn:(BOOL)arg1;
- (id)contactForIndexPath:(id)arg1;
- (BOOL)needReloadData;
- (void)setNeedReloadData:(BOOL)arg1;
- (id)autoNotifyCellInfo;
- (void)setAutoNotifyCellInfo:(id)arg1;
- (void).cxx_destruct;
@end
