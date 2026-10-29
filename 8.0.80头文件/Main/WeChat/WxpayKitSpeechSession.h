@interface WxpayKitSpeechSession : NSObject <LiteAppVoiceInputDetectorDelegate>
{
    BOOL _continuous; // +0x8
    BOOL _interimResults; // +0x9
    unsigned long long _callId; // +0x10
    LiteAppVoiceInputDetector * _detector; // +0x18
    NSDictionary * _streamCallbacks; // +0x20
}
- (void)emitStream:(id)arg1 data:(id)arg2 keepAlive:(BOOL)arg3;
- (BOOL)isDetecting;
- (void)startDetecting;
- (void)stopDetecting;
- (void)notifySpeechEnd;
- (void)notifyEnd;
- (void)voiceInputDetector:(id)arg1 didReceiveResultText:(id)arg2;
- (void)voiceInputDetectorDidStartRecord:(id)arg1;
- (void)voiceInputDetectorDidEndRecord:(id)arg1;
- (void)voiceInputDetector:(id)arg1 didFailWithError:(long long)arg2;
- (void)voiceInputDetector:(id)arg1 didUpdatePeakPower:(float)arg2;
- (void)voiceInputDetectorDidStartSpeech:(id)arg1;
- (void)voiceInputDetectorDidEndSpeech:(id)arg1 text:(id)arg2;
- (unsigned long long)callId;
- (void)setCallId:(unsigned long long)arg1;
- (id)detector;
- (void)setDetector:(id)arg1;
- (id)streamCallbacks;
- (void)setStreamCallbacks:(id)arg1;
- (BOOL)continuous;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)interimResults;
- (void)setInterimResults:(BOOL)arg1;
- (void).cxx_destruct;
@end
