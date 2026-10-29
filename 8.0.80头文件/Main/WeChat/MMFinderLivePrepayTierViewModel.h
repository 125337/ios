@interface MMFinderLivePrepayTierViewModel : NSObject
{
    BOOL _isPaid; // +0x8
    unsigned int _businessType; // +0xc
    NSString * _title; // +0x10
    unsigned long long _pricing; // +0x18
    NSArray * _benefits; // +0x20
    NSString * _buttonLabel; // +0x28
    FinderLiveGetPaymentItemsResponse_Product * _paymentItem; // +0x30
    NSString * _backgroundImgUrl; // +0x38
    NSData * _productExtInfo; // +0x40
    NSMutableArray * _textColorValue; // +0x48
}
- (id)initWithPaymentItem:(id)arg1;
- (BOOL)isFree;
- (unsigned int)productId;
- (unsigned int)rewardType;
- (id)rewardExtInfo;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)pricing;
- (void)setPricing:(unsigned long long)arg1;
- (BOOL)isPaid;
- (void)setIsPaid:(BOOL)arg1;
- (id)benefits;
- (void)setBenefits:(id)arg1;
- (id)buttonLabel;
- (void)setButtonLabel:(id)arg1;
- (id)paymentItem;
- (void)setPaymentItem:(id)arg1;
- (id)backgroundImgUrl;
- (void)setBackgroundImgUrl:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)productExtInfo;
- (void)setProductExtInfo:(id)arg1;
- (id)textColorValue;
- (void)setTextColorValue:(id)arg1;
- (void).cxx_destruct;
@end
