@interface GameChatReporter : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL _isReporting; // +0x8
    NSMutableArray * _reportQueue; // +0x10
}
- (id)init;
- (void)reportUnreadState:(unsigned int)arg1;
- (void)doReport;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)reportQueue;
- (void)setReportQueue:(id)arg1;
- (BOOL)isReporting;
- (void)setIsReporting:(BOOL)arg1;
- (void).cxx_destruct;
@end

