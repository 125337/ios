@interface MMFinderLiveGenericPaymentItem : NSObject
{
    unsigned int _type; // +0x8
    unsigned long long _price; // +0x10
    NSString * _name; // +0x18
    NSString * _desc; // +0x20
    NSString * _additionalDesc; // +0x28
    NSString * _payButtonTitle; // +0x30
}
+ (id)paymentItemWithName:(id)arg1 price:(unsigned long long)arg2 type:(unsigned int)arg3 desc:(id)arg4 additionalDesc:(id)arg5 payTitle:(id)arg6;
- (unsigned long long)price;
- (void)setPrice:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)additionalDesc;
- (void)setAdditionalDesc:(id)arg1;
- (id)payButtonTitle;
- (void)setPayButtonTitle:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

