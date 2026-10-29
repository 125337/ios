@interface MMFinderLiveFeedStreamCarouselBuyTogetherItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_BuyTogetherInfo * _buyTogetherBubble; // +0x10
}
- (unsigned long long)cellType;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)buyTogetherBubble;
- (void)setBuyTogetherBubble:(id)arg1;
- (void).cxx_destruct;
@end
