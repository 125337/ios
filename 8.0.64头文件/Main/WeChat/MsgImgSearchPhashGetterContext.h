@interface MsgImgSearchPhashGetterContext : NSObject
{
    BOOL _isForbidSearch; // +0x8
    CMessageWrap * _messageWrap; // +0x10
    UIImage * _image; // +0x18
    unsigned long long _sessionID; // +0x20
    MsgImgSearchPhashMemCache * _phashMemCache; // +0x28
    id /* block */ _completionBlock; // +0x30
}
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
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
