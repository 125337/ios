@interface WCStoryFetchBgmCgiObj : WCStoryBaseCGIObj
{
    int _businessId; // +0x8
    NSMutableArray * _imageDatas; // +0x10
    unsigned long long _videoDuration; // +0x18
    unsigned long long _requestId; // +0x20
    NSData * _classifyResultData; // +0x28
    id /* block */ _completionBlock; // +0x30
}
- (id)initWithBlock:(id /* block */)arg1;
- (void)start;
- (id)buildRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)imageDatas;
- (void)setImageDatas:(id)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (int)businessId;
- (void)setBusinessId:(int)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (id)classifyResultData;
- (void)setClassifyResultData:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

