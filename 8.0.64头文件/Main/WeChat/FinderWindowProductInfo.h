@interface FinderWindowProductInfo : WXPBGeneratedMessage <WCFinderLiveLogReportValueProvider>
+ (void)initialize;
- (id)idUnit;
- (id)sellingPriceWording;
- (unsigned long long)platformType;
- (BOOL)isFinderMiniShop;
- (BOOL)isBrandMiniShop;
- (BOOL)isNormalThirdParty;
- (BOOL)isThirdParty;
- (id)currentProductButtonInfo;
- (id)currentPresentButtonInfo;
- (int)currentAddProductShopBagType;
- (id)limitDiscountInfo;
- (id)friendBuyInfo;
- (id)descWordInfo;
- (id)guaranteeInfo;
- (id)guaranteeInfos;
- (id)finderLiveLogReportValueForKey:(id)arg1;
@end
