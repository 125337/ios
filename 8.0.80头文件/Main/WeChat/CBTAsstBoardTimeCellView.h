@interface CBTAsstBoardTimeCellView : CBTAsstBoardBaseCellView
{
    UILabel * _timeLabel; // +0x8
}
+ (id)timeFont;
+ (double)cellHeight;
- (BOOL)disablesLongPressMenu;
- (BOOL)disablesMultiSelect;
- (BOOL)needsLeftShiftForSelectMode;
- (UIEdgeInsets)mainContainerInset;
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end
