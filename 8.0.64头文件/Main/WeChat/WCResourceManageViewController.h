@interface WCResourceManageViewController : MMUIViewController <WCFilterViewDelegate, StorageFilterViewDelegate, StorageFootPanelViewDelegate, ResourceBrowseCollectionViewDelegate, IChatLogDataMgrExt>
{
    BOOL _bUserAllSelect; // +0x70
    BOOL _timeFilterChanged; // +0x71
    BOOL _curOnlyInSys; // +0x72
    unsigned int _eFilterStartTime; // +0x74
    unsigned int _eFilterEndTime; // +0x78
    NSMutableArray * _lastSelectChatLogInfo; // +0x80
    NSString * _filterReportSortSession; // +0x88
    NSString * _filterReportFilterSession; // +0x90
    NSMutableArray * _allMsgInfo; // +0x98
    UIView * _underlineTabView; // +0xa0
    WCFilterView * _filterView; // +0xa8
    StorageFilterView * _filterView2; // +0xb0
    StorageFootPanelView * _footPanelView; // +0xb8
    UIView * _middleView; // +0xc0
    ResourceBrowseCollectionView * _allResBrowseView; // +0xc8
    MMUILabel * _middleTipLabel; // +0xd0
    MMUILabel * _middleLoadLabel; // +0xd8
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0xe0
    unsigned long long _curOrderType; // +0xe8
    unsigned long long _curSelectType; // +0xf0
    unsigned long long _curSelectTime; // +0xf8
    long long _currentTime; // +0x100
    NSDate * _minSelectDate; // +0x108
    NSDate * _maxSelectDate; // +0x110
    NSDate * _selectBeginDate; // +0x118
    NSDate * _selectEndDate; // +0x120
    unsigned long long _viewType; // +0x128
    unsigned long long _selectViewType; // +0x130
    unsigned long long _curSourceType; // +0x138
    unsigned long long _curChatType; // +0x140
    id /* block */ _afterManageCompletion; // +0x148
    NSString * _filterReportSession; // +0x150
}
+ (id)getDateWithoutHMS:(id)arg1;
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
- (void)makeFootPanelViewIn:(CGRect)arg1;
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
- (id)makeAllBrowseViewIn:(CGRect)arg1;
- (void)onResourceBrowseCollectionViewSelectChange:(id)arg1;
- (id)onResourceBrowseCollectionViewGetParentUIViewController;
- (BOOL)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
- (id)init;
- (id)initWithResourceViewType:(unsigned long long)arg1 withTitle:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)deleteTheSelectedData;
- (void)fillingData;
- (BOOL)isDataEmpty;
- (BOOL)isDataSelectEmpty;
- (unsigned long long)getSeletedDataSize;
- (BOOL)isDataAllSelected;
- (void)selectAll;
- (void)initData;
- (void)reinitData;
- (CGRect)getMiddleFrame;
- (CGRect)getFooterPanelFrame;
- (void)initView;
- (void)updateView;
- (void)makeMainViewIn:(CGRect)arg1;
- (void)onReturn;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (void)willMoveToParentViewController:(id)arg1;
- (void)p_fillDataItemsFilter:(BOOL)arg1;
- (id)lastSelectChatLogInfo;
- (void)setLastSelectChatLogInfo:(id)arg1;
- (BOOL)bUserAllSelect;
- (void)setBUserAllSelect:(BOOL)arg1;
- (id)filterReportSortSession;
- (void)setFilterReportSortSession:(id)arg1;
- (id)filterReportFilterSession;
- (void)setFilterReportFilterSession:(id)arg1;
- (id)allMsgInfo;
- (void)setAllMsgInfo:(id)arg1;
- (id)underlineTabView;
- (void)setUnderlineTabView:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (id)filterView2;
- (void)setFilterView2:(id)arg1;
- (id)footPanelView;
- (void)setFootPanelView:(id)arg1;
- (id)middleView;
- (void)setMiddleView:(id)arg1;
- (id)allResBrowseView;
- (void)setAllResBrowseView:(id)arg1;
- (id)middleTipLabel;
- (void)setMiddleTipLabel:(id)arg1;
- (id)middleLoadLabel;
- (void)setMiddleLoadLabel:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (unsigned long long)curOrderType;
- (void)setCurOrderType:(unsigned long long)arg1;
- (unsigned long long)curSelectType;
- (void)setCurSelectType:(unsigned long long)arg1;
- (unsigned long long)curSelectTime;
- (void)setCurSelectTime:(unsigned long long)arg1;
- (long long)currentTime;
- (void)setCurrentTime:(long long)arg1;
- (id)minSelectDate;
- (void)setMinSelectDate:(id)arg1;
- (id)maxSelectDate;
- (void)setMaxSelectDate:(id)arg1;
- (id)selectBeginDate;
- (void)setSelectBeginDate:(id)arg1;
- (id)selectEndDate;
- (void)setSelectEndDate:(id)arg1;
- (unsigned int)eFilterStartTime;
- (void)setEFilterStartTime:(unsigned int)arg1;
- (unsigned int)eFilterEndTime;
- (void)setEFilterEndTime:(unsigned int)arg1;
- (BOOL)timeFilterChanged;
- (void)setTimeFilterChanged:(BOOL)arg1;
- (unsigned long long)viewType;
- (void)setViewType:(unsigned long long)arg1;
- (unsigned long long)selectViewType;
- (void)setSelectViewType:(unsigned long long)arg1;
- (unsigned long long)curSourceType;
- (void)setCurSourceType:(unsigned long long)arg1;
- (unsigned long long)curChatType;
- (void)setCurChatType:(unsigned long long)arg1;
- (BOOL)curOnlyInSys;
- (void)setCurOnlyInSys:(BOOL)arg1;
- (id /* block */)afterManageCompletion;
- (void)setAfterManageCompletion:(id /* block */)arg1;
- (id)filterReportSession;
- (void)setFilterReportSession:(id)arg1;
- (void).cxx_destruct;
@end
