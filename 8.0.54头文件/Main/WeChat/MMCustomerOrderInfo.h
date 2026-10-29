@interface MMCustomerOrderInfo : NSObject
{
    BOOL _expanded; // +0x8
    NSString * _orderId; // +0x10
    EcCustomerOrder * _orderBaseInfo; // +0x18
}
+ (id)convertFromProductList:(id)arg1;
+ (id)genFromGetOrderListResp:(id)arg1;
+ (id)genFromSearchOrderResp:(id)arg1;
- (id)initWithEcCustomerOrder:(id)arg1;
- (id)priceWording;
- (id)productAmountWordingOf:(id)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (id)orderBaseInfo;
- (void)setOrderBaseInfo:(id)arg1;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)arg1;
- (void).cxx_destruct;
@end

