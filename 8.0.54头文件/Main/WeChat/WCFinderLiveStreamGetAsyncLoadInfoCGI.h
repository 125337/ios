@interface WCFinderLiveStreamGetAsyncLoadInfoCGI : WCFinderLiveBaseCgi
{
    int _triggerScene; // +0x8
    long long _reportScene; // +0x10
    NSArray * _scenesArray; // +0x18
    id /* block */ _successful; // +0x20
    id /* block */ _failure; // +0x28
}
- (id)initWithObjectUidList:(id)arg1 aggregationCardIdList:(id)arg2 cardInfoList:(id)arg3 scenes:(id)arg4 commentScene:(int)arg5 triggerScene:(int)arg6 reportScene:(long long)arg7 successful:(id /* block */)arg8 failure:(id /* block */)arg9;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)triggerScene;
- (void)setTriggerScene:(int)arg1;
- (long long)reportScene;
- (void)setReportScene:(long long)arg1;
- (id)scenesArray;
- (void)setScenesArray:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

