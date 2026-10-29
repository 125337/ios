@interface WCFinderGetPostRecommendWordingCGI : WCFinderBaseCgi
{
    int _scene; // +0x8
    NSData * _lastBuffer; // +0x10
    NSData * _seqBuffer; // +0x18
    FinderGetPostRecommendTitleContext * _titleContext; // +0x20
    NSString * _finderUserName; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithScene:(int)arg1 lastBuffer:(id)arg2 seqBuffer:(id)arg3 titleContext:(id)arg4 finderUserName:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)seqBuffer;
- (void)setSeqBuffer:(id)arg1;
- (id)titleContext;
- (void)setTitleContext:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

