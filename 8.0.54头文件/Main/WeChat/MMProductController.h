@interface MMProductController : NSObject <SKStoreProductViewControllerDelegate>
{
    NSString * _productId; // +0x8
    WCSKAdNetworkItem * _skAdItem; // +0x10
    NSString * _callbackUrl; // +0x18
    UIViewController * _pushViewController; // +0x20
    SKStoreProductViewController * _productViewController; // +0x28
}
+ (BOOL)isAvailable;
+ (id)sharedControllerWithProductId:(id)arg1 callbackUrl:(id)arg2;
+ (id)sharedControllerWithProductId:(id)arg1 skAdItem:(id)arg2 callbackUrl:(id)arg3;
+ (void)dismissProductController;
- (id)initWithProductId:(id)arg1 skAdItem:(id)arg2 callbackUrl:(id)arg3;
- (void)showInViewController:(id)arg1;
- (void)openProductViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)skAdItem;
- (void)setSkAdItem:(id)arg1;
- (id)callbackUrl;
- (void)setCallbackUrl:(id)arg1;
- (id)pushViewController;
- (void)setPushViewController:(id)arg1;
- (id)productViewController;
- (void)setProductViewController:(id)arg1;
- (void).cxx_destruct;
@end

