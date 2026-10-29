@interface GCViewHolderCellModel : GCBaseCellModel
{
    UIView * _targetView; // +0x38
    UIEdgeInsets _edgeInsets; // +0x40
}
- (id)initWithTargetView:(id)arg1;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (id)cellReuseIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (void).cxx_destruct;
@end
