@interface ChatSplitCellView : BaseChatCellView <ChatBackgroundExt>
- (BOOL)canBeReused;
- (id)initWithViewModel:(id)arg1;
- (void)layoutInternal;
- (void)onChatBackgroundChanged:(id)arg1;
@end
