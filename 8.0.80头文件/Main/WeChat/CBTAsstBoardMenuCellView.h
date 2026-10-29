@interface CBTAsstBoardMenuCellView : CBTAsstBoardBaseCellView <CBTAsstBoardMenuItemDelegate>
{
    NSMutableArray * _menuItemViewArr; // +0x8
}
- (BOOL)disablesLongPressMenu;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)setupUI;
- (void)refreshTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (id)menuViewModel;
- (void)layoutMenuItems;
- (void)onClickMenuItem:(id)arg1;
- (void)reportActiveRecommendClick:(id)arg1;
- (id)menuItemViewArr;
- (void)setMenuItemViewArr:(id)arg1;
- (void).cxx_destruct;
@end
