@interface ilinkMultiTalkMessageCellView : BaseMessageCellView
{
    UIImageView * _bubbleView; // +0x28
    UIView * _m_highlightMaskView; // +0x30
}
- (void)layoutContentView;
- (void)onTouchUpInside;
- (BOOL)shouldLayoutIfNeeded;
- (BOOL)canCellShowOperationMenu;
- (BOOL)autoHighlight;
- (void)setHighlighted:(BOOL)arg1;
- (id)generateOperationMenu;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)m_highlightMaskView;
- (void)setM_highlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
