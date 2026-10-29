@interface VideoCompositionOutputConfig : NSObject
{
    long long _videoBitrate; // +0x8
    double _fps; // +0x10
    double _iFrameInterval; // +0x18
    long long _audioBitrate; // +0x20
    long long _audioSampleRate; // +0x28
    long long _audioChannelCount; // +0x30
    TAVSourceExportColorProperties * _colorProperties; // +0x38
    TAVSoftEncodingColorProperties * _softEncColorProperties; // +0x40
    AVVideoCompositionCoreAnimationTool * _animationTools; // +0x48
    NSArray * _metadata; // +0x50
    NSDictionary * _colorRange; // +0x58
    MAVExportOptionalParam * _optionalParams; // +0x60
    CGSize _targetSize; // +0x68
}
- (id)init;
- (id)description;
- (id)optionalParams;
- (CGSize)targetSize;
- (void)setTargetSize:(CGSize)arg1;
- (long long)videoBitrate;
- (void)setVideoBitrate:(long long)arg1;
- (double)fps;
- (void)setFps:(double)arg1;
- (double)iFrameInterval;
- (void)setIFrameInterval:(double)arg1;
- (long long)audioBitrate;
- (void)setAudioBitrate:(long long)arg1;
- (long long)audioSampleRate;
- (void)setAudioSampleRate:(long long)arg1;
- (long long)audioChannelCount;
- (void)setAudioChannelCount:(long long)arg1;
- (id)colorProperties;
- (void)setColorProperties:(id)arg1;
- (id)softEncColorProperties;
- (void)setSoftEncColorProperties:(id)arg1;
- (id)animationTools;
- (void)setAnimationTools:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)colorRange;
- (void)setColorRange:(id)arg1;
- (void)setOptionalParams:(id)arg1;
- (void).cxx_destruct;
@end
