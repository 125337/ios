@interface OMCVideoThumbnailProvider : NSObject <OMCThumbnailProvider>
{
    BOOL _useOriginMediaClip; // +0x8
    OMCClipSegment * _clipSegment; // +0x10
    SharedPtr<XMFVideoClipThumbGen> _backingThumbGen; // +0x18
    set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> _taskIDs; // +0x20
    XIntegerID<int, -1> _clientID; // +0x38
    XID _clipID; // +0x40
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x68
    XMutexPOSIX _mutex; // +0x70
    CGSize _maxPixelSize; // +0xb0
}
- (id)initWithClipSegment:(id)arg1 maxPixelSize:(CGSize)arg2 useOriginMediaClip:(BOOL)arg3 callbackQueue:(id)arg4;
- (void)dealloc;
- (void)teardownIfNeeded;
- (long long)requestThumbnailAtTime:(struct)arg1 resultHandler:(id /* block */)arg2;
- (long long)requestThumbnailAtTimeRange:(struct)arg1 resultHandler:(id /* block */)arg2;
- (void)onRequestCompleteForTimeRange:(XTMTimeRange)arg1 resultHandler:(id /* block */)arg2 resultType:(int)arg3 videoFrame:(SharedPtr<XMFVideoFrame>)arg4 taskID:(unsigned int)arg5;
- (void)cancelTask:(long long)arg1;
- (void)cancelAllTasks;
- (id)segmentID;
- (void)reopen;
- (CGSize)maxPixelSize;
- (void)setMaxPixelSize:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

