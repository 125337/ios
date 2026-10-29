@interface WAPNAuthToastSheet : WAAuthorizePageSheet <WAPageSheetDelegate>
{
    BOOL _programmaticDismiss; // +0x8
    id <WAPNAuthToastSheetDelegate> _toastDelegate; // +0x10
    long long _toastType; // +0x18
}
- (id)initWithToastType:(long long)arg1;
- (id)tips;
- (void)applyHostBackgroundColor;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)pageSheetDidClose:(id)arg1;
- (void)pageSheetDidCancelByTapAside:(id)arg1;
- (void)didTapClose;
- (void)didTapFeedback;
- (id)subviewClassList;
- (id)subViewModel;
- (double)agentCardContentHeight;
- (id)toastDelegate;
- (void)setToastDelegate:(id)arg1;
- (long long)toastType;
- (void)setToastType:(long long)arg1;
- (BOOL)programmaticDismiss;
- (void)setProgrammaticDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end
