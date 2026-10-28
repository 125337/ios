@interface _TtC6WeChat35MMFinderLiveChooseFunctionViewModel : NSObject <UITableViewDelegate, UITableViewDataSource, _TtP6WeChat38MMFinderLiveChooseFunctionCellDelegate_>
{
     delegate; // +0x8
     hasFirstDisable; // +0x10
     dataArray; // +0x18
     chooseFunctionPanel; // +0x20
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasFirstDisable;
- (void)setHasFirstDisable:(BOOL)arg1;
- (void)showChooseFunctionPanelWithDataArray:(id)arg1 superView:(id)arg2;
- (void)updateChooseFunctionPanelWithDataArray:(id)arg1;
- (id)getChooseFunctionPanel;
- (void)liveChooseFunctionCellDidSelectWithIndexPath:(id)arg1 item:(id)arg2 isActionButton:(BOOL)arg3;
- (void)liveChooseFunctionDetailDidSelectWithIndexPath:(id)arg1 item:(id)arg2;
- (void)updateContentViewHeightWithContentViewHeight:(double)arg1;
- (void)hideLiveChooseFunctionWithAnimated:(BOOL)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)init;
- (void).cxx_destruct;
@end
