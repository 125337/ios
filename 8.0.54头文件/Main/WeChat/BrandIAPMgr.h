@interface BrandIAPMgr : MMUserService <PBMessageObserverDelegate, IAPExt, MMServiceProtocol>
{
    BOOL _isPaying; // +0x8
}
- (int)brandIAPPreay:(id)arg1;
- (int)brandIAPRequestProduct:(id)arg1;
- (int)brandIAPPay:(id)arg1 ExtInfo:(id)arg2;
- (int)brandIAPGetResult:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)dealloc;
@end

