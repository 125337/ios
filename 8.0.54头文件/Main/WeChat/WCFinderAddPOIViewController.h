@interface WCFinderAddPOIViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderAddPOIViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, MMPickLocationViewControllerDelegate>
{
    id <WCFinderAddPOIViewControllerDelegate> _delegate; // +0x68
    NSString * _finderUsername; // +0x70
    WCFinderAddPOIViewModel * _viewModel; // +0x78
    NSMutableSet * _selectedRows; // +0x80
    UIView * _container; // +0x88
    UIImageView * _iconImageView; // +0x90
    UILabel * _placeHolderLabel; // +0x98
    UILabel * _relatedLabel; // +0xa0
    MMUIButton * _infoImageView; // +0xa8
    UITableView * _tableView; // +0xb0
    WCFinderRefreshTableFooterView * _footerView; // +0xb8
    UIView * _blankView; // +0xc0
    UIButton * _selectButton; // +0xc8
    UIButton * _doneButton; // +0xd0
    MMPickLocationViewController * _pickLocationViewController; // +0xd8
    WCFinderArrowTipsView * _tipsView; // +0xe0
    UILabel * _stateLabel; // +0xe8
}
- (id)initWithFinderUsername:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)initViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tapBackButton;
- (void)showTipsBubble;
- (void)showPickLocationVC;
- (void)tapSelectAll;
- (void)updateSelectAllButton;
- (void)updateDoneButton;
- (void)updateEmptyState;
- (void)tapDone;
- (void)bindSelectedPOI;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (void)onRelativePOIListChange;
- (void)onRelativePOIListNoMore;
- (void)onRelativePOIListError;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)container;
- (id)iconImageView;
- (id)placeHolderLabel;
- (id)relatedLabel;
- (id)infoImageView;
- (id)tableView;
- (id)footerView;
- (id)blankView;
- (id)selectButton;
- (id)doneButton;
- (id)stateLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)selectedRows;
- (void)setSelectedRows:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setPlaceHolderLabel:(id)arg1;
- (void)setRelatedLabel:(id)arg1;
- (void)setInfoImageView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setBlankView:(id)arg1;
- (void)setSelectButton:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (id)pickLocationViewController;
- (void)setPickLocationViewController:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void).cxx_destruct;
@end

