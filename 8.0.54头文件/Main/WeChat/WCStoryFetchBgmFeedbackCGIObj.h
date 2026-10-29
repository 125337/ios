@interface WCStoryFetchBgmFeedbackCGIObj : WCStoryBaseCGIObj
- (id)initWithRequestID:(unsigned long long)arg1 musicFeedBackData:(id)arg2 bussnessId:(unsigned long long)arg3;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
@end

