@interface MMFinderLivePaidConnectMicAudienceOperationPanel : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, WCLiveActionSheetDelegate>
{
    id <MMFinderLivePaidConnectMicAudienceOperationPanelDelegate> _delegate; // +0x8
    MMFinderLivePaidConnectMicAudienceOperationInfo * _info; // +0x10
    MMTableView * _tableView; // +0x18
}
- (id)init;
- (void)updateWithInfo:(id)arg1;
- (void)initViews;
- (void)setupPageSheetConfig;
- (double)getPageSheetContentHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onClose;
- (void)onCancelApply;
- (void)onSelectBid;
- (void)showConfirmCancelSheet;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

