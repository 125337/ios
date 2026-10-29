@interface WCAdAppointmentLogic : WCAdvertiseOperationLogicBase <WCAdConfirmHalfScreenBaseViewDelegate>
{
    id <WCAdAppointmentLogicDelegate> _delegate; // +0x8
    WCAdAppointmentInfo * _appointmentInfo; // +0x10
    WCAdConfirmHalfScreenBaseView * _halfScreenView; // +0x18
}
- (id)initWithAppointmentInfo:(id)arg1;
- (int)fetchAppointmentStatus;
- (void)showAppointmentConfirmViewForStatus:(int)arg1 isNotice:(BOOL)arg2;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)arg1;
- (void)checkAppointmentStatusWithUxInfo:(id)arg1;
- (void)submitAppointmentWithOpType:(int)arg1 uxInfo:(id)arg2 phoneNumber:(id)arg3;
- (void)handleAppointmentRespWithOpType:(int)arg1 isSuccess:(BOOL)arg2 status:(int)arg3;
- (void)postAppointmentStatusUpdateEvent:(int)arg1;
- (void)updateAppointmentStatus:(int)arg1;
- (BOOL)shouldAppointmentProgressContinuing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appointmentInfo;
- (void)setAppointmentInfo:(id)arg1;
- (id)halfScreenView;
- (void)setHalfScreenView:(id)arg1;
- (void).cxx_destruct;
@end

