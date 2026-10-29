@interface TPFairPlayMgr : NSObject <AVAssetResourceLoaderDelegate>
{
    NSString * _contentKeyUrl; // +0x8
    AVAssetResourceLoadingRequest * _loadingRequest; // +0x10
    TPCertificateMgr * _certificateMgr; // +0x18
}
- (void)setDRMAsset:(id)arg1;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)requestContentKeyWithSPCData:(id)arg1 assetIDData:(id)arg2;
- (id)contentKeyUrl;
- (void)setContentKeyUrl:(id)arg1;
- (id)loadingRequest;
- (void)setLoadingRequest:(id)arg1;
- (id)certificateMgr;
- (void)setCertificateMgr:(id)arg1;
- (void).cxx_destruct;
@end

