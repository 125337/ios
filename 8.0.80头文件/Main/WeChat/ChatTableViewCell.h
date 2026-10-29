@interface ChatTableViewCell : MultiSelectTableViewCell
{
    BaseChatCellView * m_cellView; // +0x18
    BOOL m_willBeDisplayed; // +0x20
    BOOL m_didEndDisplayed; // +0x21
    id /* block */ _m_accessibilityElementsHiddenBlock; // +0x28
    UIView * _selectionHighlightView; // +0x30
}
- (void)setViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)willBeDisplayed;
- (void)didEndDisplayed;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)accessibilityElementsHidden;
- (void)setHidden:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setSelectionHighlighHidden:(BOOL)arg1 animate:(BOOL)arg2;
- (void)enumerateCurrentMsgCells:(id /* block */)arg1;
- (id)cellView;
- (id /* block */)m_accessibilityElementsHiddenBlock;
- (void)setM_accessibilityElementsHiddenBlock:(id /* block */)arg1;
- (id)selectionHighlightView;
- (void)setSelectionHighlightView:(id)arg1;
- (void).cxx_destruct;
@end
