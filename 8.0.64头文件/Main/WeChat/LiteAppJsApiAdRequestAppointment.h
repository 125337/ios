@interface LiteAppJsApiAdRequestAppointment : LiteAppJsApiAdBase <PBMessageObserverDelegate>
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)sendAdAppointmentReqWithUxInfo:(id)arg1 opType:(int)arg2 appointmentId:(unsigned long long)arg3 phoneNumber:(id)arg4;
- (void)handleAdAppointmentResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
