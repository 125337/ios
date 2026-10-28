@interface WCOutCgiMgr : MMUserService <WCOutCouponCgiDelegate, WCOutGetProductListCgiDelegate, MMServiceProtocol>
{
    WCOutCouponCgi * _couponCgi; // +0x8
    WCOutGetProductListCgi * _getproductlistCgi; // +0x10
}
- (void)requestCoupon:(unsigned int)arg1;
- (void)requestProductList:(id)arg1 reqCurrency:(id)arg2;
- (void)WCOutCounponCgi:(id)arg1 successWithResponse:(id)arg2;
- (void)WCOutCounponCgiDidFail:(id)arg1;
- (void)WCOutGetProductListCgi:(id)arg1 successWithResponse:(id)arg2;
- (void)WCOutGetProductListCgiDidFail:(id)arg1;
- (id)couponCgi;
- (void)setCouponCgi:(id)arg1;
- (id)getproductlistCgi;
- (void)setGetproductlistCgi:(id)arg1;
- (void).cxx_destruct;
@end
