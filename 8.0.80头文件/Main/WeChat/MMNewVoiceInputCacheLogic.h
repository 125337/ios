@interface MMNewVoiceInputCacheLogic : NSObject <UploadStreamVoiceDataMgrDelegate>
{
    BOOL _useOpusEncoder; // +0x8
    unsigned int _audioId; // +0xc
    unsigned int _voiceOffset; // +0x10
    unsigned int _currentInputId; // +0x14
    unsigned int _processVoiceCount; // +0x18
    unsigned int _languageType; // +0x1c
    NSString * _nsChatName; // +0x20
    NSData * _extraData; // +0x28
    NSData * _respExtraData; // +0x30
    NSString * _currentVoiceId; // +0x38
    id <MMNewVoiceInputCacheLogicDelegate> _delegate; // +0x40
    NSObject<UploadStreamVoiceDataMgrProtocol> * _uploadMgr; // +0x48
    OpusAudioCodec * _opusCodec; // +0x50
    SilkAudioEncoder * _silkEncoder; // +0x58
    NSString * _sessionId; // +0x60
    long long _scene; // +0x68
    VoiceTransReporter * _reporter; // +0x70
    StreamInputResult * _result; // +0x78
    NSString * _nsTranslatedText; // +0x80
    NSMutableArray * _arrInputQueueItem; // +0x88
    unsigned long long _transState; // +0x90
}
- (id)initWithScene:(long long)arg1;
- (void)dealloc;
- (BOOL)isOpeniLinkStream;
- (void)initVoiceDataMgr;
- (void)setUserName:(id)arg1 AudioId:(unsigned int)arg2;
- (void)updateExtraData:(id)arg1;
- (unsigned int)startTransVoiceWithLanguage:(unsigned int)arg1 StopNow:(BOOL)arg2;
- (void)pauseVoiceTranslating;
- (void)resumeVoiceTranslating;
- (void)notifyRecordStop;
- (void)stopTransVoiceWithInputId:(unsigned int)arg1;
- (id)getInputQueueItemWithItem:(id)arg1;
- (void)transVoiceWithInputQueueItem:(id)arg1;
- (void)startProcessVoiceData;
- (void)endProcessVoiceData;
- (void)processVoiceData:(id)arg1;
- (void)processVoiceData:(id)arg1 queueItem:(id)arg2;
- (void)onGetText:(id)arg1;
- (void)onVoiceTransEndedByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onVoiceVadIsEnd:(unsigned int)arg1 vadIsEnd:(BOOL)arg2;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onVoiceTransError:(long long)arg1;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (unsigned int)audioId;
- (void)setAudioId:(unsigned int)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)respExtraData;
- (void)setRespExtraData:(id)arg1;
- (id)currentVoiceId;
- (void)setCurrentVoiceId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (id)opusCodec;
- (void)setOpusCodec:(id)arg1;
- (BOOL)useOpusEncoder;
- (void)setUseOpusEncoder:(BOOL)arg1;
- (id)silkEncoder;
- (void)setSilkEncoder:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
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
