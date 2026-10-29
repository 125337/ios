@interface GCDefaultCloseWindowImpl : NSObject <MMWebViewPresetUIChildViewDelegate, MMPageSheetAdapterDelegate>
{
    id /* block */ _onCloseBlock; // +0x8
    MMPageSheetAdapter * _weakPageAdapter; // +0x10
}
- (id)initWithWebViewController:(id)arg1 onCloseBlock:(id /* block */)arg2 pageSheetAdapter:(id)arg3;
- (void)onWebViewControllerRecieveCloseEvent:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id /* block */)onCloseBlock;
- (void)setOnCloseBlock:(id /* block */)arg1;
- (id)weakPageAdapter;
- (void)setWeakPageAdapter:(id)arg1;
- (void).cxx_destruct;
@end

