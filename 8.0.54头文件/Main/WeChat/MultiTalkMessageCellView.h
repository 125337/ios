@interface MultiTalkMessageCellView : BaseMessageCellView <ChatBackgroundExt>
{
    UIImageView * m_backgroundImageView; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)needUpdateLightStyle;
- (void)layoutContentView;
- (BOOL)canCellShowOperationMenu;
- (void)onChatBackgroundChanged:(id)arg1;
- (void).cxx_destruct;
@end

