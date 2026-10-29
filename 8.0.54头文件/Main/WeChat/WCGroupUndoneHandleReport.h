@interface WCGroupUndoneHandleReport : WCGroupUndoneBaseReport
{
    unsigned int _actionType; // +0x30
    unsigned int _exitType; // +0x34
}
+ (void)DoGroupUndoneHandleReportWithItem:(id)arg1 actionType:(unsigned int)arg2 exitType:(unsigned int)arg3;
- (void)report;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)exitType;
- (void)setExitType:(unsigned int)arg1;
@end

