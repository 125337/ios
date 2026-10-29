@interface MsgImgSearchPhashGetterContext : NSObject
{
    BOOL _isForbidSearch; // +0x8
    CMessageWrap * _messageWrap; // +0x10
    unsigned long long _sessionID; // +0x18
    MsgImgSearchPhashMemCache * _phashMemCache; // +0x20
    id /* block */ _completionBlock; // +0x28
}
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (unsigned long long)sessionID;
- (void)setSessionID:(unsigned long long)arg1;
- (id)phashMemCache;
- (void)setPhashMemCache:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (BOOL)isForbidSearch;
- (void)setIsForbidSearch:(BOOL)arg1;
- (void).cxx_destruct;
@end

