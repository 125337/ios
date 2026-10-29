@interface WAPNAuthSheet : WAAuthorizePageSheet <WAPageSheetDelegate, IWAPNAuthPageSheet>
{
    BOOL _programmaticDismiss; // +0x8
    WAPNAuthSheetInfo * _sheetInfo; // +0x10
    id /* block */ _agentContentHeightDidChange; // +0x18
    WAPNAuthPageSheetViewModel * _viewModel; // +0x20
}
- (id)initWithSheetInfo:(id)arg1;
- (void)applyNormalHostBackgroundColor;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)pageSheetDidClose:(id)arg1;
- (void)pageSheetDidCancelByTapAside:(id)arg1;
- (void)reloadWithSheetInfo:(id)arg1;
- (void)syncHostContainerHeightIfNeeded;
- (double)agentCardContentHeight;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (void)handleTapPhoneAtIndex:(long long)arg1;
- (void)handleTapManage;
- (void)handleTapFillPhone;
- (void)handleTapCancel;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)openUrl:(id)arg1;
- (id)subviewClassList;
- (id)customSubviewClassList;
- (id)subViewModel;
- (id)sheetInfo;
- (void)setSheetInfo:(id)arg1;
- (id /* block */)agentContentHeightDidChange;
- (void)setAgentContentHeightDidChange:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)programmaticDismiss;
- (void)setProgrammaticDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end
