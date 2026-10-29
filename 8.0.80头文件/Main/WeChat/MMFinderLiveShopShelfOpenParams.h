@interface MMFinderLiveShopShelfOpenParams : NSObject
{
    BOOL _scrollToTop; // +0x8
    BOOL _openCouponPage; // +0x9
    BOOL _openHotSellingTab; // +0xa
    unsigned long long _productID; // +0x10
    NSData * _ecExtraInfoBuffer; // +0x18
}
- (BOOL)scrollToTop;
- (void)setScrollToTop:(BOOL)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (BOOL)openCouponPage;
- (void)setOpenCouponPage:(BOOL)arg1;
- (BOOL)openHotSellingTab;
- (void)setOpenHotSellingTab:(BOOL)arg1;
- (id)ecExtraInfoBuffer;
- (void)setEcExtraInfoBuffer:(id)arg1;
- (void).cxx_destruct;
@end
