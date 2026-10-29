@interface GameSKStoreDelgeate : NSObject <SKStoreProductViewControllerDelegate>
{
    BOOL _storePageShow; // +0x8
    BOOL _popWhenDismiss; // +0x9
    id /* block */ _onCloseBlock; // +0x10
    SKStoreProductViewController * _storeVc; // +0x18
    UIViewController * _hostVC; // +0x20
}
- (id)initWithOnCloseBlock:(id /* block */)arg1 storeVc:(id)arg2;
- (void)dealloc;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dismissCurrentStorePage;
- (void)popTopViewController;
- (void)onClose;
- (BOOL)storePageShow;
- (void)setStorePageShow:(BOOL)arg1;
- (id /* block */)onCloseBlock;
- (void)setOnCloseBlock:(id /* block */)arg1;
- (id)storeVc;
- (void)setStoreVc:(id)arg1;
- (BOOL)popWhenDismiss;
- (void)setPopWhenDismiss:(BOOL)arg1;
- (id)hostVC;
- (void)setHostVC:(id)arg1;
- (void).cxx_destruct;
@end
