@interface WCSClientNetVVVHelper : NSObject <SKPaymentTransactionObserver>
{
    NSString * _asid; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)paymentQueueDidChangeStorefront:(id)arg1;
- (void)dealloc;
- (id)asid;
- (void)setAsid:(id)arg1;
- (void).cxx_destruct;
@end
