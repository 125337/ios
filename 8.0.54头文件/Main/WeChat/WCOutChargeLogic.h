@interface WCOutChargeLogic : NSObject <WCOutGetProductListExt, IAPExt>
{
    BOOL _isAutoVerify; // +0x8
    unsigned int _autoVerifyMode; // +0xc
    unsigned int _autoVerifyRet; // +0x10
    unsigned int _autoVerifyErrcode; // +0x14
    id <WCOutChargeLogicDelegate> _delegate; // +0x18
    NSString * _autoVerifyBeginTs; // +0x20
    NSString * _autoVerifyEndTs; // +0x28
}
+ (id)logicWithAutoVerify;
- (void)getproductList:(id)arg1 reqCurrency:(id)arg2 responeDelegate:(id)arg3;
- (void)didReceiveResponse:(BOOL)arg1 Respone:(id)arg2;
- (void)updateListFromAppleForSKProduct:(id)arg1;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (long long)buyItem:(id)arg1 extInfo:(id)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAutoVerify;
- (void)setIsAutoVerify:(BOOL)arg1;
- (id)autoVerifyBeginTs;
- (void)setAutoVerifyBeginTs:(id)arg1;
- (id)autoVerifyEndTs;
- (void)setAutoVerifyEndTs:(id)arg1;
- (unsigned int)autoVerifyMode;
- (void)setAutoVerifyMode:(unsigned int)arg1;
- (unsigned int)autoVerifyRet;
- (void)setAutoVerifyRet:(unsigned int)arg1;
- (unsigned int)autoVerifyErrcode;
- (void)setAutoVerifyErrcode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

