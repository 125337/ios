@interface _TtC11SwiftyMidas46AppleOriginalStoreKitGlobalTransactionObserver : NSObject <SKPaymentTransactionObserver>
{
     pendingHandleTransactions; // +0x8
     paymentReceiver; // +0x10
     restoreReceiver; // +0x38
     hasRegisteredOriginalStoreKitObserver; // +0x60
     promotedCallbackProductId; // +0x68
}
- (BOOL)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)paymentQueueDidChangeStorefront:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
