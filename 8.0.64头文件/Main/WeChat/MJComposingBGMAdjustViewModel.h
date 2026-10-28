@interface MJComposingBGMAdjustViewModel : NSObject
{
    BOOL _shouldShowLyricButton; // +0x8
    BOOL _shouldTurnonLyric; // +0x9
    float _bgmVolume; // +0xc
    float _ostVolume; // +0x10
    unsigned long long _entryScene; // +0x18
    UBEmptySignal * _bgmVolumeWillStartChangeSignal; // +0x20
    UBFloatSignal * _bgmVolumeDidChangeSignal; // +0x28
    UBFloatSignal * _bgmVolumeDidFinishChangeSignal; // +0x30
    UBEmptySignal * _bgmVolumeDidCancelChangeSignal; // +0x38
    UBEmptySignal * _ostVolumeWillStartChangeSignal; // +0x40
    UBFloatSignal * _ostVolumeDidChangeSignal; // +0x48
    UBFloatSignal * _ostVolumeDidFinishChangeSignal; // +0x50
    UBEmptySignal * _ostVolumeDidCancelChangeSignal; // +0x58
    UBBooleanSignal * _shouldTurnonLyricDidChangeSignal; // +0x60
    double _musicDuration; // +0x68
    double _musicPlayheadTime; // +0x70
    double _timelinePlaybackDuration; // +0x78
    MJPublisherContext * _publisherContext; // +0x80
    struct _musicTimeRange; // +0x88
}
- (id)initWithEntryScene:(unsigned long long)arg1;
- (void)willStartChangeBGMVolume;
- (void)didFinishChangeBGMVolume:(float)arg1;
- (void)didCancelChangeBGMVolume;
- (void)didChangeBGMVolume:(float)arg1;
- (void)willStartChangeOSTVolume;
- (void)didFinishChangeOSTVolume:(float)arg1;
- (void)didCancelChangeOSTVolume;
- (void)didChangeOSTVolume:(float)arg1;
- (void)updateSlientlyWithBGMVolume:(float)arg1;
- (void)updateSlientlyWithOSTVolume:(float)arg1;
- (void)toggleLyricTurnonState;
- (void)updateSlientlyWithShouldTurnonLyric:(BOOL)arg1;
- (BOOL)ableToTrim;
- (id)description;
- (unsigned long long)entryScene;
- (float)bgmVolume;
- (void)setBgmVolume:(float)arg1;
- (id)bgmVolumeWillStartChangeSignal;
- (id)bgmVolumeDidChangeSignal;
- (id)bgmVolumeDidFinishChangeSignal;
- (id)bgmVolumeDidCancelChangeSignal;
- (float)ostVolume;
- (void)setOstVolume:(float)arg1;
- (id)ostVolumeWillStartChangeSignal;
- (id)ostVolumeDidChangeSignal;
- (id)ostVolumeDidFinishChangeSignal;
- (id)ostVolumeDidCancelChangeSignal;
- (BOOL)shouldShowLyricButton;
- (void)setShouldShowLyricButton:(BOOL)arg1;
- (BOOL)shouldTurnonLyric;
- (void)setShouldTurnonLyric:(BOOL)arg1;
- (id)shouldTurnonLyricDidChangeSignal;
- (double)musicDuration;
- (double)musicPlayheadTime;
- (struct)musicTimeRange;
- (double)timelinePlaybackDuration;
- (id)publisherContext;
- (void)setPublisherContext:(id)arg1;
- (void).cxx_destruct;
@end
