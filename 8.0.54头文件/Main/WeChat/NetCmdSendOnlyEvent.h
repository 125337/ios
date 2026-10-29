@interface NetCmdSendOnlyEvent : CBaseEvent
{
    INetCmdSendOnly * m_netcmd; // +0x28
    int m_cmdstatus; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)TryStart;
- (void)Stop;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (INetCmdSendOnly *)m_netcmd;
- (void)setM_netcmd:(INetCmdSendOnly *)arg1;
@end

