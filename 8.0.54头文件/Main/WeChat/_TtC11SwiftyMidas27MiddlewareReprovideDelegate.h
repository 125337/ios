@interface _TtC11SwiftyMidas27MiddlewareReprovideDelegate : _TtCs12_SwiftObject <_TtP11SwiftyMidas24SWMidasReprovideDelegate_>
{
     callbacks; // +0x10
     logPrefix; // +0x18
     outerDelegate; // +0x28
}
- (BOOL)productShouldReprovideWithProductID:(id)arg1;
- (BOOL)productShouldReprovideAutomaticallyWithProductID:(id)arg1;
- (id)userForProductReprovidingWithProductIDs:(id)arg1;
- (void)productWillReprovideWithProductID:(id)arg1;
- (void)productDidReprovideWithResultWithProductID:(id)arg1 reprovideResp:(id)arg2 isSuccess:(BOOL)arg3 errorMsg:(id)arg4 isFromRestored:(BOOL)arg5;
@end

