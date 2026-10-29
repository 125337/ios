@interface WCPlayerAVLoadingRequest : WCPlayerLoadingRequest
{
    AVAssetResourceLoadingRequest * _loadingRequest; // +0x8
}
- (id)initWithResourceLoadingRequest:(id)arg1;
- (unsigned long long)requestedOffset;
- (unsigned long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (BOOL)isFinished;
- (id)getLoadingRequest;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (BOOL)fillInformationWithMimeType:(id)arg1 length:(unsigned long long)arg2;
- (void)respondWithData:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (id)getFileName;
- (id)contentInformationRequest;
- (id)loadingRequest;
- (void)setLoadingRequest:(id)arg1;
- (void).cxx_destruct;
@end

