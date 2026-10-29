@interface MBExternalVideoService : MMUserService <MMServiceProtocol>
{
    BOOL _preloadEnabled; // +0x8
    unsigned int _preloadOverdueTime; // +0xc
    id <IMBPublicServiceDispatcher> _dispatcher; // +0x10
    NSMutableDictionary * _videoItemsMap; // +0x18
    NSMutableDictionary * _reportInfoMap; // +0x20
    NSMutableSet * _preloadingSet; // +0x28
    long long _maxPreloadCount; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clean;
- (void)dealloc;
- (void)prepareResource:(id)arg1 withId:(long long)arg2 extraData:(id)arg3 dispatcher:(id)arg4 retBlock:(id /* block */)arg5;
- (void)registerExternalTexture:(long long)arg1 extraData:(id)arg2 retBlock:(id /* block */)arg3;
- (void)unregisterExternalTexture:(long long)arg1 retBlock:(id /* block */)arg2;
- (void)startPlay:(long long)arg1 retBlock:(id /* block */)arg2;
- (void)stopPlay:(long long)arg1 retBlock:(id /* block */)arg2;
- (void)pausePlay:(long long)arg1 retBlock:(id /* block */)arg2;
- (void)resumePlay:(long long)arg1 retBlock:(id /* block */)arg2;
- (void)setLoop:(BOOL)arg1 withId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)seekTo:(int)arg1 withId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)setMute:(BOOL)arg1 withId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)setPlaySpeedRatio:(float)arg1 withId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)setEvent:(id)arg1 eventId:(long long)arg2 retBlock:(id /* block */)arg3;
- (void)operate:(long long)arg1 action:(id)arg2 extraData:(id)arg3 retBlock:(id /* block */)arg4;
- (void)preDownload:(id)arg1 downloadRatio:(long long)arg2 reportInfo:(id)arg3 retBlock:(id /* block */)arg4;
- (void)cancelPreDownload:(id)arg1 retBlock:(id /* block */)arg2;
- (id)jsonStringFromDict:(id)arg1;
- (void)reloadPreloadConfig;
- (BOOL)tryAcquirePreloadSlot:(long long)arg1;
- (void)releasePreloadSlot:(long long)arg1;
- (unsigned long long)currentPreloadSkipReason;
- (void)runVideoCommand:(long long)arg1 command:(id /* block */)arg2 returnBlock:(id /* block */)arg3 errMsg:(id)arg4;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (id)videoItemsMap;
- (void)setVideoItemsMap:(id)arg1;
- (id)reportInfoMap;
- (void)setReportInfoMap:(id)arg1;
- (id)preloadingSet;
- (void)setPreloadingSet:(id)arg1;
- (long long)maxPreloadCount;
- (void)setMaxPreloadCount:(long long)arg1;
- (BOOL)preloadEnabled;
- (void)setPreloadEnabled:(BOOL)arg1;
- (unsigned int)preloadOverdueTime;
- (void)setPreloadOverdueTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
