@interface TingTPHearingAidImpl : NSObject
{
    int _hAidType; // +0x8
    int _hAidScene; // +0xc
    int _hAidDevice; // +0x10
    int _sampleNum; // +0x14
    int _sampleBuffSize; // +0x18
    IWaveAudioHAidInterface * _coreImpl; // +0x20
    mach_timebase_info _timeBase; // +0x28
    NSString * _tmpDataPath; // +0x30
    NSString * _tmpOutDataPath; // +0x38
}
- (id)initWithType:(int)arg1 device:(int)arg2 ttsScene:(BOOL)arg3;
- (void)dealloc;
- (BOOL)setupWithMetaData:(id)arg1;
- (int)getSampleBufSize;
- (id)onNotifyAudioProcessFrameOut:(id)arg1;
- (IWaveAudioHAidInterface *)coreImpl;
- (void)setCoreImpl:(IWaveAudioHAidInterface *)arg1;
- (int)hAidType;
- (void)setHAidType:(int)arg1;
- (int)hAidScene;
- (void)setHAidScene:(int)arg1;
- (int)hAidDevice;
- (void)setHAidDevice:(int)arg1;
- (int)sampleNum;
- (void)setSampleNum:(int)arg1;
- (int)sampleBuffSize;
- (void)setSampleBuffSize:(int)arg1;
- (mach_timebase_info)timeBase;
- (void)setTimeBase:(mach_timebase_info)arg1;
- (id)tmpDataPath;
- (void)setTmpDataPath:(id)arg1;
- (id)tmpOutDataPath;
- (void)setTmpOutDataPath:(id)arg1;
- (void).cxx_destruct;
@end
