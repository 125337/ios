@interface WCMomentsForwardVideoOp : WCMomentsForwardBaseOp <WCPlayerDownloaderExt, MMAssetCompositeResultExt>
{
    BOOL _isCompositeVideo; // +0x8
    id <WCMomentsForwardVideoOpDelegate> _videoOpDelegate; // +0x10
}
- (BOOL)startForwardToCustomContact:(id)arg1;
- (BOOL)restartForward;
- (void)updateMessageWrap;
- (BOOL)handleForwardWithCompositeTask:(id)arg1;
- (BOOL)startDownloadVideo;
- (void)subscribeVideoDownload;
- (void)subscribeVideoCompositeTask;
- (BOOL)isLegalSight;
- (unsigned long long)sightLegalityType;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)compositeTaskDidStop:(id)arg1 withResult:(id)arg2 compositeSession:(id)arg3;
- (void)compositeTaskDidBeCancelled:(id)arg1;
- (void)OnForwardMessageFailUpdate:(id)arg1;
- (id)videoOpDelegate;
- (void)setVideoOpDelegate:(id)arg1;
- (BOOL)isCompositeVideo;
- (void)setIsCompositeVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
