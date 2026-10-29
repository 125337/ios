@interface MJComposingMusicClipViewModel : NSObject
{
    BOOL _isDragging; // +0x8
    NSString * _musicFilePath; // +0x10
    NSString * _panelTitle; // +0x18
    NSString * _startTitle; // +0x20
    NSString * _durationTitle; // +0x28
    NSArray * _waveformSamples; // +0x30
    unsigned long long _waveformLoadToken; // +0x38
    NSString * _waveformLoadedPath; // +0x40
    id /* block */ _waveformUpdateBlock; // +0x48
    struct _totalDuration; // +0x50
    struct _trimTimeRange; // +0x68
}
- (id)initWithTotalDuration:(struct)arg1 trimTimeRange:(struct)arg2 musicFilePath:(id)arg3;
- (struct)minClipDuration;
- (void)loadWaveformWithMusicFilePath:(id)arg1 updateBlock:(id /* block */)arg2;
- (void)p_generatePlaceholderWaveform;
- (void)p_notifyWaveformUpdate;
- (struct)totalDuration;
- (void)setTotalDuration:(struct)arg1;
- (struct)trimTimeRange;
- (void)setTrimTimeRange:(struct)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (id)panelTitle;
- (void)setPanelTitle:(id)arg1;
- (id)startTitle;
- (void)setStartTitle:(id)arg1;
- (id)durationTitle;
- (void)setDurationTitle:(id)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (id)waveformSamples;
- (void)setWaveformSamples:(id)arg1;
- (unsigned long long)waveformLoadToken;
- (void)setWaveformLoadToken:(unsigned long long)arg1;
- (id)waveformLoadedPath;
- (void)setWaveformLoadedPath:(id)arg1;
- (id /* block */)waveformUpdateBlock;
- (void)setWaveformUpdateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
