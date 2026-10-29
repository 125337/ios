@interface EmoticonGetWordListCGI : StoreEmotionBaseCgi
{
    unsigned int _startTime; // +0x8
    id /* block */ _completion; // +0x10
    id /* block */ _failed; // +0x18
}
- (id)initWithCompletionBlock:(id /* block */)arg1 failed:(id /* block */)arg2;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)doReportResult:(BOOL)arg1 wordSize:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)failed;
- (void)setFailed:(id /* block */)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

