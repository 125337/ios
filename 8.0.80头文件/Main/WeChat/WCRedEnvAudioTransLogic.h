@interface WCRedEnvAudioTransLogic : NSObject <UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate>
{
    unsigned int _voiceOffset; // +0x8
    unsigned int _currentInputId; // +0xc
    unsigned int _processVoiceCount; // +0x10
    unsigned int _languageType; // +0x14
    id <WCRedEnvAudioTransLogicDelegate> _delegate; // +0x18
    EVADProcessor * _evad; // +0x20
    UploadStreamVoiceDataMgr * _uploadMgr; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _currentVoiceId; // +0x38
    NSMutableArray * _voiceIdArray; // +0x40
    StreamInputResult * _result; // +0x48
    NSString * _nsTranslatedText; // +0x50
    NSMutableArray * _arrInputQueueItem; // +0x58
    unsigned long long _transState; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)initVoiceDataMgr;
- (BOOL)hadAnyDataSliceToStartTrans;
- (void)createNewVoiceId;
- (unsigned int)startTransVoiceWithLanguage:(unsigned int)arg1 StopNow:(BOOL)arg2;
- (void)notifyRecordStop;
- (void)stopTransVoiceWithInputId:(unsigned int)arg1;
- (id)getInputQueueItemWithItem:(id)arg1;
- (void)transVoiceWithInputQueueItem:(id)arg1;
- (void)startProcessVoiceData;
- (void)endProcessVoiceData;
- (void)processVoiceData:(id)arg1;
- (void)processDataWithEvad:(id)arg1;
- (BOOL)shouldAcceptFirstSlice;
- (void)onVADDetectFirstStart:(id)arg1;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(BOOL)arg3;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADFilterdSpeakingVoice:(id)arg1;
- (void)onVADDetectDelayVoice:(id)arg1 Pcm:(id)arg2;
- (void)onGetText:(id)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onVoiceTransDisaster:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)evad;
- (void)setEvad:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)currentVoiceId;
- (void)setCurrentVoiceId:(id)arg1;
- (id)voiceIdArray;
- (void)setVoiceIdArray:(id)arg1;
- (unsigned int)voiceOffset;
- (void)setVoiceOffset:(unsigned int)arg1;
- (unsigned int)currentInputId;
- (void)setCurrentInputId:(unsigned int)arg1;
- (unsigned int)processVoiceCount;
- (void)setProcessVoiceCount:(unsigned int)arg1;
- (unsigned int)languageType;
- (void)setLanguageType:(unsigned int)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)nsTranslatedText;
- (void)setNsTranslatedText:(id)arg1;
- (id)arrInputQueueItem;
- (void)setArrInputQueueItem:(id)arg1;
- (unsigned long long)transState;
- (void)setTransState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
