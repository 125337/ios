@interface WXGRoamChooseRangeExactUserViewController : MMWindowViewController <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt, NewContactsSearchPanelViewDelegate, IChatLogDataMgrExt, WCFilterViewDelegate, IRoamGuideConnectedDelegate>
{
    BOOL _isInSearchState; // +0x7c
    BOOL _hasRetried; // +0x7d
    int _pageId; // +0x80
    id <WXGRoamChooseRangeExactUserViewControllerDelegate> _delegate; // +0x88
    id /* block */ _completionBlock; // +0x90
    NSArray * _selectedNames; // +0x98
    long long _enterScene; // +0xa0
    UITableView * _sheetView; // +0xa8
    UIView * _disconnectView; // +0xb0
    UINavigationItem * _customNavigationItem; // +0xb8
    MMUINavigationBar * _customNavigationBar; // +0xc0
    NSArray * _sessionNameArr; // +0xc8
    NSMutableArray * _contactArr; // +0xd0
    NSMutableArray * _filteredContactArr; // +0xd8
    NSMutableDictionary * _chatInfosDic; // +0xe0
    NSMutableDictionary * _matchTipsDic; // +0xe8
    SearchHelpDataItem * _m_searchHelpDataItem; // +0xf0
    NSMutableSet * _selectedSet; // +0xf8
    NewContactsSearchPanelView * _m_panelView; // +0x100
    unsigned long long _totalSize; // +0x108
    UIImageView * _footerImageView; // +0x110
    UIView * _seperatorLine; // +0x118
    UIButton * _selectAllButton; // +0x120
    UIButton * _cancelSelectButton; // +0x128
    UIButton * _nextStepButton; // +0x130
    UILabel * _sizeLabel; // +0x138
    WCFilterView * _filterView; // +0x140
    MMLoadingView * _loadingView; // +0x148
    NSObject<OS_dispatch_queue> * _searchQueue; // +0x150
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
- (BOOL)isFooterTwoLine;
- (void)updateFooterPannelView;
- (id)getDataSizeShowString;
- (void)onSelecteAll;
- (void)onCancelSelectAll;
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
- (void)onChatLogCalculateBackupChatLogFilter:(id)arg1 totalSize:(unsigned long long)arg2 fullDiffDic:(id)arg3;
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
- (void)onGuideConnected;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
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
- (id)cancelSelectButton;
- (void)setCancelSelectButton:(id)arg1;
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
- (BOOL)hasRetried;
- (void)setHasRetried:(BOOL)arg1;
- (void).cxx_destruct;
@end
