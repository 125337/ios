@interface WCRawMediaTaskOperation : WCSilentTask
{
    BOOL _backgroundTaskEnabled; // +0x8
    NSMutableArray * _taskMediaArray; // +0x10
    id <WCRawMediaTaskOperationDelegate> _delegate; // +0x18
    CMessageWrap * _runningMessageWrap; // +0x20
}
- (id)initWithTaskArray:(id)arg1;
- (void)startOperation;
- (void)runLoop;
- (BOOL)stop;
- (BOOL)runDemoWork:(id)arg1 withMsgWrap:(id)arg2;
- (BOOL)runTestWork:(id)arg1 withMsgWrap:(id)arg2;
- (BOOL)runWork:(id)arg1 withMsgWrap:(id)arg2;
- (id)taskMediaArray;
- (void)setTaskMediaArray:(id)arg1;
- (BOOL)backgroundTaskEnabled;
- (void)setBackgroundTaskEnabled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)runningMessageWrap;
- (void)setRunningMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
