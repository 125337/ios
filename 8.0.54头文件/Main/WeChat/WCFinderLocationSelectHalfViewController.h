@interface WCFinderLocationSelectHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCTimelinePOIPickerViewControllerDelegate>
{
    BOOL _submitting; // +0x68
    BOOL _viewHasAppeared; // +0x69
    BOOL _pageExpReported; // +0x6a
    BOOL _pickedCustomLocation; // +0x6b
    int _enterCommentScene; // +0x6c
    id <WCFinderLocationSelectHalfVCDelegate> _selectDelegate; // +0x70
    id /* block */ _submitBlock; // +0x78
    id /* block */ _cancelBlock; // +0x80
    UILabel * _pageTitle; // +0x88
    UILabel * _pageDesc; // +0x90
    UIView * _containerView; // +0x98
    UITableView * _tableView; // +0xa0
    MMUIButton * _cancelBtn; // +0xa8
    MMUIButton * _submitBtn; // +0xb0
    NSMutableArray * _displayItems; // +0xb8
    WCFinderLocationSelectItem * _selectedItem; // +0xc0
    WCTimelinePOIPickerViewController * _poiPickerViewController; // +0xc8
}
- (BOOL)useTransparentNavibar;
- (BOOL)isForbidPanGesture;
- (id)initWithRecommendLocations:(id)arg1 commentScene:(int)arg2;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)baseInit;
- (void)setupUI;
- (void)updateUI;
- (double)getMaxHalfScreenHeight;
- (double)expectedHalfScreenHeight;
- (void)viewDidTransitionToNewSize;
- (void)selectItem:(id)arg1;
- (void)poiClickToSelectCustom;
- (void)updateRecommendLocations:(id)arg1;
- (void)reportPageExpose;
- (id)reportParamsIncludePOIInfo:(BOOL)arg1;
- (void)onSubmitButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onPOIPickerFinished:(id)arg1;
- (id)selectDelegate;
- (void)setSelectDelegate:(id)arg1;
- (id /* block */)submitBlock;
- (void)setSubmitBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id)pageTitle;
- (void)setPageTitle:(id)arg1;
- (id)pageDesc;
- (void)setPageDesc:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)submitBtn;
- (void)setSubmitBtn:(id)arg1;
- (id)displayItems;
- (void)setDisplayItems:(id)arg1;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (id)poiPickerViewController;
- (void)setPoiPickerViewController:(id)arg1;
- (BOOL)submitting;
- (void)setSubmitting:(BOOL)arg1;
- (BOOL)viewHasAppeared;
- (void)setViewHasAppeared:(BOOL)arg1;
- (BOOL)pageExpReported;
- (void)setPageExpReported:(BOOL)arg1;
- (int)enterCommentScene;
- (void)setEnterCommentScene:(int)arg1;
- (BOOL)pickedCustomLocation;
- (void)setPickedCustomLocation:(BOOL)arg1;
- (void).cxx_destruct;
@end

