@interface ChatBotBrandPCMVolumeDetector : NSObject
{
    BOOL _detectionRunning; // +0x8
    unsigned int _sampleBits; // +0xc
    unsigned int _channelCount; // +0x10
    id /* block */ _decibelCallback; // +0x18
    NSMutableArray * _energyCache; // +0x20
    NSTimer * _calculationTimer; // +0x28
}
- (id)initWithDecibelCallback:(id /* block */)arg1;
- (void)startDecibelDetection;
- (void)stopDecibelDetection;
- (BOOL)isDetectionRunning;
- (void)feedPcmData:(const char *)arg1 dataLength:(unsigned int)arg2;
- (void)calculateAverageDecibel;
- (void)releaseResources;
- (void)dealloc;
- (id /* block */)decibelCallback;
- (void)setDecibelCallback:(id /* block */)arg1;
- (id)energyCache;
- (void)setEnergyCache:(id)arg1;
- (id)calculationTimer;
- (void)setCalculationTimer:(id)arg1;
- (unsigned int)sampleBits;
- (void)setSampleBits:(unsigned int)arg1;
- (unsigned int)channelCount;
- (void)setChannelCount:(unsigned int)arg1;
- (void)setDetectionRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end
