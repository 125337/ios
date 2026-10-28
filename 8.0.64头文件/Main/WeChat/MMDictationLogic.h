@interface MMDictationLogic : NSObject <AudioRecordCheckerExt, IMMDictationLogic>
{
    unsigned int _currentInputId; // +0x8
    NSHashTable * _observerList; // +0x10
    StreamVoiceInputLogic * _inputLogic; // +0x18
    NSString * _resultText; // +0x20
    NSString * _displayText; // +0x28
    long long _endFlag; // +0x30
    NSMutableArray * _peakPowerArray; // +0x38
    unsigned long long _peakPowerHitCount; // +0x40
    NSString * _currentVoiceId; // +0x48
    NSDate * _currentStartTime; // +0x50
}
- (id)initWithScene:(long long)arg1;
- (void)dealloc;
- (void)didReceiveWillResignActiveNotification:(id)arg1;
- (void)setDictationExtraData:(id)arg1;
- (id)observerList;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObserver:(id /* block */)arg1;
- (BOOL)isRecording;
- (void)start;
- (void)stop:(long long)arg1;
- (void)clear;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnRecordFirstDataOut:(unsigned int)arg1 voiceId:(id)arg2;
- (void)onRecordWillEndedByInterruption:(unsigned int)arg1 is3rdApp:(BOOL)arg2;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)_endRecord;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onVoiceTransEndedByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onVoiceRecognizeCgiError:(unsigned int)arg1 uiMessage:(long long)arg2 ret:(long long)arg3 isResposeEmpty:(BOOL)arg4;
- (void)onVoiceRecognizeCgiWillStart:(unsigned int)arg1 voiceId:(id)arg2 seq:(int)arg3;
- (void)onVoiceRecognizeCgiDidEnd:(unsigned int)arg1 voiceId:(id)arg2 seq:(int)arg3 textLen:(unsigned long long)arg4;
- (void)cancelCheckDisplayText;
- (void)checkDisplayText;
- (void)_checkDisplayText;
- (void)_flushText:(id)arg1;
- (void)InputIsAvailableChanged:(BOOL)arg1;
- (void)BeginInterruption;
- (void)onDetectMicriphoneMuted;
- (void)setObserverList:(id)arg1;
- (id)inputLogic;
- (void)setInputLogic:(id)arg1;
- (id)resultText;
- (void)setResultText:(id)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (long long)endFlag;
- (void)setEndFlag:(long long)arg1;
- (id)peakPowerArray;
- (void)setPeakPowerArray:(id)arg1;
- (unsigned long long)peakPowerHitCount;
- (void)setPeakPowerHitCount:(unsigned long long)arg1;
- (unsigned int)currentInputId;
- (void)setCurrentInputId:(unsigned int)arg1;
- (id)currentVoiceId;
- (void)setCurrentVoiceId:(id)arg1;
- (id)currentStartTime;
- (void)setCurrentStartTime:(id)arg1;
- (void).cxx_destruct;
@end
