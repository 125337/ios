@interface TAVCompositionBuilder : NSObject
{
    BOOL _needRebuildComposition; // +0x8
    BOOL _needRebuildVideoComposition; // +0x9
    BOOL _needRebuildAudioMix; // +0xa
    BOOL _needBuildAudioMix; // +0xb
    TAVComposition * _compositor; // +0x10
    AVComposition * _composition; // +0x18
    AVVideoComposition * _videoComposition; // +0x20
    AVAudioMix * _audioMix; // +0x28
    NSMutableArray * _mainVideoTrackInfo; // +0x30
    NSMutableArray * _mainAudioTrackInfo; // +0x38
    NSMutableArray * _overlayTrackInfo; // +0x40
    NSMutableArray * _audioTrackInfo; // +0x48
}
- (void)setCompositor:(id)arg1;
- (id)initWithComposition:(id)arg1;
- (id)buildSource;
- (void)fixCompositionAudioTimeRangeIfNeeded;
- (id)buildComposition;
- (id)buildVideoComposition;
- (id)buildAudioMix;
- (void)resetSetupInfo;
- (id)calculateSlicesForLayerInstructions:(id)arg1;
- (struct)maximumDurationForMediaChannels:(id)arg1;
- (struct)maximumDurationForProviders:(id)arg1;
- (BOOL)needRebuildComposition;
- (void)setNeedRebuildComposition:(BOOL)arg1;
- (BOOL)needRebuildVideoComposition;
- (void)setNeedRebuildVideoComposition:(BOOL)arg1;
- (BOOL)needRebuildAudioMix;
- (void)setNeedRebuildAudioMix:(BOOL)arg1;
- (BOOL)needBuildAudioMix;
- (void)setNeedBuildAudioMix:(BOOL)arg1;
- (id)compositor;
- (id)composition;
- (void)setComposition:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)audioMix;
- (void)setAudioMix:(id)arg1;
- (id)mainVideoTrackInfo;
- (void)setMainVideoTrackInfo:(id)arg1;
- (id)mainAudioTrackInfo;
- (void)setMainAudioTrackInfo:(id)arg1;
- (id)overlayTrackInfo;
- (void)setOverlayTrackInfo:(id)arg1;
- (id)audioTrackInfo;
- (void)setAudioTrackInfo:(id)arg1;
- (void).cxx_destruct;
@end

