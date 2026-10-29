@interface ForwardToOtherAppPageSheetOldVersion : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, ClawBotAuthorizationSheetDelegate>
{
    BOOL _disableForwardToLocalWeWork; // +0x8
    id <ForwardToOtherAppPageSheetDelegate> _delegate; // +0x10
    NSDictionary * _reportParams; // +0x18
    MMTableView * _tableView; // +0x20
    NSArray * _appList; // +0x28
}
- (id)initWithDisableForwardToLocalWeWork:(BOOL)arg1;
- (void)setupData;
- (void)initConfig;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (id)tableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickClawBot;
- (void)onClickAppType:(long long)arg1;
- (void)onClickYuanbao;
- (void)clawBotAuthorizationSheetDidConfirm:(id)arg1;
- (void)executeClawBotForwardLogic;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (BOOL)disableForwardToLocalWeWork;
- (void)setDisableForwardToLocalWeWork:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (id)appList;
- (void)setAppList:(id)arg1;
- (void).cxx_destruct;
@end
