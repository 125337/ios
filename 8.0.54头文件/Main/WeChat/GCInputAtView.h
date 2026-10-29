@interface GCInputAtView : UIView
{
    UICollectionView * _atCollectionView; // +0x8
    UILabel * _noResultView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsEmpty:(BOOL)arg1;
- (id)atCollectionView;
- (void)setAtCollectionView:(id)arg1;
- (id)noResultView;
- (void)setNoResultView:(id)arg1;
- (void).cxx_destruct;
@end

