@interface MJSpeechManager : NSObject
{
    MJAudioFileManager * _audioFileManager; // +0x8
    UBDictionarySignal * _stsRequestStatusDidUpdateSignal; // +0x10
    UBDictionarySignal * _sttRequestStatusDidUpdateSignal; // +0x18
    UBDictionarySignal * _ttsRequestStatusDidUpdateSignal; // +0x20
    UBDictionarySignal * _vocalEnhancementRequestStatusDidUpdateSignal; // +0x28
    UBDictionarySignal * _longSTTRequestStatusDidUpdateSignal; // +0x30
    UBDictionarySignal * _speechCloneRequestStatusDidUpdateSignal; // +0x38
    long long _maxConcurrentCount; // +0x40
    NSMutableDictionary * _sttAsyncTasksByAudioID; // +0x48
    NSMutableDictionary * _stsAsyncTasksByAudioID; // +0x50
    NSMutableDictionary * _ttsAsyncTasksByText; // +0x58
    NSMutableDictionary * _vocalEnhancementAsyncTasksByAudioID; // +0x60
    NSMutableDictionary * _ttsAsyncTaskGroupsByAudioID; // +0x68
    NSMutableDictionary * _sttAsyncTaskGroupsByAudioID; // +0x70
    NSMutableDictionary * _speechCloneAsyncTaskGroupsByAudioID; // +0x78
    NSMutableArray * _pendingSpeechAsyncRequestItems; // +0x80
    NSMutableArray * _pendingVocalEnhancementItems; // +0x88
}
- (unsigned long long)stsAsyncRequestStatusWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)asyncRequestSTSWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelSTSAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)cancelAllSTSAsyncRequests;
- (id)getSTSAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (id)getOrCreateSTSAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (unsigned long long)ttsAsyncRequestStatusWithText:(id)arg1 roleID:(id)arg2;
- (void)asyncRequestTTSWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelTTSAsyncRequestWithText:(id)arg1 roleID:(id)arg2;
- (id)getTTSAsyncTaskWithText:(id)arg1 roleID:(id)arg2;
- (id)getOrCreateTTSAsyncTaskWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3;
- (unsigned long long)ttsAsyncRequestStatusWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)asyncRequestTTSWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 captionItems:(id)arg4 totalDuration:(struct)arg5 completionHandler:(id /* block */)arg6;
- (void)cancelTTSAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)cancelAllTTSAsyncRequests;
- (id)getTTSAsyncTaskGroupWithAudioID:(id)arg1 roleID:(id)arg2;
- (id)getOrCreateTTSAsyncTaskGroupWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3;
- (unsigned long long)sttAsyncRequestStatusWithAudioID:(id)arg1;
- (void)asyncRequestSTTWithAudioID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelSTTAsyncRequestWithAudioID:(id)arg1;
- (void)cancelAllSTTAsyncRequests;
- (id)sttAsyncTaskWithAudioID:(id)arg1;
- (unsigned long long)longSTTAsyncRequestStatusWithAudioID:(id)arg1;
- (void)asyncRequestLongSTTWithAudioID:(id)arg1 audioData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLongSTTAsyncRequestWithAudioID:(id)arg1;
- (void)cancelAllLongSTTAsyncRequests;
- (id)getSTTAsyncTaskGroupWithAudioID:(id)arg1;
- (id)getOrCreateSTTAsyncTaskGroupWithAudioID:(id)arg1;
- (void)enqueueSTSAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2 audioData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)enqueueTTSAsyncRequestWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)enqueueTTSGroupAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 captionItems:(id)arg4 totalDuration:(struct)arg5 completionHandler:(id /* block */)arg6;
- (void)enqueueSTTGroupAsyncRequestWithAudioID:(id)arg1 audioData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)checkSpeechAsyncRequestQueue;
- (void)dequeueAsyncRequestAndSend;
- (void)_sendSTSAsyncRequestWithQueueItem:(id)arg1;
- (void)_sendTTSAsyncRequestWithQueueItem:(id)arg1;
- (void)_sendTTSGroupAsyncRequestWithQueueItem:(id)arg1;
- (void)_sendSTTGroupAsyncRequestWithQueueItem:(id)arg1;
- (long long)runningSpeechAsyncTaskCount;
- (id)getVocalEnhancementAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (id)getOrCreateVocalEnhancementAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (long long)runningVocalEnhancementAsyncTaskCount;
- (void)enqueueVocalEnhancementAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)checkVocalEnhancementAsyncRequestQueue;
- (void)dequeueVocalEnhancementAsyncRequestAndSend;
- (void)_sendVocalEnhancementAsyncRequestWithQueueItem:(id)arg1;
- (unsigned long long)vocalEnhancementAsyncRequestStatusWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)asyncVocalEnhancementRequestWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelVocalEnhancementAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)cancelAllVocalEnhancementAsyncRequests;
- (id)getSpeechCloneAsyncTaskGroupWithAudioID:(id)arg1;
- (id)getOrCreateSpeechCloneAsyncTaskGroupWithAudioID:(id)arg1;
- (void)enqueueSpeechCloneGroupAsyncRequestWithAudioID:(id)arg1 audioData:(id)arg2 text:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_sendSpeechCloneGroupAsyncRequestWithQueueItem:(id)arg1;
- (unsigned long long)speechCloneAsyncRequestStatusWithAudioID:(id)arg1;
- (void)asyncRequestSpeechCloneWithAudioID:(id)arg1 audioData:(id)arg2 text:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelSpeechClonesyncRequestWithAudioID:(id)arg1;
- (void)cancelAllSpeechCloneAsyncRequests;
- (id)initWithAudioFileManager:(id)arg1;
- (void)dealloc;
- (id)speechFilePathWithAudioID:(id)arg1 roleID:(id)arg2;
- (id)ttsSpeechFilePathWithText:(id)arg1 roleID:(id)arg2;
- (void)cancelAllRequests;
- (id)pcmDataWithIdentifier:(id)arg1;
- (id)audioDataWithIdentifier:(id)arg1;
- (id)audioFileManager;
- (id)stsRequestStatusDidUpdateSignal;
- (id)sttRequestStatusDidUpdateSignal;
- (id)ttsRequestStatusDidUpdateSignal;
- (id)vocalEnhancementRequestStatusDidUpdateSignal;
- (id)longSTTRequestStatusDidUpdateSignal;
- (id)speechCloneRequestStatusDidUpdateSignal;
- (long long)maxConcurrentCount;
- (id)sttAsyncTasksByAudioID;
- (id)stsAsyncTasksByAudioID;
- (id)ttsAsyncTasksByText;
- (id)vocalEnhancementAsyncTasksByAudioID;
- (id)ttsAsyncTaskGroupsByAudioID;
- (id)sttAsyncTaskGroupsByAudioID;
- (id)speechCloneAsyncTaskGroupsByAudioID;
- (id)pendingSpeechAsyncRequestItems;
- (id)pendingVocalEnhancementItems;
- (void).cxx_destruct;
@end

