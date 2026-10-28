@interface MMLiveAudio3AParamConfig : NSObject
{
    int _got_wave_3a_parm_flag; // +0x8
    int _wx3AEnable; // +0xc
    int _system_volume_type_voip; // +0x10
    int _nnaecSwitch; // +0x14
    int _nnaecEnable; // +0x18
    int _nnaecModel; // +0x1c
    int _aecEnable_vpio; // +0x20
    int _aecEnable_rmio; // +0x24
    int _aecMode_bgm; // +0x28
    int _aecMode_vpio; // +0x2c
    int _aecMode_rmio; // +0x30
    int _agcGain_speaker; // +0x34
    int _agcGain_receiver; // +0x38
    int _agcGain_wire_earphone; // +0x3c
    int _agcGain_wireless_earphone; // +0x40
    int _nsEnable_voip; // +0x44
    int _nsEnable_live; // +0x48
    int _agcEnable_live; // +0x4c
    int _agcEnable_voip; // +0x50
    int _nsMode_voip; // +0x54
    int _nsMode_live; // +0x58
    int _agcMode; // +0x5c
    int _wx3AChannels; // +0x60
    int _wx3AEnable_headset; // +0x64
    int _wx3AALLEnable_headset; // +0x68
    int _trtc3Aenable; // +0x6c
    int _wx3AMicChannels; // +0x70
    int _device_vpio_flag; // +0x74
    int _rmio_enable_by_iosversion; // +0x78
    int _wave3AModelExistFlag; // +0x7c
    int _wave3ADeviceScore; // +0x80
    int _wx3ALowScoreVal; // +0x84
    int _wx3ALowScoreSwitch; // +0x88
    int _xnetScoreSwitch; // +0x8c
    unsigned int _deviceLevel; // +0x90
    unsigned int _cpuScore; // +0x94
    unsigned int _gpuScore; // +0x98
}
- (id)init;
- (void)setDeviceParams:(unsigned int)arg1 withCpuScore:(unsigned int)arg2 withGpuScore:(unsigned int)arg3;
- (void)updateAudio3AParamWithTRTCInstance:(id)arg1 isVoiceRoom:(BOOL)arg2;
- (unsigned int)getXNetCommit;
- (int)got_wave_3a_parm_flag;
- (void)setGot_wave_3a_parm_flag:(int)arg1;
- (int)wx3AEnable;
- (void)setWx3AEnable:(int)arg1;
- (int)system_volume_type_voip;
- (void)setSystem_volume_type_voip:(int)arg1;
- (int)nnaecSwitch;
- (void)setNnaecSwitch:(int)arg1;
- (int)nnaecEnable;
- (void)setNnaecEnable:(int)arg1;
- (int)nnaecModel;
- (void)setNnaecModel:(int)arg1;
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
- (int)wave3AModelExistFlag;
- (void)setWave3AModelExistFlag:(int)arg1;
- (int)wave3ADeviceScore;
- (void)setWave3ADeviceScore:(int)arg1;
- (int)wx3ALowScoreVal;
- (void)setWx3ALowScoreVal:(int)arg1;
- (int)wx3ALowScoreSwitch;
- (void)setWx3ALowScoreSwitch:(int)arg1;
- (int)xnetScoreSwitch;
- (void)setXnetScoreSwitch:(int)arg1;
- (unsigned int)deviceLevel;
- (void)setDeviceLevel:(unsigned int)arg1;
- (unsigned int)cpuScore;
- (void)setCpuScore:(unsigned int)arg1;
- (unsigned int)gpuScore;
- (void)setGpuScore:(unsigned int)arg1;
@end
