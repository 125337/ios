@interface TAVAVAssetReverseImageResource : TAVImageResource
{
    BOOL _isPreloading; // +0x8
    AVAsset * _asset; // +0x10
    AVVideoComposition * _videoComposition; // +0x18
    AVAssetReader * _assetReader; // +0x20
    AVAssetReaderOutput * _trackOutput; // +0x28
    NSMutableArray * _sampleBuffers; // +0x30
    NSObject<OS_dispatch_queue> * _loadBufferQueue; // +0x38
    struct _lastReaderTime; // +0x40
    struct _bufferDuration; // +0x58
}
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)imageAtTime:(struct)arg1 renderSize:(CGSize)arg2;
- (id)fixOritationIfNeed:(id)arg1;
- (opaqueCMSampleBuffer *)loadSampleBufferAtTime:(struct)arg1;
- (opaqueCMSampleBuffer *)currentSampleBufferAtTime:(struct)arg1;
- (void)removeUnusedBuffersAtTime:(struct)arg1;
- (void)forceLoadSampleBufferAtTime:(struct)arg1;
- (void)preloadSampleBuffersAtTime:(struct)arg1;
- (id)createAssetReaderForTimeRange:(struct)arg1;
- (void)createAssetReaderOutputAtTime:(struct)arg1;
- (void)resetReaderAtTime:(struct)arg1;
- (void)cleanReader;
- (void)runSyncInQueueWithBlock:(id /* block */)arg1;
- (id)formattedBuffersTimeString;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)assetReader;
- (void)setAssetReader:(id)arg1;
- (id)trackOutput;
- (void)setTrackOutput:(id)arg1;
- (id)sampleBuffers;
- (void)setSampleBuffers:(id)arg1;
- (struct)lastReaderTime;
- (void)setLastReaderTime:(struct)arg1;
- (id)loadBufferQueue;
- (void)setLoadBufferQueue:(id)arg1;
- (struct)bufferDuration;
- (void)setBufferDuration:(struct)arg1;
- (BOOL)isPreloading;
- (void)setIsPreloading:(BOOL)arg1;
- (void).cxx_destruct;
@end
