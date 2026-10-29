@interface JITXHRRequestTask : NSObject
{
    BOOL _finished; // +0x8
    BOOL _async; // +0x9
    BOOL _stopped; // +0xa
    id <JITXHRRequestTaskDelegate> _delegate; // +0x10
    id <WKURLSchemeTask> _task; // +0x18
    id /* block */ _iOS16StringFixBlock; // +0x20
}
- (id)initWith:(id)arg1;
- (id)path;
- (id)data;
- (id)headerFields;
- (int)workerId;
- (void)responseWith:(id)arg1 data:(id)arg2 mime:(id)arg3 customHeaders:(id)arg4;
- (void)responseWith:(id)arg1 apiResult:(id)arg2 data:(id)arg3 mime:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (BOOL)async;
- (void)setAsync:(BOOL)arg1;
- (BOOL)stopped;
- (void)setStopped:(BOOL)arg1;
- (id /* block */)iOS16StringFixBlock;
- (void)setIOS16StringFixBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
