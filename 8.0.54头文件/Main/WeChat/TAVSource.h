@interface TAVSource : NSObject
{
    AVAsset * _asset; // +0x8
    AVVideoComposition * _videoComposition; // +0x10
    AVAudioMix * _audioMix; // +0x18
}
- (void)setupAnimationTool:(id)arg1;
- (id)convertToPlayerItem;
- (id)printAVComposition;
- (id)printAVVideoComposition;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)audioMix;
- (void)setAudioMix:(id)arg1;
- (void).cxx_destruct;
@end

