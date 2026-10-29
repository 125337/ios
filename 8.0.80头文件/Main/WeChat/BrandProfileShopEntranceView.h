@interface BrandProfileShopEntranceView : UIView
{
    BOOL _layoutCacheValid; // +0x8
    id /* block */ _onClickForEcsJumpInfo; // +0x10
    UIView * _contentView; // +0x18
    BrandProfileProductCardView * _productCardView; // +0x20
    BrandProfileShopCardView * _shopCardView; // +0x28
    GetProfileEcCardResp * _profileResp; // +0x30
    NSData * _lastEntranceData; // +0x38
    double _cachedLayoutWidth; // +0x40
    double _cachedShopCardHeight; // +0x48
    double _cachedProductCardHeight; // +0x50
    double _cachedTotalHeight; // +0x58
}
- (void)updateProfileRespWithData:(id)arg1;
- (void)invalidateLayoutCache;
- (void)updateLayoutCacheForWidth:(double)arg1;
- (id)initWithEntranceData:(id)arg1;
- (id)reportParams:(int)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)onShopCardClicked;
- (void)onProductCardClicked;
- (void)updateWithEntranceData:(id)arg1;
- (double)estimateHeight;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id /* block */)onClickForEcsJumpInfo;
- (void)setOnClickForEcsJumpInfo:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)productCardView;
- (void)setProductCardView:(id)arg1;
- (id)shopCardView;
- (void)setShopCardView:(id)arg1;
- (id)profileResp;
- (void)setProfileResp:(id)arg1;
- (id)lastEntranceData;
- (void)setLastEntranceData:(id)arg1;
- (double)cachedLayoutWidth;
- (void)setCachedLayoutWidth:(double)arg1;
- (double)cachedShopCardHeight;
- (void)setCachedShopCardHeight:(double)arg1;
- (double)cachedProductCardHeight;
- (void)setCachedProductCardHeight:(double)arg1;
- (double)cachedTotalHeight;
- (void)setCachedTotalHeight:(double)arg1;
- (BOOL)layoutCacheValid;
- (void)setLayoutCacheValid:(BOOL)arg1;
- (void).cxx_destruct;
@end
