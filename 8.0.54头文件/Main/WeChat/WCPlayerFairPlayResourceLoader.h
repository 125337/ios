@interface WCPlayerFairPlayResourceLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    WCPlayerReporter * _reporter; // +0x8
    AVURLAsset * _asset; // +0x10
    id <WCPlayerResourceLoaderDelegate> _delegate; // +0x18
    AVAssetResourceLoadingRequest * _loadingRequest; // +0x20
    WCPlayerFairPlayInfo * _fairPlayInfo; // +0x28
    WCPlayerCertificateMgr * _certificateMgr; // +0x30
}
- (void)updateCertificate:(id)arg1;
- (void)updateFairPlayInfo:(id)arg1;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)requestContentKeyWithSPCData:(id)arg1 assetIDData:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingRequest;
- (void)setLoadingRequest:(id)arg1;
- (id)fairPlayInfo;
- (void)setFairPlayInfo:(id)arg1;
- (id)certificateMgr;
- (void)setCertificateMgr:(id)arg1;
- (void).cxx_destruct;
@end

