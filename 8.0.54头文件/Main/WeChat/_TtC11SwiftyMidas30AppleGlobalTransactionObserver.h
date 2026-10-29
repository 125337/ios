@interface _TtC11SwiftyMidas30AppleGlobalTransactionObserver : NSObject <SKPaymentTransactionObserver>
{
     pendingHandleTransactions; // +0x8
     paymentReceiver; // +0x10
     reprovideReceiver; // +0x38
     storefrontReceiver; // +0x60
     restoreReceiver; // +0x88
}
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)paymentQueueDidChangeStorefront:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

