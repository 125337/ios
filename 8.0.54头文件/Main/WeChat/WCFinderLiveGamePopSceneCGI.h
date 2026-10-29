@interface WCFinderLiveGamePopSceneCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    NSString * _gameAppId; // +0x20
    long long _scene; // +0x28
    long long _result; // +0x30
}
- (id)initWithScene:(long long)arg1 result:(long long)arg2 liveTaskId:(id)arg3 finderDataItem:(id)arg4 gameAppId:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)result;
- (void)setResult:(long long)arg1;
- (void).cxx_destruct;
@end

