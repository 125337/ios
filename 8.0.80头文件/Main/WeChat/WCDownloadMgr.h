@interface WCDownloadMgr : MMObject <PBMessageObserverDelegate, CNetworkStatusExt>
{
    long long m_currScene; // +0x8
    NSMutableSet * m_cancelDownloadMedias; // +0x10
    NSMutableSet * m_needNotifyMedias; // +0x18
    OrderedDictionary * m_dataDownloadQueue; // +0x20
    int m_dataCurrentDownloadingCount; // +0x28
    int m_dataMaxDownloadCount; // +0x2c
    OrderedDictionary * m_previewDownloadQueue; // +0x30
    int m_previewCurrentDownloadingCount; // +0x38
    int m_previewMaxDownloadCount; // +0x3c
    OrderedDictionary * m_sightDownloadQueue; // +0x40
    int m_sightCurrentDownloadingCount; // +0x48
    int m_sightMaxDownloadCount; // +0x4c
    OrderedDictionary * m_videoDownloadQueue; // +0x50
    int m_videoCurrentDownloadingCount; // +0x58
    int m_videoMaxDownloadCount; // +0x5c
    id <WCDownloadMgrDelegate> m_delegate; // +0x60
}
- (id)init;
- (void)dealloc;
- (id)getDownloadQueue:(long long)arg1;
- (int *)getCurrentDownloadingCountWithType:(long long)arg1;
- (void)addDownloadTask:(id)arg1 downloadType:(long long)arg2 withNotify:(BOOL)arg3;
- (void)downloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)downloadMediaWithProcessNotify:(id)arg1 downloadType:(long long)arg2;
- (void)forceDownloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)forceDownloadMediaWithProcessNotify:(id)arg1 downloadType:(long long)arg2;
- (void)cancelDownloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)setDataMaxDownloadCountWifi:(int)arg1 Edge:(int)arg2;
- (void)setPreviewMaxDownloadCountWifi:(int)arg1 Edge:(int)arg2;
- (void)pullDownloadMediaToFront:(id)arg1 downloadType:(long long)arg2;
- (void)setDownloadScene:(long long)arg1;
- (void)tryStartNextDownloadTask:(long long)arg1;
- (void)doDownloadMediaCDN:(id)arg1;
- (void)reportDownloadRecord:(id)arg1 downloadMediaWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReveicePartFromURL:(id)arg1;
- (void)onReveicePartFromURL:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)useDefaultImageDownloadConcurrentCount;
- (void)updateImageDownloadConcurrentCount;
- (void)updateDownloadConcurrentCount;
- (id)getEncUrlWithDownloadId:(id)arg1 FromMediaItem:(id)arg2;
- (id)urlSuffixWithToken:(id)arg1 encIdx:(unsigned int)arg2;
- (BOOL)isDownloadingSnsImageForUrl:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
