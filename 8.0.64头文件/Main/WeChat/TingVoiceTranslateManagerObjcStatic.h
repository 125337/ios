@interface TingVoiceTranslateManagerObjcStatic : NSObject <TingVoiceTranslateManager, IStreamVoiceInputExt>
{
    unsigned int _inputId; // +0x8
    NSMutableArray * _listenerArray; // +0x10
    NSRecursiveLock * _lock; // +0x18
    StreamVoiceInputLogic * _streamVoiceInputLogic; // +0x20
}
+ (id)sharedInstance;
- (void)notifyListeners:(id /* block */)arg1;
- (void)_notifyListeners:(id /* block */)arg1;
- (id)init;
- (void)start:(id /* block */)arg1;
- (void)stop:(id /* block */)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)onVoiceDetectSilenceToSpeakingWithInputId:(unsigned int)arg1 time:(long long)arg2 data:(id)arg3;
- (id)listenerArray;
- (void)setListenerArray:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned int)inputId;
- (void)setInputId:(unsigned int)arg1;
- (id)streamVoiceInputLogic;
- (void)setStreamVoiceInputLogic:(id)arg1;
- (void).cxx_destruct;
@end
