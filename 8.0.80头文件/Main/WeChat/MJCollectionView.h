@interface MJCollectionView : UICollectionView
{
    id /* block */ _completion; // +0x8
}
- (void)layoutSubviews;
- (void)reloadDataCompletion:(id /* block */)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
