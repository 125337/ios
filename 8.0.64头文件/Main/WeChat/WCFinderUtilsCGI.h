@interface WCFinderUtilsCGI : WCFinderBaseCgi
{
    BOOL _isLiveArticle; // +0x8
    int _cmdId; // +0xc
    NSString * _username; // +0x10
    unsigned long long _parseUtilType; // +0x18
    NSString * _parseUrl; // +0x20
    NSData * _cmdBuf; // +0x28
    NSData * _lastBuffer; // +0x30
    id /* block */ _sucBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithUsername:(id)arg1 parseUtilType:(unsigned long long)arg2 parseUrl:(id)arg3 liveArticile:(BOOL)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithUsername:(id)arg1 cmdId:(int)arg2 cmdBuf:(id)arg3 lastBuffer:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)parseUtilType;
- (void)setParseUtilType:(unsigned long long)arg1;
- (id)parseUrl;
- (void)setParseUrl:(id)arg1;
- (BOOL)isLiveArticle;
- (void)setIsLiveArticle:(BOOL)arg1;
- (int)cmdId;
- (void)setCmdId:(int)arg1;
- (id)cmdBuf;
- (void)setCmdBuf:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
