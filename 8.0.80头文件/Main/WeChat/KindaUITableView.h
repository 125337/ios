@interface KindaUITableView : WCTableView
{
    id <KindaUITableViewDelegate> _kindaDelegate; // +0x40
    double _measureHeight; // +0x48
    long long _cellSize; // +0x50
    NSMutableDictionary * _heightAtIndexPath; // +0x58
    KindaTableViewCell * _measureCell; // +0x60
    CGRect _oldRect; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)setKindaDelegate:(id)arg1;
- (void)setCellSize:(long long)arg1;
- (void)reloadData;
- (CGRect)oldRect;
- (void)setOldRect:(CGRect)arg1;
- (id)heightAtIndexPath;
- (void)setHeightAtIndexPath:(id)arg1;
- (id)measureCell;
- (void)setMeasureCell:(id)arg1;
- (void).cxx_destruct;
@end
