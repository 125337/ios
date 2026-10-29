@interface SystemVolumeAdjuster : NSObject
{
    float _originalVolume; // +0x8
    float _setVolume; // +0xc
    MPVolumeView * _volumeView; // +0x10
}
- (id)init;
- (void)dealloc;
- (id)volumeView;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 willSetBlock:(id /* block */)arg2;
- (void)restoreOriginalVolume;
- (void)__setVolume:(float)arg1 isCleanStep:(BOOL)arg2;
- (void)setVolumeView:(id)arg1;
- (float)originalVolume;
- (void)setOriginalVolume:(float)arg1;
- (float)setVolume;
- (void)setSetVolume:(float)arg1;
- (void).cxx_destruct;
@end

