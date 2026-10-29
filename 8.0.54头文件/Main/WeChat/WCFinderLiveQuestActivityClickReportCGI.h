@interface WCFinderLiveQuestActivityClickReportCGI : WCFinderLiveBaseCgi
{
    NSString * _activityID; // +0x8
    id /* block */ _sucessBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
- (id)initWithQuestActivity:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)activityID;
- (void)setActivityID:(id)arg1;
- (id /* block */)sucessBlock;
- (void)setSucessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

