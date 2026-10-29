@interface FinderWindowProductInfo : WXPBGeneratedMessage <WCFinderLiveLogReportValueProvider>
+ (void)initialize;
- (id)idUnit;
- (unsigned long long)platformType;
- (BOOL)isFinderMiniShop;
- (BOOL)isBrandMiniShop;
- (BOOL)isNormalThirdParty;
- (BOOL)isThirdParty;
- (id)currentSellingPriceString;
- (id)currentSellingPriceDescription;
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
