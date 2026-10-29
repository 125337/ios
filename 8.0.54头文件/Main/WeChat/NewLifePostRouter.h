@interface NewLifePostRouter : NSObject <NewLifeImagePickViewControllerDelegate, NewLifePostEndDelegate>
{
    NewLifePostParameter * _parameter; // +0x8
    NSString * _finderUsername; // +0x10
    UIViewController * _fromViewContrller; // +0x18
    NewLifePostRouter * _router; // +0x20
}
- (id)initWithFinderUsername:(id)arg1;
- (BOOL)routeFromViewController:(id)arg1;
- (id)draft;
- (id)draftKvName;
- (void)onFinishSelectAssets:(id)arg1 assets:(id)arg2;
- (void)onCancelSelectAssets:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)fromViewContrller;
- (void)setFromViewContrller:(id)arg1;
- (id)router;
- (void)setRouter:(id)arg1;
- (void).cxx_destruct;
@end

