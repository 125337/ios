@interface WCLabSettingDetailViewControllerNew : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCLabSettingDetailFooterViewDelegate, WCLabSettingDetailVisitWeAppCellDelegate, WCLabSettingDetailImagesCellDelegate>
{
    WCLabsAppItem * _labItem; // +0x70
    UITableView * _tableView; // +0x78
    UISwitch * _labSwitch; // +0x80
}
- (id)initWithLabItem:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onClickExposeButton:(id)arg1;
- (void)onClickVisisWeAppWithLabItem:(id)arg1;
- (id)genFeedbackFromStr;
- (void)initTableView;
- (id)labSwitch;
- (void)setLabSwitch:(id)arg1;
- (void).cxx_destruct;
@end
