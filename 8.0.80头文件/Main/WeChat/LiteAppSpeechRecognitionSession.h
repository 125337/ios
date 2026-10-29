@interface LiteAppSpeechRecognitionSession : NSObject <LiteAppVoiceInputDetectorDelegate>
{
    BOOL _continuous; // +0x8
    BOOL _interimResults; // +0x9
    unsigned int _appUuid; // +0xc
    int _sourceType; // +0x10
    LiteAppVoiceInputDetector * _detector; // +0x18
    NSString * _appId; // +0x20
    unsigned long long _pageId; // +0x28
    long long _onResultCallbackId; // +0x30
    long long _onSpeechStartCallbackId; // +0x38
    long long _onSpeechEndCallbackId; // +0x40
    long long _onErrorCallbackId; // +0x48
    long long _onVolumeChangeCallbackId; // +0x50
    long long _onStartCallbackId; // +0x58
    long long _onEndCallbackId; // +0x60
}
- (id)initWithAppId:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 scene:(long long)arg4 sourceType:(int)arg5;
- (BOOL)isDetecting;
- (void)applyLang:(unsigned int)arg1;
- (void)startDetecting;
- (void)stopDetecting;
- (void)notifySpeechEnd;
- (void)notifyEnd;
- (void)jsApiCallback:(long long)arg1 result:(id)arg2 keepAlive:(BOOL)arg3;
- (void)voiceInputDetector:(id)arg1 didReceiveResultText:(id)arg2;
- (void)voiceInputDetectorDidStartRecord:(id)arg1;
- (void)voiceInputDetectorDidEndRecord:(id)arg1;
- (void)voiceInputDetector:(id)arg1 didFailWithError:(long long)arg2;
- (void)voiceInputDetector:(id)arg1 didUpdatePeakPower:(float)arg2;
- (void)voiceInputDetectorDidStartSpeech:(id)arg1;
- (void)voiceInputDetectorDidEndSpeech:(id)arg1 text:(id)arg2;
- (id)detector;
- (void)setDetector:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (BOOL)continuous;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)interimResults;
- (void)setInterimResults:(BOOL)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (long long)onResultCallbackId;
- (void)setOnResultCallbackId:(long long)arg1;
- (long long)onSpeechStartCallbackId;
- (void)setOnSpeechStartCallbackId:(long long)arg1;
- (long long)onSpeechEndCallbackId;
- (void)setOnSpeechEndCallbackId:(long long)arg1;
- (long long)onErrorCallbackId;
- (void)setOnErrorCallbackId:(long long)arg1;
- (long long)onVolumeChangeCallbackId;
- (void)setOnVolumeChangeCallbackId:(long long)arg1;
- (long long)onStartCallbackId;
- (void)setOnStartCallbackId:(long long)arg1;
- (long long)onEndCallbackId;
- (void)setOnEndCallbackId:(long long)arg1;
- (void).cxx_destruct;
@end
