@interface WCFinderWXInteractiveListCgi : WCFinderBaseCgi
{
    long long _flag; // +0x8
    NSData * _lastBuffer; // +0x10
    id /* block */ _sucBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithFlag:(long long)arg1 lastBuffer:(id)arg2 sucBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (long long)flag;
- (void)setFlag:(long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

