@interface RoamPackageCreateHeaderCell : UIView
{
    double _headerHeight; // +0x8
    id /* block */ _updateHeightBlock; // +0x10
}
- (void)setupWithWidth:(double)arg1;
- (double)headerHeight;
- (void)setHeaderHeight:(double)arg1;
- (id /* block */)updateHeightBlock;
- (void)setUpdateHeightBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
