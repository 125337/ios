@interface WCAdBiddingSliderCardFlowLayout : UICollectionViewFlowLayout
{
    BOOL _hasFooter; // +0x8
    BOOL _isInitialized; // +0x9
    WCAdBiddingSliderCardStyleConfig * _config; // +0x10
    double _exposedWidthSlot1; // +0x18
    double _exposedWidthSlot2; // +0x20
    double _exposedWidthSlot3; // +0x28
    CGSize _topItemSizeInternal; // +0x30
}
+ (Class)layoutAttributesClass;
- (id)init;
- (long long)maxVisibleCards;
- (void)prepareLayout;
- (CGSize)topItemSize;
- (CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (double)spacingOffsetForVisibleIndex:(long long)arg1;
- (double)slideXForVisibleIndex:(long long)arg1 progress:(double)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)footerAttributesWithLastCard:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (double)exposedWidthSlot1;
- (void)setExposedWidthSlot1:(double)arg1;
- (double)exposedWidthSlot2;
- (void)setExposedWidthSlot2:(double)arg1;
- (double)exposedWidthSlot3;
- (void)setExposedWidthSlot3:(double)arg1;
- (BOOL)hasFooter;
- (void)setHasFooter:(BOOL)arg1;
- (CGSize)topItemSizeInternal;
- (void)setTopItemSizeInternal:(CGSize)arg1;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
