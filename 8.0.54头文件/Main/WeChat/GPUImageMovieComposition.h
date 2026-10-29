@interface GPUImageMovieComposition : GPUImageMovie
{
    AVComposition * _compositon; // +0x70
    AVVideoComposition * _videoComposition; // +0x78
    AVAudioMix * _audioMix; // +0x80
}
- (id)initWithComposition:(id)arg1 andVideoComposition:(id)arg2 andAudioMix:(id)arg3;
- (id)createAssetReader;
- (id)compositon;
- (void)setCompositon:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)audioMix;
- (void)setAudioMix:(id)arg1;
- (void).cxx_destruct;
@end

