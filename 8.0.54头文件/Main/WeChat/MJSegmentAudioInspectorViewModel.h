@interface MJSegmentAudioInspectorViewModel : MJSegmentInspectorViewModel
{
    BOOL _isAudioMutedOriginalValue; // +0x40
    float _volumeOriginalValue; // +0x44
}
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setIsAudioMuted:(BOOL)arg1;
- (BOOL)isAudioMuted;
- (BOOL)canAdjustVolume;
- (void)didFinishAdjustAudio;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (void)notifyDidCancel;
- (void)notifyDidReset;
- (void)setValuesToOriginal;
- (void)notifyDidApplyToAll:(id)arg1;
@end

