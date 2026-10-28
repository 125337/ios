@interface ShakeCombineListViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ShakeMgrExt>
{
    MMTableView * m_tableView; // +0x70
    NSMutableDictionary * m_userHeaderImageCache; // +0x78
    id <ShakeListDelegate> m_delegate; // +0x80
    unsigned int m_shakeListViewType; // +0x88
    NSMutableArray * m_tableRows; // +0x90
    UILabel * _tipsLabel; // +0x98
}
- (void)setM_Delegate:(id)arg1;
- (void)clearListData;
- (void)onClickClearHistory;
- (void)onReturn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnReturn;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)viewDidLoad;
- (id)getCachedHeaderImageForUser:(id)arg1 imgUrl:(id)arg2;
- (void)showNoResultTips:(id)arg1;
- (void)reloadTableViewData;
- (void)loadDataFromStorage;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)makeShakePeopleCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)makeShakeMusicCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)makeShakeTvCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)isInMyContactList:(id)arg1;
- (void)onSelectedContactInfo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)m_userHeaderImageCache;
- (void)setM_userHeaderImageCache:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
