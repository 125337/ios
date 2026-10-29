@interface WCResourceManageViewController : MMUIViewController <WCFilterViewDelegate, StorageFootPanelViewDelegate, ResourceBrowseCollectionViewDelegate, IChatLogDataMgrExt>
{
    unsigned int _eFilterStartTime; // +0x68
    unsigned int _eFilterEndTime; // +0x6c
    NSMutableArray * _allMsgInfo; // +0x70
    UIView * _underlineTabView; // +0x78
    WCFilterView * _filterView; // +0x80
    StorageFootPanelView * _footPanelView; // +0x88
    UIView * _middleView; // +0x90
    ResourceBrowseCollectionView * _allResBrowseView; // +0x98
    MMUILabel * _middleTipLabel; // +0xa0
    MMUILabel * _middleLoadLabel; // +0xa8
    MMUIActivityIndicatorView * _loadingIndicatorView; // +0xb0
    unsigned long long _curManageType; // +0xb8
    unsigned long long _curOrderType; // +0xc0
    unsigned long long _curSelectType; // +0xc8
    unsigned long long _curSelectTime; // +0xd0
    long long _currentTime; // +0xd8
    NSDate * _minSelectDate; // +0xe0
    NSDate * _maxSelectDate; // +0xe8
    NSDate * _selectBeginDate; // +0xf0
    NSDate * _selectEndDate; // +0xf8
    unsigned long long _viewType; // +0x100
}
+ (id)getDateWithoutHMS:(id)arg1;
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
- (id)makeAllBrowseView;
- (void)onResourceBrowseCollectionViewSelectChange:(id)arg1;
- (id)onResourceBrowseCollectionViewGetParentUIViewController;
- (BOOL)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
- (id)init;
- (id)initWithResourceViewType:(unsigned long long)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)viewDidLoad;
- (void)deleteTheSelectedData;
- (void)fillingData;
- (BOOL)isDataEmpty;
- (BOOL)isDataSelectEmpty;
- (unsigned long long)getSeletedDataSize;
- (BOOL)isDataAllSelected;
- (void)initData;
- (void)reinitData;
- (void)initView;
- (void)updateView;
- (CGRect)getMiddleFrame;
- (void)switchToView:(unsigned long long)arg1;
- (void)onReturn;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (void)willMoveToParentViewController:(id)arg1;
- (void)p_fillDataItemsFilter:(BOOL)arg1;
- (id)allMsgInfo;
- (void)setAllMsgInfo:(id)arg1;
- (id)underlineTabView;
- (void)setUnderlineTabView:(id)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
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
- (unsigned long long)curManageType;
- (void)setCurManageType:(unsigned long long)arg1;
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
- (unsigned long long)viewType;
- (void)setViewType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

