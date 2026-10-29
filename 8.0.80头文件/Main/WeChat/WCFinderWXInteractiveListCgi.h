@interface WCFinderWXInteractiveListCgi : WCFinderBaseCgi
{
    int _itemFlag; // +0x8
    long long _flag; // +0x10
    NSData * _lastBuffer; // +0x18
    NSString * _finderUsername; // +0x20
    FinderClientStatus * _status; // +0x28
    id /* block */ _sucBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithFlag:(long long)arg1 lastBuffer:(id)arg2 finderUsername:(id)arg3 status:(id)arg4 itemFlag:(int)arg5 sucBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (long long)flag;
- (void)setFlag:(long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (int)itemFlag;
- (void)setItemFlag:(int)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
