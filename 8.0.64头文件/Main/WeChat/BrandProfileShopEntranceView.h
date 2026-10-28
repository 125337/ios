@interface BrandProfileShopEntranceView : UIView
{
    id /* block */ _onClickForEcsJumpInfo; // +0x8
    UIView * _contentView; // +0x10
    BrandProfileProductCardView * _productCardView; // +0x18
    BrandProfileShopCardView * _shopCardView; // +0x20
    GetProfileEcCardResp * _profileResp; // +0x28
}
- (void)updateProfileRespWithData:(id)arg1;
- (id)initWithEntranceData:(id)arg1;
- (id)reportParams:(int)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)onShopCardClicked;
- (void)onProductCardClicked;
- (void)updateWithEntranceData:(id)arg1;
- (double)estimateHeight;
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
- (void).cxx_destruct;
@end
