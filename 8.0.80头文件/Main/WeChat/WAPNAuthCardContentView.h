@interface WAPNAuthCardContentView : UIView <WAPNAuthSheetDelegate, WAAgentAuthCardContentView>
{
    WAPNAuthCardSession * _session; // +0x8
    WAAuthorizePageSheet * _hostSheet; // +0x10
    id /* block */ _contentHeightDidChange; // +0x18
}
- (id)initWithSession:(id)arg1;
- (void)setupHostSheet;
- (void)layoutSubviews;
- (void)clearHostBackgroundColors;
- (void)sheet:(id)arg1 didSelectPhone:(id)arg2 acceptedPrivacy:(BOOL)arg3;
- (void)sheetDidTapAddPhone:(id)arg1;
- (void)sheetDidTapManage:(id)arg1;
- (void)sheetDidCancel:(id)arg1;
- (void)sheet:(id)arg1 didTapPrivacyLink:(id)arg2;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)presentPrivacyPopup;
- (void)openPrivacyUrl:(id)arg1;
- (double)requiredContentHeight;
- (void)applyCompletedStateWithTailText:(id)arg1 isIgnored:(BOOL)arg2;
- (void)setAcceptButtonLoading:(BOOL)arg1;
- (id)findSubviewOfClass:(Class)arg1 inView:(id)arg2;
- (void)setOpenUrlAction:(id /* block */)arg1;
- (void)setContentHeightDidChange:(id /* block */)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)hostSheet;
- (void)setHostSheet:(id)arg1;
- (id /* block */)contentHeightDidChange;
- (void).cxx_destruct;
@end
