@interface WCFinderDelGlobalFavCgi : WCFinderBaseCgi
{
    int _favType; // +0x8
    NSString * _feedId; // +0x10
    unsigned long long _collectionId; // +0x18
    id /* block */ _sucBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithDelGlobalFeedId:(id)arg1 collectionId:(unsigned long long)arg2 favType:(int)arg3 sucBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)logKey;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (unsigned long long)collectionId;
- (void)setCollectionId:(unsigned long long)arg1;
- (int)favType;
- (void)setFavType:(int)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
