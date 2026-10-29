@interface TAVAVAssetReaderImageResource : TAVImageResource
{
    AVAsset * _asset; // +0x8
    AVVideoComposition * _videoComposition; // +0x10
    AVAssetReader * _assetReader; // +0x18
    AVAssetReaderOutput * _trackOutput; // +0x20
    opaqueCMSampleBuffer * _lastSampleBuffer; // +0x28
    struct _lastReaderTime; // +0x30
    CGAffineTransform _preferredTransform; // +0x48
}
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setLastSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)imageAtTime:(struct)arg1 renderSize:(CGSize)arg2;
- (opaqueCMSampleBuffer *)loadSampleBufferAtTime:(struct)arg1;
- (void)createAssetReaderOutputAtTime:(struct)arg1;
- (void)cleanReader;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)assetReader;
- (void)setAssetReader:(id)arg1;
- (id)trackOutput;
- (void)setTrackOutput:(id)arg1;
- (struct)lastReaderTime;
- (void)setLastReaderTime:(struct)arg1;
- (opaqueCMSampleBuffer *)lastSampleBuffer;
- (CGAffineTransform)preferredTransform;
- (void)setPreferredTransform:(CGAffineTransform)arg1;
- (void).cxx_destruct;
@end

