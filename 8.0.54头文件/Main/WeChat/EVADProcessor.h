@interface EVADProcessor : MMObject
{
    BOOL _hasSpeak; // +0x8
    NSDate * m_dtLastChangeToSilence; // +0x10
    AudioCoder * m_silkEncoder; // +0x18
    BOOL _bCurrentDataNeed; // +0x20
    BOOL _firstStartDetect; // +0x21
    int _currentState; // +0x24
    int _previousState; // +0x28
    unsigned int _delayDataSize; // +0x2c
    id <EVADProcessorDelegate> _delegate; // +0x30
    double _silenceTimeLimit; // +0x38
    char * _delayData; // +0x40
    void * _handle; // +0x48
    circle_buffer _pcm_delay_buffer; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)setupProcessor;
- (void)processSpxVoiceData:(id)arg1 queueItem:(id)arg2;
- (void)releaseProcessor;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)silenceTimeLimit;
- (void)setSilenceTimeLimit:(double)arg1;
- (BOOL)bCurrentDataNeed;
- (void)setBCurrentDataNeed:(BOOL)arg1;
- (int)currentState;
- (void)setCurrentState:(int)arg1;
- (int)previousState;
- (void)setPreviousState:(int)arg1;
- (char *)delayData;
- (void)setDelayData:(char *)arg1;
- (unsigned int)delayDataSize;
- (void)setDelayDataSize:(unsigned int)arg1;
- (void *)handle;
- (void)setHandle:(void *)arg1;
- (BOOL)firstStartDetect;
- (void)setFirstStartDetect:(BOOL)arg1;
- (circle_buffer)pcm_delay_buffer;
- (void)setPcm_delay_buffer:(circle_buffer)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

