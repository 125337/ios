@interface WCFinderShowNpsSurveyCGI : WCFinderBaseCgi
{
    unsigned long long _taskId; // +0x8
    unsigned long long _surveyId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)initWithTaskId:(unsigned long long)arg1 surveyId:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)taskId;
- (void)setTaskId:(unsigned long long)arg1;
- (unsigned long long)surveyId;
- (void)setSurveyId:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

