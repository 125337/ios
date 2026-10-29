@interface MultiTalkMessageCellView : BaseMessageCellView <ChatBackgroundExt>
{
    UIView * m_backgroundImageView; // +0x28
    UIView * m_highlightMaskView; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)needUpdateLightStyle;
- (void)layoutContentView;
- (BOOL)canCellShowOperationMenu;
- (BOOL)autoHighlight;
- (void)setHighlighted:(BOOL)arg1;
- (id)generateOperationMenu;
- (void)onChatBackgroundChanged:(id)arg1;
- (void).cxx_destruct;
@end
