@interface RecordUploadOrchestrator : NSObject <UploadStateStageDelegate>
{
    BOOL _bJustUploadNoteDataField; // +0x8
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x9
    BOOL _isStopped; // +0xa
    BOOL _isFromFav; // +0xb
    id <RecordUploadOrchestratorDelegate> _delegate; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    NSString * _identifier; // +0x20
    NSMutableArray * _arrUploadTask; // +0x28
    UploadStateStage * _state; // +0x30
    long long _currentProcessPhase; // +0x38
    NSMutableArray * _arrRecordDataField; // +0x40
}
+ (id)phaseNameForPhase:(long long)arg1;
- (id)initWithMsgWrap:(id)arg1;
- (void)startTask;
- (void)stopTask;
- (void)transitionToPhase:(long long)arg1;
- (BOOL)isValidTransitionFrom:(long long)arg1 to:(long long)arg2;
- (BOOL)isFromFav;
- (id)createProcessorForPhase:(long long)arg1;
- (long long)currentPhase;
- (void)updateUploadTaskList:(id)arg1;
- (void)changeToState:(id)arg1;
- (void)onUploadDataListFinish;
- (void)onUploadStateStage:(id)arg1 failWithType:(int)arg2;
- (void)onStateProcessFinished;
- (void)onHistoryRecordDataUploadFinishWithCdnInfo:(id)arg1 errorMsg:(id)arg2;
- (void)updateMediaWrapWithBitset:(int)arg1;
- (void)updateUploadProgressWithTotal:(unsigned long long)arg1 remain:(unsigned long long)arg2;
- (void)onMediaDataUploadSuccess;
- (void)generateUploadRecordDataField;
- (void)generateUploadTaskWithDataList:(id)arg1 ignoreMedia:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)msgWrap;
- (id)identifier;
- (id)arrUploadTask;
- (void)setArrUploadTask:(id)arg1;
- (BOOL)bJustUploadNoteDataField;
- (void)setBJustUploadNoteDataField:(BOOL)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (void)setIsFromFav:(BOOL)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (long long)currentProcessPhase;
- (void)setCurrentProcessPhase:(long long)arg1;
- (id)arrRecordDataField;
- (void)setArrRecordDataField:(id)arg1;
- (void).cxx_destruct;
@end
