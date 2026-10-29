@interface _TtC6WeChatP33_587279BC3D27A760570B8677C5586F3B19WCCoinMidasDelegate : _TtCs12_SwiftObject <_TtP11SwiftyMidas22SWMidasRuntimeDelegate_, _TtP11SwiftyMidas24SWMidasReprovideDelegate_>
{
     api; // +0x10
     IGNORED_IAP_PRODUCT_PREFIXES; // +0x18
}
- (BOOL)shouldProductIDIgnoredHandlingWithProductID:(id)arg1;
- (void)trackEventDidInsertWithEvent:(id)arg1;
- (void)logWithLevelName:(id)arg1 moduleName:(id)arg2 log:(id)arg3;
- (id)userForProductReprovidingWithProductIDs:(id)arg1;
- (void)productDidReprovideWithResultWithProductID:(id)arg1 reprovideResp:(id)arg2 isSuccess:(BOOL)arg3 errorMsg:(id)arg4 isFromRestored:(BOOL)arg5;
@end
