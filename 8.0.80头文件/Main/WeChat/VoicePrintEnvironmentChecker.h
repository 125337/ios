@interface VoicePrintEnvironmentChecker : NSObject <WCAudioModuleDelegate, IVoicePrintMgrExt>
{
    BOOL _active; // +0x8
    BOOL _finished; // +0x9
    double _averageAudioPeak; // +0x10
    VoicePrintMgr * _voicePrintManager; // +0x18
    id /* block */ _completion; // +0x20
}
- (id)initWithManger:(id)arg1;
- (void)dealloc;
- (void)checkEnvironmentWithCompletion:(id /* block */)arg1;
- (void)check;
- (void)finishWithPassed:(BOOL)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)OnEnviromentCheckModeLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (double)averageAudioPeak;
- (void)setAverageAudioPeak:(double)arg1;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (BOOL)hasFinished;
- (void)setFinished:(BOOL)arg1;
- (id)voicePrintManager;
- (void)setVoicePrintManager:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
