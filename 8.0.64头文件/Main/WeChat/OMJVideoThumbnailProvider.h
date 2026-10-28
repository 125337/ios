@interface OMJVideoThumbnailProvider : NSObject <OMJThumbnailProvider>
{
    SharedPtr<XMFVideoClip> _backingVideoClip; // +0x8
    SharedPtr<XMFVideoClipThumbGen> _backingThumbGen; // +0x10
    set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> _taskIDs; // +0x18
    XIntegerID<int, -1> _clientID; // +0x30
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x38
    XMutexPOSIX _mutex; // +0x40
}
- (id)initWithVideoClip:(SharedPtr<XMFVideoClip>)arg1 maxPixelSize:(CGSize)arg2 callbackQueue:(id)arg3;
- (void)dealloc;
- (void)teardownIfNeeded;
- (long long)requestThumbnailAtTime:(struct)arg1 resultHandler:(id /* block */)arg2;
- (long long)requestThumbnailAtTimeRange:(struct)arg1 resultHandler:(id /* block */)arg2;
- (void)onRequestCompleteForTimeRange:(XTMTimeRange)arg1 resultHandler:(id /* block */)arg2 resultType:(int)arg3 videoFrame:(SharedPtr<XMFVideoFrame>)arg4 taskID:(unsigned int)arg5;
- (void)cancelTask:(long long)arg1;
- (void)cancelAllTasks;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
