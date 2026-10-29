@interface WCFinderGetPostPrevDataCGI : WCFinderBaseCgi
{
    int _dataType; // +0x8
    NSString * _finderUsername; // +0x10
    id /* block */ _sucBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithFinderUsername:(id)arg1 dataType:(int)arg2 sucBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

