@interface WAAppTaskHandlerWrapper : NSObject
{
    id /* block */ _updateContactHandler; // +0x8
    id /* block */ _launchTaskHandler; // +0x10
    id /* block */ _runningEventHandler; // +0x18
    id /* block */ _bizCompleteHandler; // +0x20
    id /* block */ _bizDataPipeHandler; // +0x28
}
- (id /* block */)updateContactHandler;
- (void)setUpdateContactHandler:(id /* block */)arg1;
- (id /* block */)launchTaskHandler;
- (void)setLaunchTaskHandler:(id /* block */)arg1;
- (id /* block */)runningEventHandler;
- (void)setRunningEventHandler:(id /* block */)arg1;
- (id /* block */)bizCompleteHandler;
- (void)setBizCompleteHandler:(id /* block */)arg1;
- (id /* block */)bizDataPipeHandler;
- (void)setBizDataPipeHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

