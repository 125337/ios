@interface WCPlayerLoadingRequest : NSObject
{
    unsigned int _loadingRequestNum; // +0x8
}
- (id)initWithResourceLoadingRequest:(id)arg1;
- (BOOL)isFinished;
- (unsigned long long)requestedOffset;
- (unsigned long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (void)respondWithData:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoading;
- (BOOL)fillInformationWithMimeType:(id)arg1 length:(unsigned long long)arg2;
- (id)getFormatDes;
- (id)getLoadingRequest;
- (id)getFileName;
- (id)contentInformationRequest;
- (unsigned int)loadingRequestNum;
- (void)setLoadingRequestNum:(unsigned int)arg1;
@end

