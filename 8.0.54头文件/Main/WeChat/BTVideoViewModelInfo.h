@interface BTVideoViewModelInfo : MMObject
{
    BOOL _isDragging; // +0x8
    BOOL _isScrolling; // +0x9
    BOOL _isWifiOrDawang; // +0xa
    id <BTItemCellViewModelVideoPlayProtocol> _curFocusItemCellViewModelVideoPlay; // +0x10
    NSArray * _exposureItemList; // +0x18
}
- (id)findExposureItemWithIndexPath:(id)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (BOOL)isWifiOrDawang;
- (void)setIsWifiOrDawang:(BOOL)arg1;
- (id)curFocusItemCellViewModelVideoPlay;
- (void)setCurFocusItemCellViewModelVideoPlay:(id)arg1;
- (id)exposureItemList;
- (void)setExposureItemList:(id)arg1;
- (void).cxx_destruct;
@end

