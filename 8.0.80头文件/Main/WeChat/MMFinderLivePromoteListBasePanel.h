@interface MMFinderLivePromoteListBasePanel : MMPageSheetBaseView <WCFinderRefreshTableFooterViewDelegate>
{
    MMFinderLivePromoteListBaseViewModel * _listViewModel; // +0x8
    long long _previousOrientation; // +0x10
    UIView * _contentView; // +0x18
    MMTableView * _mainTableView; // +0x20
    NSMutableArray * _dataArray; // +0x28
    WCFinderRefreshTableFooterView * _footerView; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (void)pageSheetWillAppear;
- (void)initListViewModel:(id)arg1;
- (void)fetchData;
- (void)realRefreshTableView;
- (void)createUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)pageSheetDidRotation;
- (void)setupPageSheetConfig;
- (id)getCurrentRightButton;
- (void)addButtonClicked;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (id)dataArray;
- (id)contentView;
- (id)mainTableView;
- (id)getCurrentListViewModel;
- (id)footerView;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (id)listViewModel;
- (void)setListViewModel:(id)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setMainTableView:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
