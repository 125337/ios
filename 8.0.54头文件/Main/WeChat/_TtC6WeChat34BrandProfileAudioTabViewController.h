@interface _TtC6WeChat34BrandProfileAudioTabViewController : UITableViewController <BrandProfileTabVCProtocol, MMRefreshTableFooterDelegate>
{
     delegate; // +0x8
     finderUsername; // +0x10
     bizUsername; // +0x20
     viewModel; // +0x30
     $__lazy_storage_$_footerTerminatorView; // +0x38
     $__lazy_storage_$_loadingView; // +0x40
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithBizUsername:(id)arg1 finderUsername:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setExternalGestureRecognizer:(id)arg1;
- (id)tabTitle;
- (unsigned long long)tabType;
- (id)viewController;
- (void)updateSectionWidthInSectionDataList;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

