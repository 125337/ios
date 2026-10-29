@interface MJComposingMusicVolumePanelViewModel : NSObject
{
    float _bgmVolume; // +0x8
    float _ostVolume; // +0xc
    NSString * _panelTitle; // +0x10
    NSString * _bgmTitle; // +0x18
    UBEmptySignal * _bgmVolumeWillStartChangeSignal; // +0x20
    UBFloatSignal * _bgmVolumeDidChangeSignal; // +0x28
    UBFloatSignal * _bgmVolumeDidFinishChangeSignal; // +0x30
    UBEmptySignal * _bgmVolumeDidCancelChangeSignal; // +0x38
    NSString * _ostTitle; // +0x40
    UBEmptySignal * _ostVolumeWillStartChangeSignal; // +0x48
    UBFloatSignal * _ostVolumeDidChangeSignal; // +0x50
    UBFloatSignal * _ostVolumeDidFinishChangeSignal; // +0x58
    UBEmptySignal * _ostVolumeDidCancelChangeSignal; // +0x60
    MJPublisherContext * _publisherContext; // +0x68
}
- (id)init;
- (void)willStartChangeBGMVolume;
- (void)didFinishChangeBGMVolume:(float)arg1;
- (void)didCancelChangeBGMVolume;
- (void)didChangeBGMVolume:(float)arg1;
- (void)willStartChangeOSTVolume;
- (void)didFinishChangeOSTVolume:(float)arg1;
- (void)didCancelChangeOSTVolume;
- (void)didChangeOSTVolume:(float)arg1;
- (void)updateSilentlyWithBGMVolume:(float)arg1;
- (void)updateSilentlyWithOSTVolume:(float)arg1;
- (id)description;
- (id)panelTitle;
- (void)setPanelTitle:(id)arg1;
- (float)bgmVolume;
- (void)setBgmVolume:(float)arg1;
- (id)bgmTitle;
- (void)setBgmTitle:(id)arg1;
- (id)bgmVolumeWillStartChangeSignal;
- (id)bgmVolumeDidChangeSignal;
- (id)bgmVolumeDidFinishChangeSignal;
- (id)bgmVolumeDidCancelChangeSignal;
- (float)ostVolume;
- (void)setOstVolume:(float)arg1;
- (id)ostTitle;
- (void)setOstTitle:(id)arg1;
- (id)ostVolumeWillStartChangeSignal;
- (id)ostVolumeDidChangeSignal;
- (id)ostVolumeDidFinishChangeSignal;
- (id)ostVolumeDidCancelChangeSignal;
- (id)publisherContext;
- (void)setPublisherContext:(id)arg1;
- (void).cxx_destruct;
@end
