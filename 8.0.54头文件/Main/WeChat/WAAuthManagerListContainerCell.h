@interface WAAuthManagerListContainerCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    WAAuthManagerListContainerViewModel * _viewDataModel; // +0x8
    UICollectionView * _collectionView; // +0x10
    ZZFLEXAngel * _angel; // +0x18
    UIView * _maskView; // +0x20
}
+ (double)viewHeightByDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setViewDataModel:(id)arg1;
- (void)updateMaskView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewDataModel;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void).cxx_destruct;
@end

