@interface FinderJumpInfo : WXPBGeneratedMessage
+ (id)filterUserClosedBanner:(id)arg1;
+ (id)filterCarouselBannerList:(id)arg1;
+ (void)addUserCloseBanner:(id)arg1;
+ (BOOL)isUserCloseBanner:(id)arg1;
+ (void)initialize;
- (void)insertOrReplaceExtInfoByGoodsActivityType:(unsigned long long)arg1;
- (unsigned long long)goodsActivityType;
- (void)insertOrReplaceExtInfoByPostPageDarkUrl:(id)arg1;
- (id)postPageDarkUrl;
- (void)insertOrReplaceExtInfoByPostPageLightUrl:(id)arg1;
- (id)postPageLightUrl;
- (void)insertOrReplaceExtInfoByPostAttachLinkType:(unsigned long long)arg1;
- (unsigned long long)postAttachLinkType;
- (void)insertOrReplaceExtInfoByGoodsRawWording:(id)arg1;
- (id)goodsRawWording;
- (BOOL)isVideoTemplateJumpInfo;
- (id)genVideoTemplateData;
- (BOOL)canShowTemplateEntry;
- (id)extInfoModel;
- (BOOL)isMinifyRoomControlBanner;
- (BOOL)isCarouselBanner;
- (BOOL)isMoreLiveBanner;
- (id)lastBufferString;
@end
