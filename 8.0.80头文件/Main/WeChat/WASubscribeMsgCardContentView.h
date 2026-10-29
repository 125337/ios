@interface WASubscribeMsgCardContentView : UIView <WASubscriptionMessagePageSheetDelegate, WAAgentAuthCardContentView>
{
    WASubscribeMsgCardSession * _session; // +0x8
    WASubscriptionMessagePageSheet * _hostPageSheet; // +0x10
}
- (id)initWithSession:(id)arg1;
- (void)setupHostPageSheet;
- (void)authDecline:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)layoutSubviews;
- (void)clearHostBackgroundColors;
- (void)applyCompletedStateWithTailText:(id)arg1 isIgnored:(BOOL)arg2;
- (void)setAcceptButtonLoading:(BOOL)arg1;
- (id)findFooterViewInView:(id)arg1;
- (void)enumerateListCellsInView:(id)arg1 usingBlock:(id /* block */)arg2;
- (double)requiredContentHeight;
- (void)setOpenUrlAction:(id /* block */)arg1;
- (void)setWeAppLinkAction:(id /* block */)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)hostPageSheet;
- (void)setHostPageSheet:(id)arg1;
- (void).cxx_destruct;
@end
