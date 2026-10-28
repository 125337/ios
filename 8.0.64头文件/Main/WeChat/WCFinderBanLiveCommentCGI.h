@interface WCFinderBanLiveCommentCGI : WCFinderLiveBaseCgi
{
    BOOL _enable; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    NSString * _audienceUsername; // +0x18
    unsigned long long _scene; // +0x20
    long long _liveScene; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithDataItem:(id)arg1 audienceUsername:(id)arg2 scene:(unsigned long long)arg3 liveScene:(long long)arg4 enable:(BOOL)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)audienceUsername;
- (void)setAudienceUsername:(id)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
