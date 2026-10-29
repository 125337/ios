@interface MVDownloadOperation : WCAsyncOperation
{
    NSString * _requestId; // +0x8
    NSString * _uuid; // +0x10
}
- (id)init;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)uuid;
- (void).cxx_destruct;
@end

