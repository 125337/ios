@interface EcsFinderFeedSingleProductView : EcsFinderFeedSingleProductBaseView <IEcsFinderFeedProductView>
{
    id <EcsFinderFeedSingleProductViewDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    EcsFinderFeedSingleProductHeaderView * _headerView; // +0x18
    EcsFinderFeedSingleProductGradientBgView * _bgView; // +0x20
    EcsFinderFeedSingleProductCardView * _cardView; // +0x28
    EcsFinderFeedSingleProductBar * _bottomBar; // +0x30
    EcsFinderFeedSingleProductByeView * _byeView; // +0x38
    EcsFinderFeedSingleProductLogoView * _logoView; // +0x40
    UIView * _spaceA; // +0x48
    UIView * _spaceB; // +0x50
    UIView * _spaceC; // +0x58
}
- (void)setDataVM:(id)arg1;
- (void)setupUI;
- (void)updateSpaceView;
- (void)onClickProductInfoWithClickType:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)byeView;
- (void)setByeView:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)spaceA;
- (void)setSpaceA:(id)arg1;
- (id)spaceB;
- (void)setSpaceB:(id)arg1;
- (id)spaceC;
- (void)setSpaceC:(id)arg1;
- (void).cxx_destruct;
@end
