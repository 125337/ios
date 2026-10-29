@interface MessageTransferTask : NSObject <PBCoding>
{
    BOOL _pendingCalcInitialState; // +0x8
    int _progress; // +0xc
    NSString * _taskId; // +0x10
    unsigned long long _type; // +0x18
    unsigned long long _state; // +0x20
    NSError * _error; // +0x28
    unsigned long long _pauseTime; // +0x30
}
+ (void)PBArrayAdd_taskId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_progress;
+ (void)PBArrayAdd_pauseTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithType:(unsigned long long)arg1 taskId:(id)arg2;
- (BOOL)calcInitialState;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)isPaused;
- (BOOL)isCompleted;
- (BOOL)isFail;
- (BOOL)isInProcess;
- (void)setProgress:(int)arg1;
- (id)taskName;
- (unsigned long long)fileSize;
- (id)fileSizeText;
- (id)filePath;
- (id)fileExt;
- (BOOL)isFileExist;
- (long long)secondsBeforeExpired;
- (long long)daysBeforeExpired;
- (BOOL)isFileExpired;
- (BOOL)canResumeTransfer;
- (void)startTransfer;
- (void)pauseTransfer;
- (void)stopTransfer;
- (BOOL)enableRestore;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (int)progress;
- (unsigned long long)pauseTime;
- (void)setPauseTime:(unsigned long long)arg1;
- (BOOL)pendingCalcInitialState;
- (void)setPendingCalcInitialState:(BOOL)arg1;
- (void).cxx_destruct;
@end
