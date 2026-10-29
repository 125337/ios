@interface WCGroupUndoneMsgOpReport : WCGroupUndoneBaseReport
{
    BOOL _isShowEdu; // +0x30
    unsigned int _exitType; // +0x34
    unsigned int _actionType; // +0x38
}
+ (void)DoGroupUndoneMsgOpReportWithItem:(id)arg1 actionType:(unsigned int)arg2 exitType:(unsigned int)arg3 isShowEdu:(BOOL)arg4;
- (void)report;
- (unsigned int)exitType;
- (void)setExitType:(unsigned int)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (BOOL)isShowEdu;
- (void)setIsShowEdu:(BOOL)arg1;
@end
