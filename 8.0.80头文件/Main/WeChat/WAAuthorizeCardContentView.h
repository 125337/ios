@interface WAAuthorizeCardContentView : UIView <WAAgentAuthCardContentView>
{
    WAAuthorizeCardSession * _session; // +0x8
    WAAuthorizePageSheet * _hostPageSheet; // +0x10
}
- (id)initWithSession:(id)arg1;
- (void)setupHostPageSheet;
- (void)layoutSubviews;
- (void)clearHostBackgroundColors;
- (void)applyCompletedStateWithTailText:(id)arg1 isIgnored:(BOOL)arg2;
- (void)setAcceptButtonLoading:(BOOL)arg1;
- (id)findFooterViewInView:(id)arg1;
- (id)findProtocolViewInView:(id)arg1;
- (double)requiredContentHeight;
- (void)setOpenUrlAction:(id /* block */)arg1;
- (void)setWeAppLinkAction:(id /* block */)arg1;
- (id)createPageSheetForInfo:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)hostPageSheet;
- (void)setHostPageSheet:(id)arg1;
- (void).cxx_destruct;
@end
