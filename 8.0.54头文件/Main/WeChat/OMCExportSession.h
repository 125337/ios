@interface OMCExportSession : NSObject
{
    SharedPtr<XVCExportSession> _backingSession; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)startExportingWithOutputFilePath:(id)arg1 exportSettings:(id)arg2 timeline:(id)arg3 exportTimeRange:(struct)arg4 startHandler:(id /* block */)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)cancelExportingWithCompletionHandler:(id /* block */)arg1;
- (SharedPtr<XVCExportSession>)backingSession;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

