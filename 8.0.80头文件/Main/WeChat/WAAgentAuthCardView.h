@interface WAAgentAuthCardView : UIView
{
    id /* block */ _openUrlAction; // +0x8
    id /* block */ _weAppLinkAction; // +0x10
    id /* block */ _contentHeightDidChange; // +0x18
    WAAgentAuthCardSession * _session; // +0x20
    UIView<WAAgentAuthCardContentView> * _contentView; // +0x28
}
- (id)initWithSession:(id)arg1;
- (void)setupContentView;
- (void)layoutSubviews;
- (double)requiredContentHeight;
- (void)applyCompletedStateWithTailText:(id)arg1 isIgnored:(BOOL)arg2;
- (void)setOpenUrlAction:(id /* block */)arg1;
- (void)setWeAppLinkAction:(id /* block */)arg1;
- (void)setContentHeightDidChange:(id /* block */)arg1;
- (id /* block */)openUrlAction;
- (id /* block */)weAppLinkAction;
- (id /* block */)contentHeightDidChange;
- (id)session;
- (void)setSession:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
