@interface AudioSettingInfo : NSObject
{
    BOOL _voiceEarMonitorEnable; // +0x8
    int _voiceVolume; // +0xc
    int _earMonitorVoiceVolume; // +0x10
}
- (id)description;
- (int)voiceVolume;
- (void)setVoiceVolume:(int)arg1;
- (BOOL)voiceEarMonitorEnable;
- (void)setVoiceEarMonitorEnable:(BOOL)arg1;
- (int)earMonitorVoiceVolume;
- (void)setEarMonitorVoiceVolume:(int)arg1;
@end
