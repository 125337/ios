@interface WCFinderGetHistoryLiveListCGI : WCFinderLiveBaseCgi
{
    unsigned int _startTimeRange; // +0x8
    unsigned int _endTimeRange; // +0xc
    int _requestScene; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    NSString * _anchorFinderUsername; // +0x28
    NSData * _lastBuffer; // +0x30
}
- (id)initWithAnchorFinderUsername:(id)arg1 requestScene:(int)arg2 lastBuffer:(id)arg3 startTimeRange:(unsigned int)arg4 endTimeRange:(unsigned int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)startTimeRange;
- (void)setStartTimeRange:(unsigned int)arg1;
- (unsigned int)endTimeRange;
- (void)setEndTimeRange:(unsigned int)arg1;
- (int)requestScene;
- (void)setRequestScene:(int)arg1;
- (void).cxx_destruct;
@end
