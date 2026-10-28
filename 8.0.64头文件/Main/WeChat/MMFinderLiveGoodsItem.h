@interface MMFinderLiveGoodsItem : NSObject <WCFinderLiveLogReportValueProvider, NSCopying>
{
    BOOL _isFlashSale; // +0x8
    BOOL _hasRequestUpdateUrl; // +0x9
    unsigned int _platformId; // +0xc
    unsigned int _stock; // +0x10
    unsigned int _status; // +0x14
    FinderWindowProductInfo * _finderWindowProductInfo; // +0x18
    NSString * _platformName; // +0x20
    unsigned long long _productId; // +0x28
    NSString * _title; // +0x30
    NSString * _imgUrl; // +0x38
    NSArray * _imgUrls; // +0x40
    double _marketPrice; // +0x48
    double _sellingPrice; // +0x50
    NSString * _buttonWording; // +0x58
    FinderWindowProductInfo_DetailPage * _halfWxAppPage; // +0x60
    FinderWindowProductInfo_DetailPage * _fullWxAppPage; // +0x68
    NSString * _appId; // +0x70
    NSString * _path; // +0x78
    NSString * _orderAppId; // +0x80
    NSString * _orderPath; // +0x88
    NSString * _extBuff; // +0x90
    NSString * _productExtData; // +0x98
    FinderLiveShopCustomerServiceInfo * _csInfo; // +0xa0
    NSMutableArray * _associatedCoupons; // +0xa8
    FinderWindowProductInfo_ExclusiveInfo * _exclusiveInfo; // +0xb0
    NSArray * _iconUrls; // +0xb8
    unsigned long long _currentLiveId; // +0xc0
    FinderWindowProductInfo_ProductReplayInfo * _productReplayInfo; // +0xc8
    NSString * _headImgUrl; // +0xd0
    NSString * _ecSource; // +0xd8
}
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)initWithFinderWindowProductInfo:(id)arg1;
- (id)initWithFinderWindowProductInfo:(id)arg1 currentLiveId:(unsigned long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromFinderWindowProductInfo:(id)arg1;
- (id)pb;
- (BOOL)hasPromotionReplay;
- (BOOL)hasExclusivePrice;
- (BOOL)enablePromotionReplayImgButton;
- (BOOL)enableAskForPromoteImgButton;
- (BOOL)isImgButtonDisabled;
- (BOOL)isImgButtonNotDisplayed;
- (id)fullWxAppPage;
- (BOOL)isFlashSale;
- (id)finderWindowProductInfo;
- (void)setFinderWindowProductInfo:(id)arg1;
- (id)platformName;
- (void)setPlatformName:(id)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (unsigned int)platformId;
- (void)setPlatformId:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)imgUrls;
- (void)setImgUrls:(id)arg1;
- (unsigned int)stock;
- (void)setStock:(unsigned int)arg1;
- (double)marketPrice;
- (void)setMarketPrice:(double)arg1;
- (double)sellingPrice;
- (void)setSellingPrice:(double)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (void)setIsFlashSale:(BOOL)arg1;
- (id)buttonWording;
- (void)setButtonWording:(id)arg1;
- (id)halfWxAppPage;
- (void)setHalfWxAppPage:(id)arg1;
- (void)setFullWxAppPage:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)orderAppId;
- (void)setOrderAppId:(id)arg1;
- (id)orderPath;
- (void)setOrderPath:(id)arg1;
- (id)extBuff;
- (void)setExtBuff:(id)arg1;
- (id)productExtData;
- (void)setProductExtData:(id)arg1;
- (id)csInfo;
- (void)setCsInfo:(id)arg1;
- (BOOL)hasRequestUpdateUrl;
- (void)setHasRequestUpdateUrl:(BOOL)arg1;
- (id)associatedCoupons;
- (void)setAssociatedCoupons:(id)arg1;
- (id)exclusiveInfo;
- (void)setExclusiveInfo:(id)arg1;
- (id)iconUrls;
- (void)setIconUrls:(id)arg1;
- (unsigned long long)currentLiveId;
- (void)setCurrentLiveId:(unsigned long long)arg1;
- (id)productReplayInfo;
- (void)setProductReplayInfo:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (void).cxx_destruct;
@end
