@interface MMNexusHalfScreenController : NSObject <MMWebPageSheetDelegate>
{
    MMPageSheetAdapter * _adapter; // +0x8
    MMWebViewController * _hostWebViewController; // +0x10
    id /* block */ _closeBlock; // +0x18
}
- (void)openWithParams:(id)arg1 onNavigationCtrl:(id)arg2 closeCompletion:(id /* block */)arg3;
- (void)dismissAnimated:(BOOL)arg1;
- (void)webPageSheetDidDismiss:(id)arg1;
- (id)_buildSheetNavWithParams:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)hostWebViewController;
- (void)setHostWebViewController:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
