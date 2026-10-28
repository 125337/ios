@interface MMFinderLiveConnectMicAudienceApplyPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveConnectMicAudienceApplyPageSheetDelegate> _delegate; // +0x8
    UITableView * _tableView; // +0x10
    UIView * _separatorBar; // +0x18
}
- (id)initWithAutoConnect:(BOOL)arg1 isInPk:(BOOL)arg2;
- (void)cancelAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateNavLeftButton;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)onCameraSettingsTapped;
- (void)oCloseButtonTapped;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initializeComponentsWithAutoConnect:(BOOL)arg1 isInPk:(BOOL)arg2;
- (double)detailViewHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end
