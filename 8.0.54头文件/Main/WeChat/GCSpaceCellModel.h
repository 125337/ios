@interface GCSpaceCellModel : GCBaseCellModel
{
    UIColor * _backgroundColor; // +0x38
    double _cellHeight; // +0x40
}
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (id)cellReuseIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (void).cxx_destruct;
@end

