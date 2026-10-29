@interface GameChatMessageCellModel : GCBaseCellModel
{
    BOOL _showAsRedDot; // +0x8
    int _msgShowType; // +0xc
    NSString * _bottomText; // +0x10
    NSString * _iconUrl; // +0x18
    UIImage * _iconImage; // +0x20
    unsigned long long _redPointCnt; // +0x28
    GameLifeConversationCellDataSource * _conversationCellDataSource; // +0x30
    GameLifeConversation * _gameLifeConversation; // +0x38
    long long _conversationIndex; // +0x40
    double _lastMessageUpdateTime; // +0x48
    double _itemSpace; // +0x50
}
- (id)cellReuseIdentifier;
- (Class)bindCellClass;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)openGameCenterMsgController:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCellAlpha:(id)arg1;
- (id)bottomText;
- (void)setBottomText:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (unsigned long long)redPointCnt;
- (void)setRedPointCnt:(unsigned long long)arg1;
- (BOOL)showAsRedDot;
- (void)setShowAsRedDot:(BOOL)arg1;
- (int)msgShowType;
- (void)setMsgShowType:(int)arg1;
- (id)conversationCellDataSource;
- (void)setConversationCellDataSource:(id)arg1;
- (id)gameLifeConversation;
- (void)setGameLifeConversation:(id)arg1;
- (long long)conversationIndex;
- (void)setConversationIndex:(long long)arg1;
- (double)lastMessageUpdateTime;
- (void)setLastMessageUpdateTime:(double)arg1;
- (double)itemSpace;
- (void)setItemSpace:(double)arg1;
- (void).cxx_destruct;
@end

