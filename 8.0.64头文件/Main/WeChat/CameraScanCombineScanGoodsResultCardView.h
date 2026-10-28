@interface CameraScanCombineScanGoodsResultCardView : UICollectionViewCell
{
    NSString * _reqKey; // +0x8
    UIView * _bgView; // +0x10
    UIImageView * _goodsSnapshotView; // +0x18
    UILabel * _goodsDescLabel; // +0x20
    UIImageView * _rightArrowView; // +0x28
    UIImageView * _loadingImageView; // +0x30
    UIView * _highlightMaskView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)applyViewModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)goodsSnapshotView;
- (void)setGoodsSnapshotView:(id)arg1;
- (id)goodsDescLabel;
- (void)setGoodsDescLabel:(id)arg1;
- (id)rightArrowView;
- (void)setRightArrowView:(id)arg1;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
