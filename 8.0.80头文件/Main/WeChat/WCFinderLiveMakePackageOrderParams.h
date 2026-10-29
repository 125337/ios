@interface WCFinderLiveMakePackageOrderParams : NSObject
{
    unsigned int _targetLevel; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    unsigned long long _orderWecoinAmount; // +0x18
    NSString * _orderRequestId; // +0x20
    NSData * _liveCookies; // +0x28
    NSArray * _chooseProudctList; // +0x30
}
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned int)targetLevel;
- (void)setTargetLevel:(unsigned int)arg1;
- (unsigned long long)orderWecoinAmount;
- (void)setOrderWecoinAmount:(unsigned long long)arg1;
- (id)orderRequestId;
- (void)setOrderRequestId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)chooseProudctList;
- (void)setChooseProudctList:(id)arg1;
- (void).cxx_destruct;
@end
