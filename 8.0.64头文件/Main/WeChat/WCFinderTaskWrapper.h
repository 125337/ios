@interface WCFinderTaskWrapper : NSObject <WCFinderTaskWrapperComplete>
{
    BOOL _bAllowConcurrent; // +0x8
    NSString * _name; // +0x10
    id /* block */ _prepareBlock; // +0x18
    id /* block */ _cancelBlock; // +0x20
    id /* block */ _cancelOrFinshBlock; // +0x28
    id /* block */ _runningBlock; // +0x30
    id /* block */ _finishBlock; // +0x38
    id /* block */ _completeBlock; // +0x40
    id _waitParsingDepend; // +0x48
    long long _tag; // +0x50
    long long _status; // +0x58
    WCFinderTaskWrapper * _depend; // +0x60
    id _next; // +0x68
    id <WCFinderTaskWrapperDelegate> _delegate; // +0x70
}
+ (id)new:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;
- (id)onPrepare:(id /* block */)arg1;
- (id)onCancel:(id /* block */)arg1;
- (id)onRunning:(id /* block */)arg1;
- (id)onFinishOrCancel:(id /* block */)arg1;
- (id)onFinish:(id /* block */)arg1;
- (id)configTag:(long long)arg1;
- (id)configAllowConcurrent:(BOOL)arg1;
- (id)configDepend:(id)arg1;
- (void)setDepend:(id)arg1;
- (void)removeNext:(id)arg1;
- (id)mutArrayNexts;
- (void)insertNext:(id)arg1;
- (id)swapNext;
- (void)cleanNext;
- (void)performRun:(id)arg1 delegate:(id)arg2;
- (void)cancel;
- (void)complete:(id /* block */)arg1;
- (void)_fullFilled:(id /* block */)arg1;
- (void)_wakeByDepend:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)name;
- (void)setName:(id)arg1;
- (id /* block */)prepareBlock;
- (void)setPrepareBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)cancelOrFinshBlock;
- (void)setCancelOrFinshBlock:(id /* block */)arg1;
- (id /* block */)runningBlock;
- (void)setRunningBlock:(id /* block */)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (id)waitParsingDepend;
- (void)setWaitParsingDepend:(id)arg1;
- (long long)tag;
- (void)setTag:(long long)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id)depend;
- (id)next;
- (void)setNext:(id)arg1;
- (BOOL)bAllowConcurrent;
- (void)setBAllowConcurrent:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
