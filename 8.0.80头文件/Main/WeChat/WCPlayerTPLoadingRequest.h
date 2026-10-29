@interface WCPlayerTPLoadingRequest : WCPlayerLoadingRequest
{
    TPAssetResourceLoadingRequest * _loadingRequest; // +0x8
}
- (id)initWithResourceLoadingRequest:(id)arg1;
- (BOOL)isM3U8;
- (unsigned long long)requestedOffset;
- (long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (BOOL)isFinished;
- (id)loadingRequest;
- (_NSRange)requestRange;
- (BOOL)isShouldfillInformation;
- (void)setNotifyDataPath:(id)arg1;
- (BOOL)fillInformationWithMimeType:(id)arg1 length:(long long)arg2;
- (void)respondWithData:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (id)fileName;
- (void)setLoadingRequest:(id)arg1;
- (void).cxx_destruct;
@end
