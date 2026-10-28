@interface WCMiddleImageTaskOperation : WCSilentTask
{
    NSMutableArray * _taskArray; // +0x8
    id <WCMiddleImageTaskDelegate> _delegate; // +0x10
}
- (id)initWithTaskArray:(id)arg1;
- (void)setDontPause;
- (void)startOperation;
- (void)runLoop;
- (id)taskArray;
- (void)setTaskArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
