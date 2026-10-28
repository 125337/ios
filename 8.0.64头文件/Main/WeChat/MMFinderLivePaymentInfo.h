@interface MMFinderLivePaymentInfo : NSObject
{
    unsigned int _paidAmountInWecoin; // +0x8
    FinderLiveContact * _liveContact; // +0x10
    WCFinderContact * _refContact; // +0x18
    unsigned long long _paidTime; // +0x20
}
+ (id)convertFromGainsInfoList:(id)arg1;
- (id)initWithPaymentGainsInfo:(id)arg1;
- (id)description;
- (id)liveContact;
- (void)setLiveContact:(id)arg1;
- (id)refContact;
- (void)setRefContact:(id)arg1;
- (unsigned int)paidAmountInWecoin;
- (void)setPaidAmountInWecoin:(unsigned int)arg1;
- (unsigned long long)paidTime;
- (void)setPaidTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
