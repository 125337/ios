@interface WCPayQRCodeCollectionFixedAmountData : NSObject
{
    BOOL _payerDescRequired; // +0x8
    NSString * _QRCodeURL; // +0x10
    NSString * _desc; // +0x18
    long long _amount; // +0x20
    NSString * _payerDescPlaceholder; // +0x28
}
- (void)reset;
- (id)QRCodeURL;
- (void)setQRCodeURL:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (long long)amount;
- (void)setAmount:(long long)arg1;
- (BOOL)payerDescRequired;
- (void)setPayerDescRequired:(BOOL)arg1;
- (id)payerDescPlaceholder;
- (void)setPayerDescPlaceholder:(id)arg1;
- (void).cxx_destruct;
@end

