@interface WCChatLogManageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, StorageDeleteInfoCellDelegate, MessagePageSheetAdapterDelegate, WCFilterViewDelegate, StorageFilterViewDelegate, StorageFootPanelViewDelegate, IChatLogDataMgrExt>
{
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> m_sessionItemArray; // +0x70
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> m_selectedSessionArray; // +0x88
    BOOL _bUserAllSelect; // +0xa0
    BOOL _timeFilterChanged; // +0xa1
    BOOL _curOnlyInSys; // +0xa2
    unsigned int _eFilterStartTime; // +0xa4
    unsigned int _eFilterEndTime; // +0xa8
    unsigned long long _scene; // +0xb0
    NSMutableArray * _lastSelectChatLogInfo; // +0xb8
    NSString * _filterReportSortSession; // +0xc0
    NSString * _filterReportFilterSession; // +0xc8
    NSMutableDictionary * _filterReportUserSessions; // +0xd0
    WCFilterView * _filterView; // +0xd8
    StorageFilterView * _filterView2; // +0xe0
    MMTableView * _mainTableView; // +0xe8
    MMUILabel * _emptyTipLabel; // +0xf0
    MMUILabel * _middleLoadLabel; // +0xf8
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0x100
    StorageFootPanelView * _footPanelView; // +0x108
    long long _currentTime; // +0x110
    unsigned long long _eOrderType; // +0x118
    NSDate * _minSelectDate; // +0x120
    NSDate * _maxSelectDate; // +0x128
    NSDate * _selectBeginDate; // +0x130
    NSDate * _selectEndDate; // +0x138
    unsigned long long _lastSelectTimeType; // +0x140
    unsigned long long _curSelectType; // +0x148
    unsigned long long _curSourceType; // +0x150
    unsigned long long _curChatType; // +0x158
    unsigned long long _viewType; // +0x160
    unsigned long long _selectViewType; // +0x168
    id /* block */ _afterManageCompletion; // +0x170
    NSMutableDictionary * _selectedMapChatLogInfo; // +0x178
    NSString * _filterReportSession; // +0x180
}
+ (id)getDateWithoutHMS:(id)arg1;
- (CGRect)getTableViewFrame;
- (void)makeTableViewInFrame:(CGRect)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned long long)p_getTotalSelectedSize:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned long long)p_getCurrentSesionItemResSize:(const void *)arg1;
- (void)onDeleteinfoCellShowSourceImg:(id)arg1;
- (id)p_getChatLogInfoFromDataItem:(void *)arg1 username:(id)arg2;
- (void)onDeleteInfoCellShowDetail:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned int)getMsgPageSheetMoreOptionMask;
- (void)makeFilterView;
- (id)p_getTimeSection;
- (id)p_getFilterSection;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (void)onSelectionPanelDismissed:(id)arg1;
- (id)getCurrentViewController;
- (BOOL)onFilterItemClicked:(long long)arg1 group:(long long)arg2;
- (void)onFilterUpdate:(id)arg1;
- (void)onFilterShownOrHidden:(int)arg1 isSort:(BOOL)arg2 selected:(id)arg3;
- (int)removePageScene;
- (void)makeFootPanelView;
- (id)getFootPanelSelectButtonTitle;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelLabelText;
- (id)getFootPanelSizeText;
- (void)onFootPanelSelectButtonClick;
- (void)onFootPanelDeleteButtonClick;
- (void)onFootPanelSelectAllButtonClick;
- (BOOL)isFootPanelRelateDataSelectAll;
- (BOOL)isFootPanelRelateDataLoading;
- (BOOL)isFootPanelRelateDataSelectEmpty;
- (void)deleteResourceAndKeepMsg;
- (void)deleteSelectedSessionAllIncludeMsg;
- (id)init;
- (id)initWithChatlogViewType:(unsigned long long)arg1 withTitle:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)makeEmptyTipLabel:(double)arg1;
- (void)updateView;
- (void)onReturn;
- (unsigned long long)getSelectedOnlyResourceSize;
- (unsigned long long)getSelectedAllDataSize;
- (unsigned long long)getSeletedSizeWithOtherData:(BOOL)arg1;
- (BOOL)isDataEmpty;
- (void)initData;
- (void)p_fillingData;
- (void)reinitData;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (void)willMoveToParentViewController:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)lastSelectChatLogInfo;
- (void)setLastSelectChatLogInfo:(id)arg1;
- (BOOL)bUserAllSelect;
- (void)setBUserAllSelect:(BOOL)arg1;
- (id)filterReportSortSession;
- (void)setFilterReportSortSession:(id)arg1;
- (id)filterReportFilterSession;
- (void)setFilterReportFilterSession:(id)arg1;
- (id)filterReportUserSessions;
- (void)setFilterReportUserSessions:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (id)filterView2;
- (void)setFilterView2:(id)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)emptyTipLabel;
- (void)setEmptyTipLabel:(id)arg1;
- (id)middleLoadLabel;
- (void)setMiddleLoadLabel:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)footPanelView;
- (void)setFootPanelView:(id)arg1;
- (long long)currentTime;
- (void)setCurrentTime:(long long)arg1;
- (unsigned long long)eOrderType;
- (void)setEOrderType:(unsigned long long)arg1;
- (unsigned int)eFilterStartTime;
- (void)setEFilterStartTime:(unsigned int)arg1;
- (unsigned int)eFilterEndTime;
- (void)setEFilterEndTime:(unsigned int)arg1;
- (BOOL)timeFilterChanged;
- (void)setTimeFilterChanged:(BOOL)arg1;
- (id)minSelectDate;
- (void)setMinSelectDate:(id)arg1;
- (id)maxSelectDate;
- (void)setMaxSelectDate:(id)arg1;
- (id)selectBeginDate;
- (void)setSelectBeginDate:(id)arg1;
- (id)selectEndDate;
- (void)setSelectEndDate:(id)arg1;
- (unsigned long long)lastSelectTimeType;
- (void)setLastSelectTimeType:(unsigned long long)arg1;
- (unsigned long long)curSelectType;
- (void)setCurSelectType:(unsigned long long)arg1;
- (unsigned long long)curSourceType;
- (void)setCurSourceType:(unsigned long long)arg1;
- (unsigned long long)curChatType;
- (void)setCurChatType:(unsigned long long)arg1;
- (BOOL)curOnlyInSys;
- (void)setCurOnlyInSys:(BOOL)arg1;
- (unsigned long long)viewType;
- (void)setViewType:(unsigned long long)arg1;
- (unsigned long long)selectViewType;
- (void)setSelectViewType:(unsigned long long)arg1;
- (id /* block */)afterManageCompletion;
- (void)setAfterManageCompletion:(id /* block */)arg1;
- (id)selectedMapChatLogInfo;
- (void)setSelectedMapChatLogInfo:(id)arg1;
- (id)filterReportSession;
- (void)setFilterReportSession:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
