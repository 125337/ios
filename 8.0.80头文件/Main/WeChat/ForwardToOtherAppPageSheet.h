@interface ForwardToOtherAppPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, ClawBotAuthorizationSheetDelegate>
{
    BOOL _isCanShowYuanbaoEntry; // +0x8
    BOOL _disableForwardToLocalWeWork; // +0x9
    BOOL _hasConfirmedSelection; // +0xa
    id <ForwardToOtherAppPageSheetDelegate> _delegate; // +0x10
    NSDictionary * _reportParams; // +0x18
    MMTableView * _tableView; // +0x20
    NSArray * _appSections; // +0x28
}
- (id)initWithDisableForwardToLocalWeWork:(BOOL)arg1 isCanShowYuanbaoEntry:(BOOL)arg2;
- (BOOL)shouldShowLimitedAppType:(long long)arg1 available:(BOOL)arg2;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (void)setupData;
- (void)initConfig;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (id)tableView;
- (id)appInfoAtIndexPath:(id)arg1;
- (long long)appIndexAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showUnavailableToast;
- (void)executeForwardToOtherAppSelectionWithAppType:(long long)arg1 params:(id)arg2;
- (BOOL)needShowZipForwardAlert;
- (void)continueForwardToOtherAppAfterLegalTipWithAppType:(long long)arg1 params:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickClawBot;
- (void)onClickAppType:(long long)arg1;
- (void)clawBotAuthorizationSheetDidConfirm:(id)arg1;
- (void)clawBotAuthorizationSheetDidCancel:(id)arg1;
- (void)executeClawBotForwardLogic;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (BOOL)isCanShowYuanbaoEntry;
- (void)setIsCanShowYuanbaoEntry:(BOOL)arg1;
- (BOOL)disableForwardToLocalWeWork;
- (void)setDisableForwardToLocalWeWork:(BOOL)arg1;
- (BOOL)hasConfirmedSelection;
- (void)setHasConfirmedSelection:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (id)appSections;
- (void)setAppSections:(id)arg1;
- (void).cxx_destruct;
@end
