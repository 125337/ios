@interface ChatHistoryAuthChatScope : NSObject
{
    BOOL _restrictsQuery; // +0x8
    NSSet * _allowlist; // +0x10
    NSArray * _queryChatIds; // +0x18
    long long _topSessionsLimit; // +0x20
}
- (id)allowlist;
- (void)setAllowlist:(id)arg1;
- (BOOL)restrictsQuery;
- (void)setRestrictsQuery:(BOOL)arg1;
- (id)queryChatIds;
- (void)setQueryChatIds:(id)arg1;
- (long long)topSessionsLimit;
- (void)setTopSessionsLimit:(long long)arg1;
- (void).cxx_destruct;
@end
