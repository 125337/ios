@interface MMFinderLiveFeedStreamCarouselProductHotSellingItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo * _hotSellingBubble; // +0x10
    FeedsPreviewLiveMultiStyleInfo_StyleTwelve * _hotSellingStyleConf; // +0x18
}
- (unsigned long long)type;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)hotSellingBubble;
- (void)setHotSellingBubble:(id)arg1;
- (id)hotSellingStyleConf;
- (void)setHotSellingStyleConf:(id)arg1;
- (void).cxx_destruct;
@end

