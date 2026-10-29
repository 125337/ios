@interface WCFinderCheckFeedsCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    NSArray * _readItems; // +0x18
    NSArray * _unreadItems; // +0x20
}
- (id)initWithReadItems:(id)arg1 unreadItems:(id)arg2 scene:(int)arg3 prefetchType:(int)arg4 lastCheckBuffer:(id)arg5 liveBaseInfo:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)readItems;
- (void)setReadItems:(id)arg1;
- (id)unreadItems;
- (void)setUnreadItems:(id)arg1;
- (void).cxx_destruct;
@end

