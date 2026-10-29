@interface WCChatLogManageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, StorageDeleteInfoCellDelegate, MessagePageSheetAdapterDelegate, WCFilterViewDelegate, StorageFootPanelViewDelegate, IChatLogDataMgrExt>
{
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> m_sessionItemArray; // +0x68
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> m_selectedSessionArray; // +0x80
    unsigned int _eFilterStartTime; // +0x98
    unsigned int _eFilterEndTime; // +0x9c
    WCFilterView * _filterView; // +0xa0
    MMTableView * _mainTableView; // +0xa8
    MMUILabel * _emptyTipLabel; // +0xb0
    MMUILabel * _middleLoadLabel; // +0xb8
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0xc0
    StorageFootPanelView * _footPanelView; // +0xc8
    long long _currentTime; // +0xd0
    unsigned long long _eOrderType; // +0xd8
    NSDate * _minSelectDate; // +0xe0
    NSDate * _maxSelectDate; // +0xe8
    NSDate * _selectBeginDate; // +0xf0
    NSDate * _selectEndDate; // +0xf8
    unsigned long long _lastSelectTimeType; // +0x100
    unsigned long long _curSelectType; // +0x108
}
+ (id)getDateWithoutHMS:(id)arg1;
- (CGRect)getTableViewFrame;
- (void)makeTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned long long)p_getCurrentSesionItemResSize:(const void *)arg1;
- (void)onDeleteinfoCellShowSourceImg:(id)arg1;
- (void)onDeleteInfoCellShowDetail:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)onMsgPageSheetShowHideMoreOption;
- (void)makeFilterView;
- (id)p_getTimeSection;
- (id)p_getFilterSection;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (void)onSelectionPanelDismissed:(id)arg1;
- (id)getCurrentViewController;
- (void)makeFootPanelView;
- (id)getFootPanelSelectButtonTitle;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelLabelText;
- (id)getFootPanelSizeText;
- (void)onFootPanelSelectButtonClick;
- (void)onFootPanelDeleteButtonClick;
- (BOOL)isFootPanelRelateDataLoading;
- (BOOL)isFootPanelRelateDataSelectEmpty;
- (void)deleteResourceAndKeepMsg;
- (void)deleteSelectedSessionAllIncludeMsg;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)makeEmptyTipLabel;
- (void)updateView;
- (void)onReturn;
- (unsigned long long)getSelectedOnlyResourceSize;
- (unsigned long long)getSeletedDataSize;
- (BOOL)isDataEmpty;
- (void)initData;
- (void)p_fillingData;
- (void)reinitData;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (void)willMoveToParentViewController:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
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
- (void).cxx_destruct;
- (id).cxx_construct;
@end

