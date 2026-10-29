@interface WCFinderPaymentBottomViewConfig : NSObject
{
    NSString * _priceDescription; // +0x8
    NSString * _confirmButtonTitle; // +0x10
    unsigned long long _price; // +0x18
}
+ (id)configWithPaidCollectionInfo:(id)arg1;
- (id)priceDescription;
- (void)setPriceDescription:(id)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (unsigned long long)price;
- (void)setPrice:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
