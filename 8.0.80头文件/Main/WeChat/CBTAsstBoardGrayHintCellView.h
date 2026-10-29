@interface CBTAsstBoardGrayHintCellView : CBTAsstBoardBaseCellView
{
    UILabel * _hintLabel; // +0x8
}
+ (id)hintFont;
+ (double)cellHeightForHintText:(id)arg1 width:(double)arg2;
- (BOOL)disablesLongPressMenu;
- (BOOL)disablesMultiSelect;
- (BOOL)needsLeftShiftForSelectMode;
- (UIEdgeInsets)mainContainerInset;
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (void).cxx_destruct;
@end
