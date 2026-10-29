@interface CameraScanOperateOptmize : NSObject
{
    BOOL _hasTaskRunning; // +0x8
    id <CameraScanOperateOptmizeDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _calcuteQueue; // +0x18
}
- (id)init;
- (void)activeFocus:(QBarSnapshot)arg1;
- (void)runASyncOnCalcQueue:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)calcuteQueue;
- (void)setCalcuteQueue:(id)arg1;
- (BOOL)hasTaskRunning;
- (void)setHasTaskRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end
