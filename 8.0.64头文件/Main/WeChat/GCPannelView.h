@interface GCPannelView : UIView
{
    UILabel * _titleLabel; // +0x8
    UIButton * _leftDownBtn; // +0x10
    id <GCPannelProtocol> _pannelDelegate; // +0x18
    UIView * _titleView; // +0x20
    UICollectionView * _bottomCollectionView; // +0x28
    GCLabelDynamicLayout * _itemLabelLayout; // +0x30
    GCCollectionViewManager * _clvManager; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithPannelItems:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)leftDownBtn;
- (void)setLeftDownBtn:(id)arg1;
- (id)pannelDelegate;
- (void)setPannelDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)bottomCollectionView;
- (void)setBottomCollectionView:(id)arg1;
- (id)itemLabelLayout;
- (void)setItemLabelLayout:(id)arg1;
- (id)clvManager;
- (void)setClvManager:(id)arg1;
- (void).cxx_destruct;
@end
