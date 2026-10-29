@interface StorageCacheClassViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, StorageFootPanelViewDelegate, IChatLogDataMgrExt>
{
    unsigned long long _scene; // +0x70
    NSMutableArray * _dataArray; // +0x78
    MMTableView * _tableView; // +0x80
    StorageFootPanelView * _storageFooterPannelView; // +0x88
    UIView * _footerView; // +0x90
    UIButton * _selectAllButton; // +0x98
    UIButton * _deleteButton; // +0xa0
    UILabel * _sizeLabel; // +0xa8
    UILabel * _emptyLabel; // +0xb0
    unsigned long long _totalCacheSize; // +0xb8
    NSMutableArray * _weAppDataArray; // +0xc0
    NSMutableArray * _selectedClassification; // +0xc8
    NSMutableArray * _selectedWeAppClassification; // +0xd0
    long long _sectionFooterForShowRawInfo; // +0xd8
    long long _sectionHeaderForShowRawInfo; // +0xe0
    NSMutableArray * _selectedReceiveMsgInfo; // +0xe8
    NSMutableArray * _selectedSendMsgInfo; // +0xf0
    NSMutableArray * _filterReportSendSortSessions; // +0xf8
    NSMutableArray * _filterReportRecvSortSessions; // +0x100
    NSMutableArray * _filterReportSendFilterSessions; // +0x108
    NSMutableArray * _filterReportRecvFilterSessions; // +0x110
}
+ (id)arrangeTheWeAppCacheClass:(id)arg1;
+ (id)arrangeTheWeAppCacheClassForFastList:(id)arg1;
- (id)initWithClassification:(id)arg1;
- (void)viewDidLoad;
- (void)updateVisible;
- (void)viewDidLayoutSubviews;
- (CGRect)getTableViewFrame;
- (void)initEmptyView;
- (BOOL)p_shouldShowTableFooterView;
- (void)initTableView;
- (void)makeNewFootPanelView;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)reloadData;
- (void)onReturn;
- (void)onSelecteAll;
- (id)p_getChatLogInfoFromDataItem:(void *)arg1 forRawType:(int)arg2;
- (void)onShowCleanHalfViewAndDelete;
- (void)p_startCleanTotalSize:(unsigned long long)arg1 cleanAllRawSend:(BOOL)arg2 cleanAllRawReceive:(BOOL)arg3 selectRawInfo:(id)arg4 selectCacheClassification:(id)arg5 fastDeleteClassification:(id)arg6;
- (id)p_getCleanSelectedClassification;
- (unsigned long long)p_getTotalSelectedSize:(id)arg1;
- (unsigned long long)p_getTotalSelectedSizeCC:(id)arg1;
- (BOOL)p_isSelectEmpty;
- (BOOL)p_isDataAllSelect;
- (unsigned long long)p_getDeleteCacheSize;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getFootPanelSelectButtonTitle;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelLabelText;
- (id)getFootPanelSizeText;
- (void)onFootPanelSelectAllButtonClick;
- (void)onFootPanelSelectButtonClick;
- (void)onFootPanelDeleteButtonClick;
- (BOOL)isFootPanelRelateDataLoading;
- (BOOL)isFootPanelRelateDataSelectEmpty;
- (BOOL)isFootPanelRelateDataSelectAll;
- (BOOL)isSelectedAllWeApp;
- (void)onChatLogDataLoadFinished;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)storageFooterPannelView;
- (void)setStorageFooterPannelView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (unsigned long long)totalCacheSize;
- (void)setTotalCacheSize:(unsigned long long)arg1;
- (id)weAppDataArray;
- (void)setWeAppDataArray:(id)arg1;
- (id)selectedClassification;
- (void)setSelectedClassification:(id)arg1;
- (id)selectedWeAppClassification;
- (void)setSelectedWeAppClassification:(id)arg1;
- (long long)sectionFooterForShowRawInfo;
- (void)setSectionFooterForShowRawInfo:(long long)arg1;
- (long long)sectionHeaderForShowRawInfo;
- (void)setSectionHeaderForShowRawInfo:(long long)arg1;
- (id)selectedReceiveMsgInfo;
- (void)setSelectedReceiveMsgInfo:(id)arg1;
- (id)selectedSendMsgInfo;
- (void)setSelectedSendMsgInfo:(id)arg1;
- (id)filterReportSendSortSessions;
- (void)setFilterReportSendSortSessions:(id)arg1;
- (id)filterReportRecvSortSessions;
- (void)setFilterReportRecvSortSessions:(id)arg1;
- (id)filterReportSendFilterSessions;
- (void)setFilterReportSendFilterSessions:(id)arg1;
- (id)filterReportRecvFilterSessions;
- (void)setFilterReportRecvFilterSessions:(id)arg1;
- (void).cxx_destruct;
@end
