@interface MMLiveAudio3AParamConfig : NSObject
{
    int _got_wave_3a_parm_flag; // +0x8
    int _wx3AEnable; // +0xc
    int _system_volume_type_voip; // +0x10
    int _aecEnable_vpio; // +0x14
    int _aecEnable_rmio; // +0x18
    int _aecMode_bgm; // +0x1c
    int _aecMode_vpio; // +0x20
    int _aecMode_rmio; // +0x24
    int _agcGain_speaker; // +0x28
    int _agcGain_receiver; // +0x2c
    int _agcGain_wire_earphone; // +0x30
    int _agcGain_wireless_earphone; // +0x34
    int _nsEnable_voip; // +0x38
    int _nsEnable_live; // +0x3c
    int _agcEnable_live; // +0x40
    int _agcEnable_voip; // +0x44
    int _nsMode_voip; // +0x48
    int _nsMode_live; // +0x4c
    int _agcMode; // +0x50
    int _wx3AChannels; // +0x54
    int _wx3AEnable_headset; // +0x58
    int _wx3AALLEnable_headset; // +0x5c
    int _trtc3Aenable; // +0x60
    int _wx3AMicChannels; // +0x64
    int _device_vpio_flag; // +0x68
    int _rmio_enable_by_iosversion; // +0x6c
}
- (id)init;
- (void)updateAudio3AParamWithTRTCInstance:(id)arg1 isVoiceRoom:(BOOL)arg2;
- (int)got_wave_3a_parm_flag;
- (void)setGot_wave_3a_parm_flag:(int)arg1;
- (int)wx3AEnable;
- (void)setWx3AEnable:(int)arg1;
- (int)system_volume_type_voip;
- (void)setSystem_volume_type_voip:(int)arg1;
- (int)aecEnable_vpio;
- (void)setAecEnable_vpio:(int)arg1;
- (int)aecEnable_rmio;
- (void)setAecEnable_rmio:(int)arg1;
- (int)aecMode_bgm;
- (void)setAecMode_bgm:(int)arg1;
- (int)aecMode_vpio;
- (void)setAecMode_vpio:(int)arg1;
- (int)aecMode_rmio;
- (void)setAecMode_rmio:(int)arg1;
- (int)agcGain_speaker;
- (void)setAgcGain_speaker:(int)arg1;
- (int)agcGain_receiver;
- (void)setAgcGain_receiver:(int)arg1;
- (int)agcGain_wire_earphone;
- (void)setAgcGain_wire_earphone:(int)arg1;
- (int)agcGain_wireless_earphone;
- (void)setAgcGain_wireless_earphone:(int)arg1;
- (int)nsEnable_voip;
- (void)setNsEnable_voip:(int)arg1;
- (int)nsEnable_live;
- (void)setNsEnable_live:(int)arg1;
- (int)agcEnable_live;
- (void)setAgcEnable_live:(int)arg1;
- (int)agcEnable_voip;
- (void)setAgcEnable_voip:(int)arg1;
- (int)nsMode_voip;
- (void)setNsMode_voip:(int)arg1;
- (int)nsMode_live;
- (void)setNsMode_live:(int)arg1;
- (int)agcMode;
- (void)setAgcMode:(int)arg1;
- (int)wx3AChannels;
- (void)setWx3AChannels:(int)arg1;
- (int)wx3AEnable_headset;
- (void)setWx3AEnable_headset:(int)arg1;
- (int)wx3AALLEnable_headset;
- (void)setWx3AALLEnable_headset:(int)arg1;
- (int)trtc3Aenable;
- (void)setTrtc3Aenable:(int)arg1;
- (int)wx3AMicChannels;
- (void)setWx3AMicChannels:(int)arg1;
- (int)device_vpio_flag;
- (void)setDevice_vpio_flag:(int)arg1;
- (int)rmio_enable_by_iosversion;
- (void)setRmio_enable_by_iosversion:(int)arg1;
@end

