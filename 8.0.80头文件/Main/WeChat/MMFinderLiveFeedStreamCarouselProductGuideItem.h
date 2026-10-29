@interface MMFinderLiveFeedStreamCarouselProductGuideItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    BOOL _showRecommendTag; // +0x10
    FinderWindowProductInfo * _productInfo; // +0x18
    FeedsPreviewLiveMultiStyleInfo_StyleOne * _productGuideStyleConf; // +0x20
    NSString * _recommendTag; // +0x28
    unsigned long long _tagType; // +0x30
}
- (unsigned long long)cellType;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)productGuideStyleConf;
- (void)setProductGuideStyleConf:(id)arg1;
- (BOOL)showRecommendTag;
- (void)setShowRecommendTag:(BOOL)arg1;
- (id)recommendTag;
- (void)setRecommendTag:(id)arg1;
- (unsigned long long)tagType;
- (void)setTagType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
