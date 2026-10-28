@interface MMFinderLiveFeedStreamCarouselProductHotSellingItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo * _hotSellingBubble; // +0x10
}
- (unsigned long long)cellType;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)hotSellingBubble;
- (void)setHotSellingBubble:(id)arg1;
- (void).cxx_destruct;
@end
