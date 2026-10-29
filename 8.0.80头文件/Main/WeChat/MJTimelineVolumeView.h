@interface MJTimelineVolumeView : UIView
{
    float _originalMusicVolume; // +0x8
    float _originalOSTVolume; // +0xc
    float _originalNarrationVolume; // +0x10
    MJTimelineViewModel * _timelineVM; // +0x18
    MJPlaybackViewModel * _playbackVM; // +0x20
    MJTimelineVolumeSliderInfo * _musicVolumeSliderInfo; // +0x28
    MJTimelineVolumeSliderInfo * _OSTVolumeSliderInfo; // +0x30
    MJTimelineVolumeSliderInfo * _narrationVolumeSliderInfo; // +0x38
    NSMutableArray * _slidersInfo; // +0x40
    MJPublisherButton * _autoVolumeAdjustmentSwitch; // +0x48
    unsigned long long _options; // +0x50
}
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (void)setupViews;
- (void)setupAutoVolumeAdjustmentSwitch;
- (BOOL)setupMusicVolumeSliderIfNeeded;
- (BOOL)setupOSTVolumeSliderIfNeeded;
- (BOOL)setupNarrationVolumeSliderIfNeeded;
- (void)layoutViews;
- (void)layoutSliderWithInfo:(id)arg1 topOffset:(double)arg2;
- (void)bindViews;
- (BOOL)hasChanges;
- (void)musicVolumeSliderValueChanged:(id)arg1;
- (void)musicVolumeSliderDidFinishChangeValue:(id)arg1;
- (void)OSTVolumeSliderValueChanged:(id)arg1;
- (void)OSTVolumeSliderDidFinishChangeValue:(id)arg1;
- (void)narrationVolumeSliderValueChanged:(id)arg1;
- (void)narrationVolumeSliderDidFinishChangeValue:(id)arg1;
- (void)autoVolumeAdjustmentSwitchDidTouchUpInside:(id)arg1;
- (id)timelineVM;
- (id)playbackVM;
- (float)originalMusicVolume;
- (void)setOriginalMusicVolume:(float)arg1;
- (float)originalOSTVolume;
- (void)setOriginalOSTVolume:(float)arg1;
- (float)originalNarrationVolume;
- (void)setOriginalNarrationVolume:(float)arg1;
- (id)musicVolumeSliderInfo;
- (void)setMusicVolumeSliderInfo:(id)arg1;
- (id)OSTVolumeSliderInfo;
- (void)setOSTVolumeSliderInfo:(id)arg1;
- (id)narrationVolumeSliderInfo;
- (void)setNarrationVolumeSliderInfo:(id)arg1;
- (id)slidersInfo;
- (void)setSlidersInfo:(id)arg1;
- (id)autoVolumeAdjustmentSwitch;
- (void)setAutoVolumeAdjustmentSwitch:(id)arg1;
- (unsigned long long)options;
- (void).cxx_destruct;
@end
