@interface ChatBotCardMessageViewModel : CommonMessageViewModel <CBTAsstBoardBaseViewModelDelegate>
{
    unsigned int _chatBotCardMsgType; // +0x70
    CBTAsstCardWrap * _cardWrap; // +0x78
    double _cachedCardHeight; // +0x80
    CBTAsstBoardBaseViewModel * _boardViewModel; // +0x88
    WAAgentCardRecycleManager * _recycleManager; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (void)parseCardData;
- (double)cardContentWidth;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)bubbleWidthForReplyText;
- (double)calculateCardHeightWithWidth:(double)arg1;
- (void)ensureBoardViewModelCreated;
- (void)onNeedMagicBrushCardEnv;
- (id)agentRuntimeSceneInstanceHandleForViewModel:(id)arg1;
- (id)magicBrushRecycleManagerForViewModel:(id)arg1;
- (void)onNeedUpdateViewModel:(id)arg1;
- (id)cardWrap;
- (void)setCardWrap:(id)arg1;
- (unsigned int)chatBotCardMsgType;
- (void)setChatBotCardMsgType:(unsigned int)arg1;
- (double)cachedCardHeight;
- (void)setCachedCardHeight:(double)arg1;
- (id)boardViewModel;
- (void)setBoardViewModel:(id)arg1;
- (id)recycleManager;
- (void)setRecycleManager:(id)arg1;
- (void).cxx_destruct;
@end
