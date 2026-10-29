@interface OMJExportManager : NSObject
{
    id <OMJExportManagerDelegate> _delegate; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    SharedPtr<XMFVideoFrameCocoaLoader> _thumbnailLoader; // +0x18
    SharedPtr<XMJExportManager> _backingManager; // +0x20
}
- (id)initWithBackingManager:(const void *)arg1;
- (id)taskWithClipBundleID:(id)arg1 timeRange:(struct)arg2 exportSettings:(id)arg3;
- (id)cancelTaskWithID:(id)arg1;
- (id)pauseTaskWithID:(id)arg1;
- (id)startTaskWithID:(id)arg1;
- (void)pauseService;
- (void)resumeService;
- (BOOL)isServicePaused;
- (id)allScheduledTaskIDs;
- (id)allPausedTaskIDs;
- (void)setupExportStateDidChangeFunc;
- (void)onDidUpdateVideoFrame:(SharedPtr<XMFVideoFrame>)arg1 taskID:(id)arg2 handler:(id /* block */)arg3;
- (void)enableVideoFrameNotificationWithTaskID:(id)arg1 notifyInterval:(double)arg2;
- (void)disableVideoFrameNotificationWithTaskID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (SharedPtr<XMFVideoFrameCocoaLoader>)thumbnailLoader;
- (void)setThumbnailLoader:(SharedPtr<XMFVideoFrameCocoaLoader>)arg1;
- (SharedPtr<XMJExportManager>)backingManager;
- (void)setBackingManager:(SharedPtr<XMJExportManager>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
