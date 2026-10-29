@interface MMFinderLiveConnectMicSelectConnectModePanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _canAutoConnect; // +0x8
    id <MMFinderLiveConnectMicSelectConnectModeDelegate> _actionDelegate; // +0x10
    MMTableView * _tableView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 canAutoConnect:(BOOL)arg2;
- (void)configAllSubviews;
- (void)setCanAutoConnect:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)canAutoConnect;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
