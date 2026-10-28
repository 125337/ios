@interface MessageTransferTask : NSObject
{
    int _progress; // +0x8
    unsigned long long _type; // +0x10
    unsigned long long _state; // +0x18
    NSError * _error; // +0x20
}
- (id)initWithType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)isPaused;
- (BOOL)isFail;
- (BOOL)isInProcess;
- (void)setProgress:(int)arg1;
- (id)taskId;
- (id)taskName;
- (unsigned long long)fileSize;
- (id)fileSizeText;
- (id)filePath;
- (id)fileExt;
- (BOOL)isFileExist;
- (long long)daysBeforeExpired;
- (BOOL)isFileExpired;
- (void)startTransfer;
- (void)pauseTransfer;
- (void)stopTransfer;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (int)progress;
- (void).cxx_destruct;
@end
