@interface LiteAppVoiceHelper : NSObject
{
    NSMutableDictionary * _sessions; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (long long)getTransScene:(id)arg1;
- (void)startSpeechRecognition:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 param:(id)arg4 sourceType:(int)arg5 callback:(id /* block */)arg6;
- (void)checkMicrophonePermissionAndStart:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 param:(id)arg4 sourceType:(int)arg5 callback:(id /* block */)arg6;
- (void)doStartSpeechRecognition:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 param:(id)arg4 sourceType:(int)arg5 callback:(id /* block */)arg6;
- (void)parseAndApplyOptions:(id)arg1 toSession:(id)arg2;
- (void)stopSpeechRecognition:(unsigned int)arg1 callback:(id /* block */)arg2;
- (BOOL)isDetecting:(unsigned int)arg1;
- (void)stopAllSpeechRecognition;
- (void)callbackToJS:(int)arg1 errMsg:(id)arg2 callback:(id /* block */)arg3;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (void).cxx_destruct;
@end
