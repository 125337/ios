@interface ContactPickerViewController : MMUIViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, FTSMultiContactSearchDelegate, IGroupMgrExt, NewContactsSearchPanelViewDelegate, MMTableViewDelegate>
{
    NewContactsSearchPanelView * _panelView; // +0x70
    MMTableView * _defaultTableView; // +0x78
    NSDictionary * _dicPreSelectedContact; // +0x80
    NSMutableArray * _arrMultiResultWrap; // +0x88
    NSMutableArray * _arrSectionTitles; // +0x90
    FTSMultiContactSearchLogic * _multiSearchLogic; // +0x98
    unsigned long long _expandBitSet; // +0xa0
    NSMutableArray * m_arrNeedVerifyUsrName; // +0xa8
    WCSTokenPickLogic * _tokenPickLogic; // +0xb0
    id <ContactPickerViewDelegate> _delegate; // +0xb8
    unsigned long long _scene; // +0xc0
}
- (id)initWithKeywords:(id)arg1 andSelectedContact:(id)arg2;
- (id)initWithQuery:(id)arg1;
- (void)initSearchLogic:(id)arg1;
- (void)initSectionTitles:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initNavBar;
- (BOOL)isSelected:(id)arg1;
- (id)getCellImage:(id)arg1;
- (id)getCellImageForStatus:(BOOL)arg1 enable:(BOOL)arg2;
- (void)initView;
- (void)initPanelView;
- (void)initThisTableView;
- (void)setCell:(id)arg1 enable:(BOOL)arg2 selected:(BOOL)arg3;
- (BOOL)isMoreCellAtIndexPath:(id)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
- (BOOL)isSelectedContact:(id)arg1;
- (void)updateNavigationItem;
- (void)setNavigationBarItemEnable:(BOOL)arg1;
- (void)tryReorderContactAtSection:(long long)arg1;
- (void)tryDeselectOtherContactForIndexPath:(id)arg1;
- (void)updateTokenLogic;
- (void)startLoading;
- (void)makeCell:(id)arg1 contact:(id)arg2 matchTip:(id)arg3 clickable:(BOOL)arg4;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)onSelectContact:(id)arg1 forIndexPath:(id)arg2 searchMode:(BOOL)arg3;
- (void)onDeselectContact:(id)arg1 forIndexPath:(id)arg2 searchMode:(BOOL)arg3;
- (id)genMemerList;
- (void)createChatRoom;
- (id)getErrorContactName:(id)arg1;
- (id)genErrorString:(id)arg1 needVerify:(BOOL *)arg2;
- (void)onCancel:(id)arg1;
- (void)onMultiDone:(id)arg1;
- (void)onContactResultUpdated:(id)arg1;
- (void)onRecommendResultUpdated:(id)arg1;
- (void)multiResultKVReport;
- (void)OnCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (void)removeSelectedContactForUsrname:(id)arg1;
- (void)removePickDataForUsername:(id)arg1;
- (unsigned long long)maxSupportedSectionCount;
- (BOOL)shouldDisplayMoreCellInSection:(long long)arg1;
- (BOOL)isExpandingForSection:(long long)arg1;
- (void)setExpandStatus:(BOOL)arg1 forSection:(long long)arg2;
- (void)mmTableView:(id)arg1 dragTriggerNotifyWithOffset:(double)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)cancelSearch;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (BOOL)isRecommendGroupSection:(long long)arg1;
- (BOOL)isRecommendContactSection:(long long)arg1;
- (void)pickDataSelected:(id)arg1 indexPath:(id)arg2;
- (void)pickDataDeSelected:(id)arg1 indexPath:(id)arg2;
- (void)updateDefaultQuery;
- (void)asyncRecommend;
- (void)openMessageContentView:(id)arg1;
- (void)reportRecommendInfo:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
