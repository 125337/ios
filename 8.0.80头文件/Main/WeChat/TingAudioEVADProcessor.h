@interface TingAudioEVADProcessor : MMObject
{
    BOOL _hasSpeak; // +0x8
    NSDate * m_dtLastChangeToSilence; // +0x10
    BOOL _firstStartDetect; // +0x18
    float _sAndNRation; // +0x1c
    int _currentState; // +0x20
    int _previousState; // +0x24
    int _sampleRate; // +0x28
    int _channel; // +0x2c
    id <TingAudioEVADProcessor> _delegate; // +0x30
    double _silenceTimeLimit; // +0x38
    void * _handle; // +0x40
    NSString * _tmpDataPath; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)setupProcessor:(int)arg1 channel:(int)arg2;
- (void)processPCMData:(id)arg1 format:(AudioStreamBasicDescription)arg2;
- (void)releaseProcessor;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)silenceTimeLimit;
- (void)setSilenceTimeLimit:(double)arg1;
- (float)sAndNRation;
- (void)setSAndNRation:(float)arg1;
- (int)currentState;
- (void)setCurrentState:(int)arg1;
- (int)previousState;
- (void)setPreviousState:(int)arg1;
- (void *)handle;
- (void)setHandle:(void *)arg1;
- (BOOL)firstStartDetect;
- (void)setFirstStartDetect:(BOOL)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channel;
- (void)setChannel:(int)arg1;
- (id)tmpDataPath;
- (void)setTmpDataPath:(id)arg1;
- (void).cxx_destruct;
@end
