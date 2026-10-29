@interface WCPlayerAudioEnhance : NSObject
{
    int _sampleNum; // +0x8
    int _sampleBuffSize; // +0xc
    IWaveAudioHAidInterface * _waveAudioHAidInst; // +0x10
    NSString * _tmpDataPath; // +0x18
    WCPlayerVideoMetadata * _metadata; // +0x20
}
- (id)initMetadata:(id)arg1 mode:(int)arg2 device:(int)arg3;
- (void)dealloc;
- (void)setupWithMetaData:(id)arg1;
- (void)initWaveAudioHAidInst:(int)arg1 device:(int)arg2;
- (int)getSampleBufSize;
- (id)waveAudioHAidProcessAudioFrame:(id)arg1;
- (id)copyProcessFrameBufferFromInput:(id)arg1;
- (IWaveAudioHAidInterface *)waveAudioHAidInst;
- (void)setWaveAudioHAidInst:(IWaveAudioHAidInterface *)arg1;
- (int)sampleNum;
- (void)setSampleNum:(int)arg1;
- (int)sampleBuffSize;
- (void)setSampleBuffSize:(int)arg1;
- (id)tmpDataPath;
- (void)setTmpDataPath:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void).cxx_destruct;
@end
