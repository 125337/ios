@interface MMLimitedModeConfigListView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMLimitedModeConfigListViewDelegate><MMLimitedModeBizCellDelegate> _limitedDelegate; // +0x8
    NSArray * _bizTypes; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)canShowLiveConfig;
- (double)listViewHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)limitedDelegate;
- (void)setLimitedDelegate:(id)arg1;
- (id)bizTypes;
- (void)setBizTypes:(id)arg1;
- (void).cxx_destruct;
@end
