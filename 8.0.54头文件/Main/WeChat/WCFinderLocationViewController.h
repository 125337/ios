@interface WCFinderLocationViewController : MMPageSheetBaseViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, WCSearchDelegate, WCFinderLocationViewModelDelegate, UITextFieldDelegate, WCFinderMultiSelectSearchBarDelegate, WCFinderCommonSearchBarDelegate, MMImagePickerManagerDelegate, WCFinderLocationFooterViewDelegate>
{
    id <WCFinderLocationViewControllerDelegate> _delegate; // +0x68
    NSString * _postSessionId; // +0x70
    WCFinderLocationViewModel * _viewModel; // +0x78
    UIView * _containerView; // +0x80
    UILabel * _titleLabel; // +0x88
    UIButton * _rightBarBtn; // +0x90
    WCFinderCommonSearchBar * _singleSearchBar; // +0x98
    WCFinderMultiSelectSearchBar * _multiSearchBar; // +0xa0
    MMTableView * _poiTableView; // +0xa8
    WCFinderLocationFooterView * _listTableFooterView; // +0xb0
    UIView * _topSeparateLine; // +0xb8
    WCFinderLocationReportModel * _reportModel; // +0xc0
}
+ (double)heightRatio;
- (id)initWithPOIType:(unsigned long long)arg1 finderUsername:(id)arg2 selectedLocation:(id)arg3 materialLbsLocation:(id)arg4 reportModel:(id)arg5;
- (void)viewDidLoad;
- (void)triggerFetchPOILbsList;
- (unsigned long long)supportedInterfaceOrientations;
- (void)layoutAllSubviews;
- (void)_initHeaderView;
- (void)setUpView;
- (double)containerViewHeight;
- (void)_initTableView;
- (void)onClickCancelButton;
- (void)closeContainer;
- (void)onClickAcceptBtn;
- (id)getCurSearchTextField;
- (void)clearCurSearchTextField;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onViewModelDataReload;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onCommonSearchBarTextFiledChanged:(id)arg1;
- (void)onMultiSelectSearchItem:(id)arg1;
- (void)onMultiSelectSearchTextFiledChanged:(id)arg1;
- (void)registerYReportSdk;
- (void)configureSessionPageInOutReport;
- (id)genReportInfoDic;
- (void)onLocationFooterClickSubtitle:(id)arg1;
- (void)showSelectGPSFromAssetPicker;
- (void)updateSearchAssetPOIInfo:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)dismissAllPresentedViewControllers;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postSessionId;
- (void)setPostSessionId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rightBarBtn;
- (void)setRightBarBtn:(id)arg1;
- (id)singleSearchBar;
- (void)setSingleSearchBar:(id)arg1;
- (id)multiSearchBar;
- (void)setMultiSearchBar:(id)arg1;
- (id)poiTableView;
- (void)setPoiTableView:(id)arg1;
- (id)listTableFooterView;
- (void)setListTableFooterView:(id)arg1;
- (id)topSeparateLine;
- (void)setTopSeparateLine:(id)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (void).cxx_destruct;
@end

