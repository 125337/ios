@interface WCAssetDataLoaderProxy : WCPlayerObject
{
    int _loadingRequestSeq; // +0x8
    long long _resourceType; // +0x10
    WCPlayerReporter * _reporter; // +0x18
    WCPlayerPlayArgs * _playerArgs; // +0x20
    WCPlayerPlaybackInfo * _playbackInfo; // +0x28
    id <WCAssetDataLoaderProxyDelegate> _delegate; // +0x30
    WCResourceLoaderMoniter * _loadingRequestMoniter; // +0x38
    NSMutableArray * _arrLoadingRequest; // +0x40
    NSRecursiveLock * _lock; // +0x48
    unsigned long long _responseTotalData; // +0x50
}
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2 reporter:(id)arg3 delegate:(id)arg4;
- (id)loadingRequestMoniter;
- (_NSRange)getRequestDataRangeWithSec:(double)arg1;
- (id)downloader:(id)arg1;
- (BOOL)fillInformationForRequest:(id)arg1;
- (void)onNotAnyLoadingRequest;
- (void)removeLoadingRequests:(id)arg1;
- (void)requestFirstSliceDataForLoadingRequest:(id)arg1;
- (void)onReceiveNewLoadingRequest:(id)arg1;
- (void)onReceiveDelLoadingRequest:(id)arg1;
- (void)processLoadingRequest;
- (BOOL)respondDataWithLoadingRequest:(id)arg1;
- (void)removeAllLoadingRequest;
- (id)getCurrentLoadingRequest;
- (unsigned long long)fileLength:(id)arg1;
- (unsigned long long)getAvaibleLength:(id)arg1;
- (id)getVideoData:(id)arg1 range:(_NSRange)arg2;
- (int)loadingRequestSeq;
- (void)setLoadingRequestSeq:(int)arg1;
- (long long)resourceType;
- (void)setResourceType:(long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setLoadingRequestMoniter:(id)arg1;
- (id)arrLoadingRequest;
- (void)setArrLoadingRequest:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned long long)responseTotalData;
- (void)setResponseTotalData:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
