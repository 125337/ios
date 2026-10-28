@interface BTVideoExposureItem : MMObject
{
    NSIndexPath * _cellViewIndexPath; // +0x8
    double _exposureRatio; // +0x10
    id <BTItemCellViewModelVideoPlayProtocol> _itemCellViewModelVideoPlay; // +0x18
}
- (void)calcExposureRatioWithExposureRect:(CGRect)arg1 videoRect:(CGRect)arg2;
- (id)cellViewIndexPath;
- (void)setCellViewIndexPath:(id)arg1;
- (double)exposureRatio;
- (void)setExposureRatio:(double)arg1;
- (id)itemCellViewModelVideoPlay;
- (void)setItemCellViewModelVideoPlay:(id)arg1;
- (void).cxx_destruct;
@end
