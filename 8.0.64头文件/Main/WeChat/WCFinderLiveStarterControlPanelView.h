@interface WCFinderLiveStarterControlPanelView : UIScrollView
{
    NSMutableArray * _showArray; // +0x8
    double _gap; // +0x10
    double _itemWidth; // +0x18
    double _itemHeight; // +0x20
}
- (void)addSubCell:(id)arg1;
- (void)updateGap:(double)arg1 itemWidth:(double)arg2 itemHeight:(double)arg3;
- (BOOL)updateItemCellWithTitle:(id)arg1 hidden:(BOOL)arg2;
- (void)layoutUI;
- (id)showArray;
- (void)setShowArray:(id)arg1;
- (double)gap;
- (void)setGap:(double)arg1;
- (double)itemWidth;
- (void)setItemWidth:(double)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (void).cxx_destruct;
@end
