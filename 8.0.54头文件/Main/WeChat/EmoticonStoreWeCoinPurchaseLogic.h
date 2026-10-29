@interface EmoticonStoreWeCoinPurchaseLogic : EmoticonStoreBasePurchaseLogic <WCCoinConsumeLogicDelegate, StoreEmoticonWeCoinFirstPurchaseTipViewDelegate>
{
    id <EmoticonStoreWeCoinPurchaseLogicDelegate> _delegate; // +0x8
    NSString * _billNo; // +0x10
    NSData * _purchaseBuff; // +0x18
}
- (id)initWithStoreItem:(id)arg1;
- (void)initWeCoinSDK;
- (unsigned long long)startPurchase;
- (BOOL)showBuyTipIfNeeded;
- (void)realShowBuyTip;
- (void)createPreparePurchaseCgi;
- (void)startConsume;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)onCloseTip;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (id)purchaseBuff;
- (void)setPurchaseBuff:(id)arg1;
- (void).cxx_destruct;
@end

