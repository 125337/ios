@interface EventService : MMUserService <MMServiceProtocol>
{
    CMultiEventWrap * m_oEventMgr; // +0x8
}
+ (BOOL)canUseInSafemode;
- (void)onServiceInit;
- (void)dealloc;
- (unsigned int)internalCreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2 EventType:(unsigned int)arg3;
- (unsigned int)CreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2;
- (unsigned int)CreateProtobufEventWithoutPBW:(id)arg1 Flag:(unsigned int)arg2;
- (unsigned int)CreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2 EventType:(unsigned int)arg3;
- (unsigned int)CreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2 EventType:(unsigned int)arg3 PWB:(const PBCGIHelperWrap *)arg4;
- (void)StartService;
- (void)StopService;
- (void)TryStartEvents;
- (void)StopEvent:(unsigned int)arg1;
- (void)TerminateEventIfNotReceived:(unsigned int)arg1;
- (BOOL)req2Buf:(unsigned int)arg1 Out:(AutoBuffer *)arg2 Host:(id)arg3 sequenceId:(unsigned short)arg4;
- (int)buf2Resp:(unsigned int)arg1 In:(const AutoBuffer *)arg2 Err:(int *)arg3 Flags:(unsigned long long *)arg4 sequenceId:(unsigned short *)arg5;
- (int)payBuf2Resp:(unsigned int)arg1 In:(const AutoBuffer *)arg2 Err:(int *)arg3 Flags:(unsigned long long *)arg4 sequenceId:(unsigned short *)arg5;
- (void)HandleRespThread:(id)arg1;
- (void)HandlePayRespThread:(id)arg1;
- (int)onGYNetEnd:(int)arg1 Code:(int)arg2 Msg:(const char *)arg3 Hashcode:(unsigned int)arg4 cgiProfile:(const void *)arg5 respBuf:(const AutoBuffer *)arg6;
- (int)onPayGYNetEnd:(int)arg1 Code:(int)arg2 Msg:(const char *)arg3 Hashcode:(unsigned int)arg4 cgiProfile:(const void *)arg5 respBuf:(const AutoBuffer *)arg6;
- (unsigned int)AddEvent:(id)arg1;
- (unsigned int)IsEventTypeExist:(unsigned int)arg1;
- (void).cxx_destruct;
@end
