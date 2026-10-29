@interface NetCmdSendOnlyEvent : CBaseEvent
{
    INetCmdSendOnly * m_netcmd; // +0x30
    int m_cmdstatus; // +0x38
    int _taskRetryCount; // +0x3c
    int _taskTotalTimeoutMS; // +0x40
}
- (id)init;
- (void)dealloc;
- (BOOL)isSendOnlyTask;
- (void)TryStart;
- (void)Stop;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (INetCmdSendOnly *)m_netcmd;
- (void)setM_netcmd:(INetCmdSendOnly *)arg1;
- (int)taskRetryCount;
- (void)setTaskRetryCount:(int)arg1;
- (int)taskTotalTimeoutMS;
- (void)setTaskTotalTimeoutMS:(int)arg1;
@end
