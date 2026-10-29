@interface BrandFlowListDislikeSelectionHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <BrandFlowListDislikeSelectionHalfViewControllerDelegate> _bizDelegate; // +0x70
    MMUIButton * _closeBtn; // +0x78
    UILabel * _titleLabel; // +0x80
    UIButton * _submitBtn; // +0x88
    UITableView * _tableView; // +0x90
    BrandFlowListBaseCellModel * _viewModel; // +0x98
    double _heightRatio; // +0xa0
    NSMutableArray * _selectedEntries; // +0xa8
    NSMutableSet * _exposedEntries; // +0xb0
}
- (BOOL)useTransparentNavibar;
- (BOOL)isForbidPanGesture;
- (id)initWithViewModel:(id)arg1;
- (void)baseInit;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (double)getMaxHalfScreenHeight;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (id)wordingAtIndex:(unsigned long long)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onSubmitButtonClicked:(id)arg1;
- (void)submitDislikeReason:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_handleWordingEntrySelect:(id)arg1;
- (id)bizDelegate;
- (void)setBizDelegate:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)submitBtn;
- (void)setSubmitBtn:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)selectedEntries;
- (void)setSelectedEntries:(id)arg1;
- (id)exposedEntries;
- (void)setExposedEntries:(id)arg1;
- (void).cxx_destruct;
@end
