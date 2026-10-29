@interface EcsTagsView : UIView
{
    EcsTagsViewModel * _tagsVM; // +0x8
    UICollectionView * _collectionView; // +0x10
    ZZFLEXAngel * _angel; // +0x18
    CGSize _viewSize; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setTagsVM:(id)arg1;
- (void)reloadData;
- (void)setupUI;
- (id)tagsVM;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (CGSize)viewSize;
- (void)setViewSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
