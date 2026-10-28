@interface MMFinderLiveFeedStreamCarouselProductCouponItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo * _couponBubble; // +0x10
}
- (unsigned long long)cellType;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)couponBubble;
- (void)setCouponBubble:(id)arg1;
- (void).cxx_destruct;
@end
