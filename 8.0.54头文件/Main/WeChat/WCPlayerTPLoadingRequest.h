@interface WCPlayerTPLoadingRequest : WCPlayerLoadingRequest
{
    BOOL _bUseNotifyMode; // +0x8
    NSString * _filePath; // +0x10
    TPAssetResourceLoadingRequest * _loadingRequest; // +0x18
}
- (id)initWithResourceLoadingRequest:(id)arg1;
- (unsigned long long)requestedOffset;
- (unsigned long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (BOOL)isFinished;
- (id)getLoadingRequest;
- (BOOL)fillInformationWithMimeType:(id)arg1 length:(unsigned long long)arg2;
- (void)respondWithData:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (id)getFileName;
- (id)contentInformationRequest;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (BOOL)bUseNotifyMode;
- (void)setBUseNotifyMode:(BOOL)arg1;
- (id)loadingRequest;
- (void)setLoadingRequest:(id)arg1;
- (void).cxx_destruct;
@end

