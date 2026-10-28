@interface FinderJumpInfo : WXPBGeneratedMessage
+ (id)filterUserClosedBanner:(id)arg1;
+ (id)filterCarouselBannerList:(id)arg1;
+ (void)addUserCloseBanner:(id)arg1;
+ (BOOL)isUserCloseBanner:(id)arg1;
+ (void)initialize;
- (BOOL)isVideoTemplateJumpInfo;
- (id)genVideoTemplateData;
- (BOOL)canShowTemplateEntry;
- (id)extInfoModel;
- (BOOL)isMinifyRoomControlBanner;
- (BOOL)isCarouselBanner;
- (BOOL)isMoreLiveBanner;
- (id)lastBufferString;
@end
