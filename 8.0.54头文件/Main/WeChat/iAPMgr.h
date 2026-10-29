@interface iAPMgr : MMUserService <SKPaymentTransactionObserver, SKProductsRequestDelegate, PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableSet * _setSKProductsRequests; // +0x8
    NSMutableArray * _arrRestoredTransactions; // +0x10
    NSMutableArray * _arrRestoredVerifiedTransaction; // +0x18
    BOOL _bIsRestoring; // +0x20
    unsigned int _status; // +0x24
    iAPCache * _iAPCache; // +0x28
    JailBreakHelper * m_jailBreakHelper; // +0x30
}
+ (unsigned int)getBizTypeOfProductID:(id)arg1;
+ (unsigned int)getIdKeyIdIAP;
+ (unsigned int)getIdKeyPreparePurchaseFailed;
+ (unsigned int)getIdKeyIAPPurchaseFailed;
+ (unsigned int)getIdKeyVerifyPurchaseFailed;
- (id)pathForCache;
- (void)writeCache;
- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (BOOL)isNonConsumable:(id)arg1;
- (BOOL)isHandleByIAPMgr:(id)arg1;
- (BOOL)preparePurchase:(id)arg1 extInfo:(id)arg2;
- (void)verifyTransation:(id)arg1 verifyType:(int)arg2;
- (void)verifyTransationForUnVerifyTransaction:(id)arg1 verifyType:(int)arg2 uiscene:(unsigned int)arg3;
- (void)verifyTransationForUnVerifyTransactionAll:(unsigned int)arg1;
- (void)cancelPurchase:(id)arg1 verifyType:(int)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)GetProduct:(id)arg1;
- (BOOL)cannotPurchaseDuetoJailbreakPlugin:(BOOL)arg1;
- (long long)Purchase:(id)arg1 extInfo:(id)arg2 NeedCheckJailBreak:(BOOL)arg3;
- (long long)Purchase:(id)arg1 extInfo:(id)arg2;
- (long long)RestoreCompletedTransactionsNeedCheckJailBreak:(BOOL)arg1;
- (long long)RestoreCompletedTransactions;
- (BOOL)FinishTransaction:(id)arg1;
- (void)finishTransactionForTransactionID:(id)arg1;
- (void)onVerifyPurchaseForPurchase:(id)arg1 request:(id)arg2 IapRet:(long long)arg3;
- (void)restoreNextTransaction:(id)arg1;
- (void)onVerifyPurchaseForRestore:(id)arg1 request:(id)arg2;
- (void)onVerifyPurchase:(id)arg1;
- (void)onPreparePurchase:(id)arg1;
- (long long)covertErrcode:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_jailBreakHelper;
- (void)setM_jailBreakHelper:(id)arg1;
- (void).cxx_destruct;
@end

