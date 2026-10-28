@interface WCMiddleImageService : MMUserService <WCMiddleImageTaskDelegate, MMServiceProtocol>
{
    BOOL _bInRunning; // +0x8
    WCMiddleImageTaskOperation * _taskOperation; // +0x10
    id /* block */ _finishAction; // +0x18
}
+ (BOOL)isSupportMiddleImageCompress;
- (void)startMiddleImageService;
- (void)startMiddleImageServiceWithCompletion:(id /* block */)arg1 inHighPriority:(BOOL)arg2;
- (void)onMiddleImageOperationFinish:(BOOL)arg1 analyseLog:(id)arg2;
- (id)taskOperation;
- (void)setTaskOperation:(id)arg1;
- (BOOL)bInRunning;
- (void)setBInRunning:(BOOL)arg1;
- (id /* block */)finishAction;
- (void)setFinishAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
