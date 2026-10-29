@interface MMNewVoiceInputCacheLogic : NSObject <UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate>
{
    unsigned int _audioId; // +0x8
    unsigned int _voiceOffset; // +0xc
    unsigned int _currentInputId; // +0x10
    unsigned int _processVoiceCount; // +0x14
    unsigned int _languageType; // +0x18
    NSString * _nsChatName; // +0x20
    id <MMNewVoiceInputCacheLogicDelegate> _delegate; // +0x28
    EVADProcessor * _evad; // +0x30
    UploadStreamVoiceDataMgr * _uploadMgr; // +0x38
    NSString * _sessionId; // +0x40
    NSString * _currentVoiceId; // +0x48
    NSMutableArray * _voiceIdArray; // +0x50
    StreamInputResult * _result; // +0x58
    NSString * _nsTranslatedText; // +0x60
    NSMutableArray * _arrInputQueueItem; // +0x68
    NSMutableArray * _arrInputQueueItemWhenPausing; // +0x70
    unsigned long long _transState; // +0x78
}
- (id)init;
- (void)dealloc;
- (void)initVoiceDataMgr;
- (void)setUserName:(id)arg1 AudioId:(unsigned int)arg2;
- (BOOL)hadAnyDataSliceToStartTrans;
- (void)createNewVoiceId;
- (unsigned int)startTransVoiceWithLanguage:(unsigned int)arg1 StopNow:(BOOL)arg2;
- (unsigned int)reTransVoiceWithLanguage:(unsigned int)arg1;
- (void)pauseVoiceTranslating;
- (void)resumeVoiceTranslating;
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
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (unsigned int)audioId;
- (void)setAudioId:(unsigned int)arg1;
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
- (id)arrInputQueueItemWhenPausing;
- (void)setArrInputQueueItemWhenPausing:(id)arg1;
- (unsigned long long)transState;
- (void)setTransState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

