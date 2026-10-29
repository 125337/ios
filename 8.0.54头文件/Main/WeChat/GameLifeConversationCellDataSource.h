@interface GameLifeConversationCellDataSource : NSObject
{
    id <GameLifeConversationCellDataSourceDelegate> _delegate; // +0x8
    unsigned long long _currentCount; // +0x10
    MMBaseSessionStorage * _conversationStorage; // +0x18
    NSMutableDictionary * _sessionId2ViewModelDic; // +0x20
}
- (id)initWithConversationStorage:(id)arg1;
- (void)loadInitial;
- (void)reload;
- (void)checkConversationContactInitial:(long long)arg1;
- (void)loadNextPage;
- (void)loadInitialAllUnreadAndMinCnt:(long long)arg1;
- (long long)conversationCount;
- (id)conversationAtOffset:(long long)arg1 limit:(long long)arg2;
- (id)conversationAtIndex:(long long)arg1;
- (id)conversationWithSessionId:(id)arg1;
- (id)conversationCellViewModelAtIndex:(long long)arg1;
- (void)openChatAtIndex:(long long)arg1 fromNav:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentCount;
- (void)setCurrentCount:(unsigned long long)arg1;
- (id)conversationStorage;
- (void)setConversationStorage:(id)arg1;
- (id)sessionId2ViewModelDic;
- (void)setSessionId2ViewModelDic:(id)arg1;
- (void).cxx_destruct;
@end

