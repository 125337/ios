@interface WeNoteVoiceToTextManager : MMUserService <MMSpeakerDiarizationDelegate, MMServiceProtocol>
{
    id <WeNoteVoiceToTextManagerDelegate> _currentDelegate; // +0x8
    NSMutableDictionary * _tasks; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)startConvertVoiceData:(id)arg1 favId:(unsigned int)arg2 localId:(unsigned int)arg3 taskKey:(id)arg4 delegate:(id)arg5;
- (void)cancelAll;
- (id)_taskForDiarizationLogic:(id)arg1;
- (void)_refreshVoiceDataFromDBForTask:(id)arg1;
- (void)_startDistinguishSpeakerForTask:(id)arg1;
- (void)MMSpeakerDiarization:(id)arg1 didUpdateSpeakerNum:(int)arg2;
- (void)MMSpeakerDiarization:(id)arg1 didUpdateSegments:(id)arg2 highlightSegments:(id)arg3;
- (void)MMSpeakerDiarization:(id)arg1 didFinishWithCode:(unsigned long long)arg2 serverErrorCode:(int)arg3 serverErrorDesc:(id)arg4;
- (void)_completeTask:(id)arg1 withSegments:(id)arg2;
- (void)_completeTask:(id)arg1 withError:(id)arg2;
- (void)_cancelTaskForTaskKey:(id)arg1;
- (id)_maskedJoinedTextSummaryForSegments:(id)arg1;
- (id)_parseDataExt:(id)arg1;
- (id)mmkv;
- (id)_mmkvKeyForTask:(id)arg1;
- (void)_writeCacheWithTask:(id)arg1 segments:(id)arg2 highlightSegments:(id)arg3;
- (void)_removeCacheWithTask:(id)arg1;
- (id)currentDelegate;
- (void)setCurrentDelegate:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (void).cxx_destruct;
@end
