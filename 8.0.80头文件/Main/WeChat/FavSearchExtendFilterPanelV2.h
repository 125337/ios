@interface FavSearchExtendFilterPanelV2 : MMUIView <UIScrollViewDelegate, ContactTagNameEditViewControllerDelegate, MMMenuControllerExt>
{
    MMScrollView * m_scrollView; // +0x8
    MMUIView * m_contentView; // +0x10
    CAGradientLayer * m_scrollFadeMaskLayer; // +0x18
    NSArray * m_quickFilters; // +0x20
    NSSet * m_quickFilterSelectedNames; // +0x28
    NSArray * m_types; // +0x30
    NSString * m_typeTitle; // +0x38
    NSString * m_selectedType; // +0x40
    NSMutableArray * m_tags; // +0x48
    NSMutableArray * m_selectedTags; // +0x50
    NSString * m_tagTitle; // +0x58
    double m_titleHeight; // +0x60
    NSString * m_editingTag; // +0x68
    double m_panelHeight; // +0x70
    id <FavSearchExtendFilterPanelDelegate> _delegate; // +0x78
    double _panelAnchorTopY; // +0x80
}
- (id)initWithWidth:(double)arg1;
- (id)initWithSize:(double)arg1 height:(double)arg2;
- (void)commonInit;
- (void)layoutSubviews;
- (void)updateBottomFadeOverlay;
- (void)updateWithWidth:(double)arg1;
- (void)setQuickFilters:(id)arg1;
- (void)setQuickFilterSelectedNames:(id)arg1;
- (void)setTags:(id)arg1 withTitle:(id)arg2;
- (void)setTag:(id)arg1 selected:(BOOL)arg2;
- (void)selectType:(id)arg1;
- (void)setTypes:(id)arg1 withTitle:(id)arg2;
- (void)cancelType;
- (void)clearSelection;
- (void)resetScrollPosition;
- (double)maxChipLineWidth;
- (double)maxPanelHeightForCurrentLayout;
- (void)rebuildContent;
- (double)layoutChipGridWithRows:(id)arg1 selectedTitles:(id)arg2 leftInset:(double)arg3 topInset:(double)arg4 maxLineWidth:(double)arg5 chipClickAction:(SEL)arg6 longPressChipAction:(SEL)arg7 enableLongPress:(BOOL)arg8;
- (double)addCloseButtonRowAtTop:(double)arg1;
- (double)addSectionHeaderWithTitle:(id)arg1 iconName:(id)arg2 top:(double)arg3;
- (id)titleForChip:(id)arg1;
- (void)onQuickChipClick:(id)arg1;
- (void)onTypeChipClick:(id)arg1;
- (void)onTagChipClick:(id)arg1;
- (void)onLongPressChip:(id)arg1;
- (void)showMenuOnChip:(id)arg1;
- (void)clearLongPressHighlight;
- (BOOL)canBecomeFirstResponder;
- (void)renameTag:(id)arg1;
- (void)deleteTag:(id)arg1;
- (void)onHidePanel:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2;
- (void)updateEditingTagTo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)panelAnchorTopY;
- (void)setPanelAnchorTopY:(double)arg1;
- (void).cxx_destruct;
@end
