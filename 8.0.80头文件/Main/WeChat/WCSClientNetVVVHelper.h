@interface WCSClientNetVVVHelper : NSObject <SKPaymentTransactionObserver>
{
    NSString * _asid; // +0x8
    NSString * _stz; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)tzChanged:(id)arg1;
- (void)paymentQueueDidChangeStorefront:(id)arg1;
- (void)dealloc;
- (id)asid;
- (void)setAsid:(id)arg1;
- (id)stz;
- (void)setStz:(id)arg1;
- (void).cxx_destruct;
@end
