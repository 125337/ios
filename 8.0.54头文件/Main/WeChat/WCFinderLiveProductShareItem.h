@interface WCFinderLiveProductShareItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    BOOL _isLiveEndState; // +0x8
    BOOL _isPriceBeginShow; // +0x9
    BOOL _isWxShop; // +0xa
    unsigned int _valueOfFlashSalePrice; // +0xc
    int _scene; // +0x10
    NSString * _finderLiveID; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _finderObjectID; // +0x28
    NSString * _finderNonceID; // +0x30
    NSString * _liveStatus; // +0x38
    unsigned long long _finderLiveStatus; // +0x40
    NSString * _appId; // +0x48
    NSString * _pagePath; // +0x50
    NSString * _productId; // +0x58
    NSString * _coverUrl; // +0x60
    NSString * _productTitle; // +0x68
    NSString * _marketPrice; // +0x70
    NSString * _sellingPrice; // +0x78
    NSString * _discountWording; // +0x80
    NSString * _sellingPriceWording; // +0x88
    NSString * _platformHeadImg; // +0x90
    NSString * _platformName; // +0x98
    NSString * _shopWindowId; // +0xa0
    NSString * _platformIconURL; // +0xa8
    NSString * _promoterKey; // +0xb0
    unsigned long long _valueOfFlashSaleEndTime; // +0xb8
    NSArray * _showBoxItemList; // +0xc0
    NSString * _ecSource; // +0xc8
    NSString * _lastGMsgID; // +0xd0
    NSString * _priceSuffixDescription; // +0xd8
    NSString * _productCardKey; // +0xe0
    NSString * _brandIconUrl; // +0xe8
    NSString * _firstProductTagURL; // +0xf0
    double _firstProductTagAspectRatio; // +0xf8
    NSString * _secondProductTagURL; // +0x100
    double _secondProductTagAspectRatio; // +0x108
}
+ (void)PBArrayAdd_finderLiveID;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_finderObjectID;
+ (void)PBArrayAdd_finderNonceID;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_productTitle;
+ (void)PBArrayAdd_marketPrice;
+ (void)PBArrayAdd_sellingPrice;
+ (void)PBArrayAdd_platformHeadImg;
+ (void)PBArrayAdd_platformName;
+ (void)PBArrayAdd_shopWindowId;
+ (void)PBArrayAdd_liveStatus;
+ (void)PBArrayAdd_valueOfFlashSalePrice;
+ (void)PBArrayAdd_valueOfFlashSaleEndTime;
+ (void)PBArrayAdd_ecSource;
+ (void)PBArrayAdd_sellingPriceWording;
+ (void)PBArrayAdd_platformIconURL;
+ (void)PBArrayAdd_firstProductTagURL;
+ (void)PBArrayAdd_firstProductTagAspectRatio;
+ (void)PBArrayAdd_secondProductTagURL;
+ (void)PBArrayAdd_secondProductTagAspectRatio;
+ (void)PBArrayAdd_isPriceBeginShow;
+ (void)PBArrayAdd_lastGMsgID;
+ (void)PBArrayAdd_discountWording;
+ (void)PBArrayAdd_promoterKey;
+ (void)PBArrayAdd_showBoxItemList;
+ (void)PBArrayAdd_priceSuffixDescription;
+ (void)PBArrayAdd_productCardKey;
+ (void)PBArrayAdd_isWxShop;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)initialize;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithScene:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)genFinderDataItem;
- (id)liveStatus;
- (unsigned long long)finderLiveStatus;
- (BOOL)isLiveEndState;
- (id)flashSaleEndTime;
- (id)flashSalePrice;
- (void)setFlashSalePrice:(id)arg1;
- (void)setFlashSaleEndTime:(id)arg1;
- (BOOL)hasLimitDiscount;
- (id)firstProductTagAspectRatioString;
- (id)secondProductTagAspectRatioString;
- (void)setFirstProductTagAspectRatioString:(id)arg1;
- (void)setSecondProductTagAspectRatioString:(id)arg1;
- (void)setProductTags:(id)arg1;
- (id)productTags;
- (void)setShowBoxItemStringList:(id)arg1;
- (id)showBoxItemStringList;
- (id)finderLiveID;
- (void)setFinderLiveID:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderObjectID;
- (void)setFinderObjectID:(id)arg1;
- (id)finderNonceID;
- (void)setFinderNonceID:(id)arg1;
- (void)setLiveStatus:(id)arg1;
- (void)setFinderLiveStatus:(unsigned long long)arg1;
- (void)setIsLiveEndState:(BOOL)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)productTitle;
- (void)setProductTitle:(id)arg1;
- (id)marketPrice;
- (void)setMarketPrice:(id)arg1;
- (id)sellingPrice;
- (void)setSellingPrice:(id)arg1;
- (id)discountWording;
- (void)setDiscountWording:(id)arg1;
- (id)sellingPriceWording;
- (void)setSellingPriceWording:(id)arg1;
- (id)platformHeadImg;
- (void)setPlatformHeadImg:(id)arg1;
- (id)platformName;
- (void)setPlatformName:(id)arg1;
- (id)shopWindowId;
- (void)setShopWindowId:(id)arg1;
- (id)platformIconURL;
- (void)setPlatformIconURL:(id)arg1;
- (id)promoterKey;
- (void)setPromoterKey:(id)arg1;
- (unsigned int)valueOfFlashSalePrice;
- (void)setValueOfFlashSalePrice:(unsigned int)arg1;
- (unsigned long long)valueOfFlashSaleEndTime;
- (void)setValueOfFlashSaleEndTime:(unsigned long long)arg1;
- (id)showBoxItemList;
- (void)setShowBoxItemList:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)isPriceBeginShow;
- (void)setIsPriceBeginShow:(BOOL)arg1;
- (id)priceSuffixDescription;
- (void)setPriceSuffixDescription:(id)arg1;
- (id)productCardKey;
- (void)setProductCardKey:(id)arg1;
- (BOOL)isWxShop;
- (void)setIsWxShop:(BOOL)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (id)firstProductTagURL;
- (void)setFirstProductTagURL:(id)arg1;
- (double)firstProductTagAspectRatio;
- (void)setFirstProductTagAspectRatio:(double)arg1;
- (id)secondProductTagURL;
- (void)setSecondProductTagURL:(id)arg1;
- (double)secondProductTagAspectRatio;
- (void)setSecondProductTagAspectRatio:(double)arg1;
- (void).cxx_destruct;
@end

