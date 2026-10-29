@interface WCFinderLiveElectronicCommerceRoomConfigCGI : WCFinderLiveBaseCgi
{
    int _reqScene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    long long _scene; // +0x20
    NSString * _anchorFinderUsrName; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 scene:(long long)arg2 anchorFinderUserName:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithReqScene:(unsigned int)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (int)reqScene;
- (void)setReqScene:(int)arg1;
- (id)anchorFinderUsrName;
- (void)setAnchorFinderUsrName:(id)arg1;
- (void).cxx_destruct;
@end

