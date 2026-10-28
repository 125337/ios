@interface WCAccountGatewayMaskedMobileViewController : WCAccountBaseViewController
{
    id <WCAccountGatewayMaskedMobileViewControllerDelegate> _delegate; // +0x80
}
- (BOOL)useSheetView;
- (void)initView;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)continueWithNext;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
