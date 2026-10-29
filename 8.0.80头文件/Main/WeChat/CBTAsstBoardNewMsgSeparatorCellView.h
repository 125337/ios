@interface CBTAsstBoardNewMsgSeparatorCellView : CBTAsstBoardBaseCellView
{
    UILabel * _titleLabel; // +0x8
    UIView * _leftLineView; // +0x10
    UIView * _rightLineView; // +0x18
}
- (BOOL)disablesLongPressMenu;
- (void)setupUI;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)leftLineView;
- (void)setLeftLineView:(id)arg1;
- (id)rightLineView;
- (void)setRightLineView:(id)arg1;
- (void).cxx_destruct;
@end
