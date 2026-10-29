@interface GCBaseCollectionViewCell : UICollectionViewCell
{
    GCBaseCellModel * _bindCellModel; // +0x8
}
+ (void)calculateLayoutIfNeed:(id)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)bindCellModel;
- (void)setBindCellModel:(id)arg1;
- (void).cxx_destruct;
@end
