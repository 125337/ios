@interface MMOpenVoiceVideoMgr : NSObject
{
    mutex mutex_; // +0x8
    atomic<bool> ready_; // +0x48
    int _fixedCapWidth; // +0x4c
    unsigned int _logCnt; // +0x50
    NSObject<OS_dispatch_queue> * _videoQueue; // +0x58
    NSMutableDictionary * _views; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)setUp:(id)arg1;
- (void)exit;
- (void)insertView:(id)arg1 dic:(id)arg2 callback:(id /* block */)arg3;
- (void)updateView:(id)arg1 dic:(id)arg2 callback:(id /* block */)arg3;
- (void)removeView:(id)arg1 dic:(id)arg2 callback:(id /* block */)arg3;
- (void)requestFullScreen:(id)arg1 direction:(int)arg2 callback:(id /* block */)arg3;
- (void)exitFullScreen:(id)arg1 callback:(id /* block */)arg2;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 rotation:(int)arg6 isScreen:(BOOL)arg7;
- (void)updateMembers:(id)arg1;
- (id)getVideoSize:(id)arg1;
- (id)getScreenSize:(id)arg1;
- (void)getVideoSize:(id)arg1 got:(BOOL *)arg2 width:(unsigned int *)arg3 height:(unsigned int *)arg4;
- (void)updateCaptureSize:(int)arg1;
- (void)updateGPUReslution:(int)arg1;
- (void)releaseAll;
- (void)setBackgroundEffectMode:(id)arg1 mode:(int)arg2 enable:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)onVideoError:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (int)fixedCapWidth;
- (void)setFixedCapWidth:(int)arg1;
- (id)videoQueue;
- (void)setVideoQueue:(id)arg1;
- (unsigned int)logCnt;
- (void)setLogCnt:(unsigned int)arg1;
- (id)views;
- (void)setViews:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
