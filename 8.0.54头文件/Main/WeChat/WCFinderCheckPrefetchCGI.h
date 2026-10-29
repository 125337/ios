@interface WCFinderCheckPrefetchCGI : WCFinderBaseCgi
{
    int _prefetchType; // +0x8
    int _commentScene; // +0xc
    NSMutableArray * _tidList; // +0x10
    NSData * _lastBuffer; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithTidList:(id)arg1 lastBuffer:(id)arg2 prefetchType:(int)arg3 scene:(int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)tidList;
- (void)setTidList:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (int)prefetchType;
- (void)setPrefetchType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end

