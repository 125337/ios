@interface MMFinderLiveShopSelfOpenParams : NSObject
{
    BOOL _scrollToTop; // +0x8
    BOOL _openCouponPage; // +0x9
    BOOL _openHotSellingTab; // +0xa
    unsigned long long _productID; // +0x10
}
- (BOOL)scrollToTop;
- (void)setScrollToTop:(BOOL)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (BOOL)openCouponPage;
- (void)setOpenCouponPage:(BOOL)arg1;
- (BOOL)openHotSellingTab;
- (void)setOpenHotSellingTab:(BOOL)arg1;
@end

