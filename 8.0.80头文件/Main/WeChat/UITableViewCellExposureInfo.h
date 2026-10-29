@interface UITableViewCellExposureInfo : MMObject
{
    NSIndexPath * _cellViewIndexPath; // +0x8
    double _exposureRatio; // +0x10
    CGRect _intersectionRect; // +0x18
    CGRect _cellViewRect; // +0x38
}
- (id)cellViewIndexPath;
- (void)setCellViewIndexPath:(id)arg1;
- (CGRect)intersectionRect;
- (void)setIntersectionRect:(CGRect)arg1;
- (CGRect)cellViewRect;
- (void)setCellViewRect:(CGRect)arg1;
- (double)exposureRatio;
- (void)setExposureRatio:(double)arg1;
- (void).cxx_destruct;
@end
