@interface EcsKfProductInfo : NSObject <NSCopying>
{
    BOOL _isPriceBeginShow; // +0x8
    unsigned long long _productId; // +0x10
    NSString * _title; // +0x18
    NSString * _coverUrl; // +0x20
    unsigned long long _sellingPrice; // +0x28
    unsigned long long _marketPrice; // +0x30
    NSString * _maskPriceWording; // +0x38
    NSString * _discountWording; // +0x40
    NSString * _priceSuffixDescription; // +0x48
    NSString * _firstGuaranteeWording; // +0x50
    NSString * _secondGuaranteeWording; // +0x58
    NSString * _thirdGuaranteeWording; // +0x60
    NSString * _platformName; // +0x68
    NSString * _platformLogoURL; // +0x70
    NSString * _platformHeadImg; // +0x78
    NSString * _brandIconUrl; // +0x80
    NSString * _isWxShop; // +0x88
    NSString * _appId; // +0x90
    NSString * _pagePath; // +0x98
    EcsRichLabel * _richLabelTitle; // +0xa0
    NSArray * _showBoxItemList; // +0xa8
    EcsJumpInfo * _jumpInfo; // +0xb0
}
- (id)init;
- (BOOL)isValid;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (unsigned long long)sellingPrice;
- (void)setSellingPrice:(unsigned long long)arg1;
- (unsigned long long)marketPrice;
- (void)setMarketPrice:(unsigned long long)arg1;
- (BOOL)isPriceBeginShow;
- (void)setIsPriceBeginShow:(BOOL)arg1;
- (id)maskPriceWording;
- (void)setMaskPriceWording:(id)arg1;
- (id)discountWording;
- (void)setDiscountWording:(id)arg1;
- (id)priceSuffixDescription;
- (void)setPriceSuffixDescription:(id)arg1;
- (id)firstGuaranteeWording;
- (void)setFirstGuaranteeWording:(id)arg1;
- (id)secondGuaranteeWording;
- (void)setSecondGuaranteeWording:(id)arg1;
- (id)thirdGuaranteeWording;
- (void)setThirdGuaranteeWording:(id)arg1;
- (id)platformName;
- (void)setPlatformName:(id)arg1;
- (id)platformLogoURL;
- (void)setPlatformLogoURL:(id)arg1;
- (id)platformHeadImg;
- (void)setPlatformHeadImg:(id)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (id)isWxShop;
- (void)setIsWxShop:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)richLabelTitle;
- (void)setRichLabelTitle:(id)arg1;
- (id)showBoxItemList;
- (void)setShowBoxItemList:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
