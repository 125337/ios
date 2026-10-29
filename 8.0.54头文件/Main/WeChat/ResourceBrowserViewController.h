@interface ResourceBrowserViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFilterViewDelegate, IChatLogDataMgrExt>
{
    UIView * _footerView; // +0x68
    UIButton * _selectAllButton; // +0x70
    UIButton * _deleteButton; // +0x78
    UILabel * _sizeLabel; // +0x80
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0x88
    BOOL _hasLookDetailed; // +0x90
    NSMutableArray * m_arrSectionTitle; // +0x98
    map<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>, CompareNSString, std::allocator<std::pair<NSString *const, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> m_dicMsgsByTitle; // +0xa0
    map<std::shared_ptr<ChatLogSessionItem>, long, std::less<std::shared_ptr<ChatLogSessionItem>>, std::allocator<std::pair<const std::shared_ptr<ChatLogSessionItem>, long>>> m_dicFindItem; // +0xb8
    unsigned int _curMaxDataCount; // +0xd0
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSelectedData; // +0xd8
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSessionTypeItem; // +0xf0
    map<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>, std::less<NSString *>, std::allocator<std::pair<NSString *const, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> m_dicSessionByTitle; // +0x108
    unsigned int _eFilterTime; // +0x120
    unsigned long long _maxChatLogSize; // +0x128
    unsigned long long _maxChatLogDBSize; // +0x130
    long long _baseNowTime; // +0x138
    unsigned long long _eFilterType; // +0x140
    unsigned long long _eOrderType; // +0x148
    MMTableView * _mainTableView; // +0x150
    UILabel * _emptyTipLabel; // +0x158
    WCFilterView * _filterView; // +0x160
    UIView * _seperateLine; // +0x168
    double _startLoadCleanData; // +0x170
    NSDate * _minDate; // +0x178
    NSDate * _maxDate; // +0x180
    NSDate * _selectBeginDate; // +0x188
    NSDate * _selectEndDate; // +0x190
    unsigned long long _lastSelectTimeIndex; // +0x198
    unsigned long long _lastHeaderIndex; // +0x1a0
}
+ (id)getDateWithoutHMS:(id)arg1;
- (BOOL)isForbidPageSheet;
- (void)onReturn;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didAppear;
- (CGRect)getTableViewFrame;
- (void)initView;
- (void)makeFilterView;
- (void)makeTableView;
- (void)makeEmptyTipLabel;
- (void)makeFooterPanelView;
- (void)updateMainView;
- (void)updateFooterPannelView;
- (BOOL)isDataEmpty;
- (void)initData;
- (void)reInitData;
- (void)p_filterSessionItem;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSelecteAll;
- (void)onDeleteSelectedData:(id)arg1;
- (void)deleteSelectedSessionKeepMsg;
- (void)deleteSelectedSessionAllData;
- (void)onAlertNothingDetail:(id)arg1;
- (void)onLookDetail:(id)arg1;
- (id)getSelectButtonTitle;
- (id)userNameDescriptionFor:(const void *)arg1;
- (unsigned long long)getSessionsItemDataSize:(const void *)arg1;
- (unsigned long long)getSessionsItemAllDataSize:(const void *)arg1;
- (unsigned long long)getDataItemsDataSize:(const void *)arg1;
- (void)onSelectedDataChange;
- (id)genTimeStringForSectionHeader:(unsigned int)arg1;
- (void)reportSessionData;
- (void)reportNewTopSession;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (id)p_getTimeSection;
- (id)p_getFilterSection;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (void)onSelectionPanelDismissed:(id)arg1;
- (id)getCurrentViewController;
- (unsigned long long)maxChatLogSize;
- (void)setMaxChatLogSize:(unsigned long long)arg1;
- (unsigned long long)maxChatLogDBSize;
- (void)setMaxChatLogDBSize:(unsigned long long)arg1;
- (long long)baseNowTime;
- (void)setBaseNowTime:(long long)arg1;
- (unsigned long long)eFilterType;
- (void)setEFilterType:(unsigned long long)arg1;
- (unsigned long long)eOrderType;
- (void)setEOrderType:(unsigned long long)arg1;
- (unsigned int)eFilterTime;
- (void)setEFilterTime:(unsigned int)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)emptyTipLabel;
- (void)setEmptyTipLabel:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg1;
- (double)startLoadCleanData;
- (void)setStartLoadCleanData:(double)arg1;
- (id)minDate;
- (void)setMinDate:(id)arg1;
- (id)maxDate;
- (void)setMaxDate:(id)arg1;
- (id)selectBeginDate;
- (void)setSelectBeginDate:(id)arg1;
- (id)selectEndDate;
- (void)setSelectEndDate:(id)arg1;
- (unsigned long long)lastSelectTimeIndex;
- (void)setLastSelectTimeIndex:(unsigned long long)arg1;
- (unsigned long long)lastHeaderIndex;
- (void)setLastHeaderIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

