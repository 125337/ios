@interface WCAdGeneralServiceMsgClickModel : WCAdChannelReportExtendInfoModel
{
    int _type; // +0x8
    unsigned long long _appointmentId; // +0x10
}
- (int)type;
- (void)setType:(int)arg1;
- (unsigned long long)appointmentId;
- (void)setAppointmentId:(unsigned long long)arg1;
@end

