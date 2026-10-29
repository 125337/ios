@interface MJTTSAsyncTaskGroup : NSObject
{
    BOOL _isCloneTimbre; // +0x8
    NSString * _audioID; // +0x10
    NSString * _roleID; // +0x18
    MJAudioFileManager * _audioFileManager; // +0x20
    unsigned long long _status; // +0x28
    UBDictionarySignal * _statusDidUpdateSignal; // +0x30
    NSArray * _captionItems; // +0x38
    long long _audioSampleRate; // +0x40
    NSMutableDictionary * _tasksByText; // +0x48
    NSMutableArray * _completions; // +0x50
    struct _totalDuration; // +0x58
}
+ (id)regulateCaptionItems:(id)arg1;
- (id)initWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(BOOL)arg3 audioFileManager:(id)arg4 statusDidUpdateSignal:(id)arg5;
- (void)dealloc;
- (void)setAudioSampleRateIfNeeded:(long long)arg1;
- (void)startWithCaptionItems:(id)arg1 totalDuration:(struct)arg2 completionHandler:(id /* block */)arg3;
- (void)handleResponseDatas:(id)arg1;
- (void)cancel;
- (BOOL)appendCompletionIfRunning:(id)arg1;
- (void)markStatusPending;
- (long long)runningTaskCount;
- (void)handleTaskStart;
- (void)handleTaskSuccessWithSpeechFilePath:(id)arg1;
- (void)handleTaskFailWithError:(id)arg1;
- (id)statusDidUpdateParams;
- (BOOL)containsInvalidTaskID;
- (id)description;
- (id)audioID;
- (id)roleID;
- (id)audioFileManager;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)statusDidUpdateSignal;
- (id)captionItems;
- (void)setCaptionItems:(id)arg1;
- (struct)totalDuration;
- (void)setTotalDuration:(struct)arg1;
- (BOOL)isCloneTimbre;
- (long long)audioSampleRate;
- (void)setAudioSampleRate:(long long)arg1;
- (id)tasksByText;
- (void)setTasksByText:(id)arg1;
- (id)completions;
- (void).cxx_destruct;
@end
