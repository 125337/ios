@interface TXYHyStageList : NSObject
{
    BOOL _start; // +0x8
    id <TXYHyStageListProtocol> _delegate; // +0x10
    NSArray * _actions; // +0x18
}
- (id)initWith:(id)arg1 delegate:(id)arg2;
- (void)start;
- (void)checkNextRun;
- (void)runCallBack:(id)arg1;
- (id)find:(unsigned long long)arg1;
- (void)toFinish:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (void).cxx_destruct;
@end
