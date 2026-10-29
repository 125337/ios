@interface WCFinderLiveConcertTicketStyleSwitchCgi : WCFinderLiveBaseCgi
{
    NSString * _activityId; // +0x8
    NSString * _resourceId; // +0x10
    NSString * _audienceFinderUsername; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithActivityId:(id)arg1 resourceId:(id)arg2 audienceFinderUsername:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (id)audienceFinderUsername;
- (void)setAudienceFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
