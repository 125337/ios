@interface WCAdAppointmentSubmitActionModel : WCAdChannelReportExtendInfoModel
{
    int _opType; // +0x8
    unsigned long long _appointmentId; // +0x10
}
- (unsigned long long)appointmentId;
- (void)setAppointmentId:(unsigned long long)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
@end
