@interface TAVAudioResource : TAVResource
{
    AVAsset * _emptyAsset; // +0x8
}
- (id)initWithDuration:(struct)arg1;
- (void)loadEmptyTrack;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (id)tracksForType:(id)arg1;
- (id)pcmBufferAtTimeRange:(struct)arg1 audioFormat:(id)arg2;
- (id)emptyAsset;
- (void)setEmptyAsset:(id)arg1;
- (void).cxx_destruct;
@end
