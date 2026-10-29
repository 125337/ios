@interface OMCBatchThumbnailProvider : NSObject
{
    BOOL _useOriginMediaClip; // +0x8
    NSArray * _clipSegments; // +0x10
    set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> _videoClipTaskIDs; // +0x18
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x30
    XMutexPOSIX _mutex; // +0x38
    SharedPtr<XMFVideoClipThumbGenKeyframeImpl> _backingVideoClipThumbGen; // +0x78
    map<XID, XIntegerID<int, -1>, std::less<XID>, std::allocator<std::pair<const XID, XIntegerID<int, -1>>>> _clientIDsByVideoClipSegmentID; // +0x80
    CGSize _maxPixelSize; // +0x98
}
+ (id)providerWithSegments:(id)arg1 maxPixelSize:(CGSize)arg2;
+ (id)providerWithSegments:(id)arg1 maxPixelSize:(CGSize)arg2 useOriginMediaClip:(BOOL)arg3;
- (id)initWithClipSegments:(id)arg1 maxPixelSize:(CGSize)arg2 useOriginMediaClip:(BOOL)arg3 callbackQueue:(id)arg4;
- (void)dealloc;
- (void)teardownIfNeeded;
- (void)reopen;
- (long long)requestThumbnailAtTime:(struct)arg1 segmentID:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestThumbnailAtTimeRange:(struct)arg1 segmentID:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)onRequestCompleteForTimeRange:(XTMTimeRange)arg1 segmentID:(id)arg2 resultHandler:(id /* block */)arg3 resultType:(int)arg4 videoFrame:(SharedPtr<XMFVideoFrame>)arg5 taskID:(unsigned int)arg6;
- (void)cancelTask:(long long)arg1;
- (void)cancelAllTasks;
- (CGSize)maxPixelSize;
- (void)setMaxPixelSize:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

