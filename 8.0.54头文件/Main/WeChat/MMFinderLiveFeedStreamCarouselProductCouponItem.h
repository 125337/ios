@interface MMFinderLiveFeedStreamCarouselProductCouponItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo * _couponBubble; // +0x10
    FeedsPreviewLiveMultiStyleInfo_StyleTwelve * _couponStyleConf; // +0x18
}
- (unsigned long long)type;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)couponBubble;
- (void)setCouponBubble:(id)arg1;
- (id)couponStyleConf;
- (void)setCouponStyleConf:(id)arg1;
- (void).cxx_destruct;
@end

