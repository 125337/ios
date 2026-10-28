@interface WCFinderLiveCatalogedMerchandiseLotteryGetCgi : WCFinderLiveBaseCgi
{
    NSString * _activityId; // +0x8
    NSData * _liveCookies; // +0x10
    unsigned long long _objectId; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithTaskId:(id)arg1 activityId:(id)arg2 liveCookies:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithActivityId:(id)arg1 objectId:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
