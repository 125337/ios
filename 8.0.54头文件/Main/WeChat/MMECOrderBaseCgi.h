@interface MMECOrderBaseCgi : WCBaseCgi
{
    BOOL _cancelTask; // +0x8
    WXPBGeneratedMessage * _request; // +0x10
    double _startTime; // +0x18
    NSMutableSet * _baseProcessingToastErrorCodeSet; // +0x20
}
+ (id)baseProcessingToastErrorCodeSet;
+ (BOOL)shouldAutoProcessingToastWithErrorCode:(long long)arg1;
- (void)start;
- (void)setRequest:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)orderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)cgiIdKeyDict;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancel;
- (id)request;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (BOOL)isCancelTask;
- (void)setCancelTask:(BOOL)arg1;
- (id)baseProcessingToastErrorCodeSet;
- (void)setBaseProcessingToastErrorCodeSet:(id)arg1;
- (void).cxx_destruct;
@end

