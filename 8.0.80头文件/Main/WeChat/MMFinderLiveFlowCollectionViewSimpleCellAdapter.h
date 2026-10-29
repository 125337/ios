@interface MMFinderLiveFlowCollectionViewSimpleCellAdapter : MMFinderLiveFlowCollectionViewCellAdapter
{
    NSString * _reuseIdentifier; // +0x8
    UIView * _view; // +0x10
    CGSize _size; // +0x18
}
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
