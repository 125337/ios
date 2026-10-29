@interface EcsFinderFeedPopupView : UIView
{
    EcsFinderFeedPopupViewModel * _dataVM; // +0x8
    UICollectionView * _collectionView; // +0x10
    EcsFinderFeedPopupAngel * _angel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDataVM:(id)arg1;
- (void)setupUI;
- (id)dataVM;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (void).cxx_destruct;
@end
