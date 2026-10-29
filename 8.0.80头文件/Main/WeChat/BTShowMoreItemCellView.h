@interface BTShowMoreItemCellView : BTBaseItemCellView
{
    RichTextView * m_tipsLabel; // +0x8
    UIImageView * m_dropDownIcon; // +0x10
    UIView * m_separateLine; // +0x18
    UIView * m_highlightMaskView; // +0x20
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)initContentView;
- (void)initSubviews;
- (void)updateLabelStyles;
- (void)initHighlightMaskView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
