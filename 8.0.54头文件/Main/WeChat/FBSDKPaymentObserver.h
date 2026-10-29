@interface FBSDKPaymentObserver : NSObject <SKPaymentTransactionObserver>
{
    BOOL _observingTransactions; // +0x8
}
+ (void)startObservingTransactions;
+ (void)stopObservingTransactions;
+ (id)singleton;
- (id)init;
- (void)startObservingTransactions;
- (void)stopObservingTransactions;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)handleTransaction:(id)arg1;
@end

