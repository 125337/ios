@interface MessageVoiceILinkASRHelper : MMObject <UploadStreamVoiceDataMgrDelegate>
{
    BOOL _isDialect; // +0x8
    BOOL _hasResolvedVoiceFormat; // +0x9
    BOOL _isPolling; // +0xa
    BOOL _hasReceivedFinalResult; // +0xb
    unsigned int _sampleRateForSilk; // +0xc
    unsigned int _currentPollingSeq; // +0x10
    unsigned int _lastReceivedSeq; // +0x14
    unsigned int _inputId; // +0x18
    unsigned int _serverEndFlag; // +0x1c
    MessageVoiceTransTimings * _messageTransTimings; // +0x20
    id <MessageVoiceILinkASRHelperDelegate> _delegate; // +0x28
    NSString * _voiceID; // +0x30
    long long _translateScene; // +0x38
    CMessageWrap * _msgWrap; // +0x40
    NSString * _voicePath; // +0x48
    NSString * _voiceTransPath; // +0x50
    long long _voiceFormat; // +0x58
    iLinkStreamUploadVoiceDataMgr * _uploadMgr; // +0x60
    unsigned long long _currentCheckResult; // +0x68
    MMTimer * _pollingTimer; // +0x70
    NSDate * _pollingStartTime; // +0x78
    NSString * _latestResultText; // +0x80
    unsigned long long _uploadFailCount; // +0x88
}
+ (BOOL)messageVoiceASRUseILink:(id)arg1;
- (id)initWithVoiceMsg:(id)arg1 voiceID:(id)arg2;
- (void)dealloc;
- (void)startMessageVoiceASR;
- (void)stopASR;
- (void)handleCheckResult:(unsigned long long)arg1 resultText:(id)arg2;
- (void)setupPathsForMessageScene;
- (BOOL)checkAndReturnLocalCache;
- (void)saveVoiceTransResult:(id)arg1;
- (void)handleFinishResultWithText:(id)arg1;
- (void)initUploadMgrIfNeeded;
- (void)startPollingForResult;
- (void)initUploadMgrForPolling;
- (void)sendPollingEmptyPacket;
- (void)startPollingTimer;
- (void)stopPollingTimer;
- (void)onPollingTimerFired;
- (void)startStreamingASRUpload;
- (void)initUploadMgrForStreaming;
- (void)uploadVoiceFileInChunks;
- (long long)getCurrentVoiceFormat;
- (void)clearUploadMgr;
- (void)notifyFailWithBaseResponse:(id)arg1;
- (void)notifyNoTextRecognized;
- (void)onFirstAudioPacketSent:(unsigned int)arg1 voiceId:(id)arg2;
- (void)onLastAudioPacketSent:(unsigned int)arg1 voiceId:(id)arg2;
- (void)onFirstTextResponseReceived:(unsigned int)arg1 voiceId:(id)arg2 text:(id)arg3;
- (void)onGetText:(id)arg1;
- (void)onVoiceTransEndedByServer:(unsigned int)arg1 endFlag:(unsigned int)arg2;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onVoiceTransError:(long long)arg1;
- (void)onVoiceTransDisaster:(unsigned int)arg1;
- (id)messageTransTimings;
- (void)setMessageTransTimings:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voiceID;
- (void)setVoiceID:(id)arg1;
- (long long)translateScene;
- (void)setTranslateScene:(long long)arg1;
- (BOOL)isDialect;
- (void)setIsDialect:(BOOL)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)voicePath;
- (void)setVoicePath:(id)arg1;
- (id)voiceTransPath;
- (void)setVoiceTransPath:(id)arg1;
- (unsigned int)sampleRateForSilk;
- (void)setSampleRateForSilk:(unsigned int)arg1;
- (long long)voiceFormat;
- (void)setVoiceFormat:(long long)arg1;
- (BOOL)hasResolvedVoiceFormat;
- (void)setHasResolvedVoiceFormat:(BOOL)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (unsigned long long)currentCheckResult;
- (void)setCurrentCheckResult:(unsigned long long)arg1;
- (id)pollingTimer;
- (void)setPollingTimer:(id)arg1;
- (id)pollingStartTime;
- (void)setPollingStartTime:(id)arg1;
- (unsigned int)currentPollingSeq;
- (void)setCurrentPollingSeq:(unsigned int)arg1;
- (BOOL)isPolling;
- (void)setIsPolling:(BOOL)arg1;
- (BOOL)hasReceivedFinalResult;
- (void)setHasReceivedFinalResult:(BOOL)arg1;
- (unsigned int)lastReceivedSeq;
- (void)setLastReceivedSeq:(unsigned int)arg1;
- (id)latestResultText;
- (void)setLatestResultText:(id)arg1;
- (unsigned long long)uploadFailCount;
- (void)setUploadFailCount:(unsigned long long)arg1;
- (unsigned int)inputId;
- (void)setInputId:(unsigned int)arg1;
- (unsigned int)serverEndFlag;
- (void)setServerEndFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
