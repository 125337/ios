@interface WAJSEventHandler_OpenVoiceBase : WAJSEventHandler_BaseEvent
- (void)onStartRecord;
- (void)onStopRecord;
- (int)convertFromNativeErrCodeToUserErrCodeJoin:(int)arg1 errCode:(int)arg2;
- (void)addErrCodeToRet:(id)arg1 withErrCode:(int)arg2;
- (id)convertFromMemberArrayToDic:(id)arg1;
- (BOOL)isGame;
- (ReasonModel)generateReasonFromVal:(int)arg1;
- (id)parseJoinRoomInfo:(id)arg1;
@end
