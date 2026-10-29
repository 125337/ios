@interface MainFrameAggregationCell : NewMainFrameCell <IMainFrameCellExt>
{
    MainFrameItemView * _itemView; // +0x70
    MainFrameCellData * _cellData; // +0x78
}
- (double)menuAnimateDuration;
- (id)menuAnimateTimingFunction;
- (void)updateCellData:(id)arg1 tableViewFrame:(CGRect)arg2;
- (void)updateMoreMenu:(id)arg1;
- (void)setArrMenuItems:(id)arg1;
- (id)itemView;
- (void)setItemView:(id)arg1;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (void).cxx_destruct;
@end
