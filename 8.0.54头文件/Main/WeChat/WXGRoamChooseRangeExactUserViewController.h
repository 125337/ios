@interface WXGRoamChooseRangeExactUserViewController : MMWindowViewController <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt, NewContactsSearchPanelViewDelegate, IChatLogDataMgrExt, WCFilterViewDelegate>
{
    BOOL _isInSearchState; // +0x74
    int _pageId; // +0x78
    id <WXGRoamChooseRangeExactUserViewControllerDelegate> _delegate; // +0x80
    NSArray * _selectedNames; // +0x88
    long long _enterScene; // +0x90
    UITableView * _sheetView; // +0x98
    UIView * _disconnectView; // +0xa0
    UINavigationItem * _customNavigationItem; // +0xa8
    MMUINavigationBar * _customNavigationBar; // +0xb0
    NSArray * _sessionNameArr; // +0xb8
    NSMutableArray * _contactArr; // +0xc0
    NSMutableArray * _filteredContactArr; // +0xc8
    NSMutableDictionary * _chatInfosDic; // +0xd0
    NSMutableDictionary * _matchTipsDic; // +0xd8
    SearchHelpDataItem * _m_searchHelpDataItem; // +0xe0
    NSMutableSet * _selectedSet; // +0xe8
    NewContactsSearchPanelView * _m_panelView; // +0xf0
    unsigned long long _totalSize; // +0xf8
    UIImageView * _footerImageView; // +0x100
    UIView * _seperatorLine; // +0x108
    UIButton * _selectAllButton; // +0x110
    UIButton * _nextStepButton; // +0x118
    UILabel * _sizeLabel; // +0x120
    WCFilterView * _filterView; // +0x128
    MMLoadingView * _loadingView; // +0x130
    NSObject<OS_dispatch_queue> * _searchQueue; // +0x138
}
- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (void)initDataByChatInfoDic;
- (void)initContactData;
- (void)setupNavBar;
- (void)initLoadingView;
- (void)initSheetView;
- (void)initPanelView;
- (void)initFilterView;
- (void)showDisconnectView;
- (void)updateViewHidden;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (id)getDataSizeShowString;
- (id)getSelectButtonTitle;
- (void)onSelecteAll;
- (void)onRetry;
- (void)updatePanelView:(id)arg1 animated:(BOOL)arg2;
- (double)getPanelViewWidth;
- (void)onCancel;
- (void)onCreate;
- (void)updateNavAndNextStep;
- (void)updateView;
- (void)reinitSessionData;
- (void)reinitSessionDataWith:(function<bool (const std::shared_ptr<ChatLogSessionItem> &, const std::shared_ptr<ChatLogSessionItem> &)>)arg1 needReverse:(BOOL)arg2;
- (id)getFilterSection;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)getCurrentViewController;
- (unsigned long long)getSectionType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)onChatLogCalculateBackupChatLogFilter:(id)arg1 totalSize:(unsigned long long)arg2;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (BOOL)searchTextFieldShouldBeginEditing;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (BOOL)isSelected:(id)arg1;
- (void)clearAllFiltered;
- (void)doSearch:(id)arg1;
- (void)onRoamBackupPackageServiceChooseRangeImport:(id)arg1;
- (void)onRoamBackupPackageServiceGetBackedUpChatInfos:(id)arg1;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceStartGetBackedUpChatInfos;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedNames;
- (void)setSelectedNames:(id)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)disconnectView;
- (void)setDisconnectView:(id)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)sessionNameArr;
- (void)setSessionNameArr:(id)arg1;
- (id)contactArr;
- (void)setContactArr:(id)arg1;
- (id)filteredContactArr;
- (void)setFilteredContactArr:(id)arg1;
- (id)chatInfosDic;
- (void)setChatInfosDic:(id)arg1;
- (id)matchTipsDic;
- (void)setMatchTipsDic:(id)arg1;
- (id)m_searchHelpDataItem;
- (void)setM_searchHelpDataItem:(id)arg1;
- (id)selectedSet;
- (void)setSelectedSet:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (BOOL)isInSearchState;
- (void)setIsInSearchState:(BOOL)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (id)footerImageView;
- (void)setFooterImageView:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)nextStepButton;
- (void)setNextStepButton:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)searchQueue;
- (void)setSearchQueue:(id)arg1;
- (int)pageId;
- (void)setPageId:(int)arg1;
- (void).cxx_destruct;
@end

