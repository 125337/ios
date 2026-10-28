@interface WCFImageDownloaderOperation : NSObject <WCFImageDownloadOperation>
{
    WCFImageTaskInfo * _taskInfo; // +0x8
    unsigned long long _checksum; // +0x10
    NSMutableDictionary * _callbacks; // +0x18
    long long _cdnType; // +0x20
    BOOL _isStarted; // +0x28
    BOOL _terminated; // +0x29
    BOOL _isPreload; // +0x2a
    BOOL _executed; // +0x2b
    BOOL _executing; // +0x2c
    BOOL _finished; // +0x2d
    BOOL _cancelled; // +0x2e
    long long _weight; // +0x30
    long long _priority; // +0x38
    id /* block */ _completion; // +0x40
    unsigned long long _scene; // +0x48
    unsigned long long _feedMediaType; // +0x50
    NSString * _tid; // +0x58
    unsigned long long _beginDownloadTimestamp; // +0x60
    long long _status; // +0x68
}
+ (id)operationWithMedia:(id)arg1 type:(long long)arg2 key:(id)arg3;
+ (id)operationsWithMedia:(id)arg1 isThumb:(BOOL)arg2;
+ (id)marsScheduleQueue;
- (id)initWithTaskInfo:(id)arg1;
- (id)initWithURL:(id)arg1 key:(id)arg2;
- (void)commonInit;
- (id)cdnTask;
- (long long)mediaType;
- (id)key;
- (long long)factor;
- (BOOL)isInvalid;
- (BOOL)isURLInvalid;
- (void)addCompletion:(id /* block */)arg1 forToken:(id)arg2 param:(struct)arg3;
- (id)allCallbacks;
- (id)removedCompletionByToken:(id)arg1;
- (void)done;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (BOOL)cancel:(id)arg1;
- (void)cancel;
- (void)start;
- (void)realStart;
- (id)taskURLString;
- (void)startMarsTask:(BOOL *)arg1 completion:(id /* block */)arg2;
- (void)stopTask;
- (BOOL)isLocalTask;
- (id)pathForLocalTask;
- (void)callCompletionsWithError:(id)arg1 callbacks:(id)arg2;
- (void)callCompletionsWithPath:(id)arg1 callbacks:(id)arg2;
- (void)doFinish:(id)arg1 error:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compareByFactor:(id)arg1;
- (long long)compareByWeight:(id)arg1;
- (id)toLogMessage;
- (id)debugDescription;
- (id)description;
- (id)tid;
- (unsigned long long)feedMediaType;
- (unsigned long long)scene;
- (BOOL)isPreload;
- (long long)weight;
- (BOOL)executed;
- (long long)priority;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)isExecuting;
- (void)setExecuting:(BOOL)arg1;
- (void)setScene:(unsigned long long)arg1;
- (void)setFeedMediaType:(unsigned long long)arg1;
- (void)setTid:(id)arg1;
- (unsigned long long)beginDownloadTimestamp;
- (void)setBeginDownloadTimestamp:(unsigned long long)arg1;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (void).cxx_destruct;
@end
