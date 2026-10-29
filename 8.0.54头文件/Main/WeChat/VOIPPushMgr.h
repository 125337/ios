@interface VOIPPushMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
- (void)SendAckRequestByRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2 andContact:(id)arg3 andAckStatus:(int)arg4 needPreconnect:(BOOL)arg5;
- (void)HandleVoipAckResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipInviteRemindResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end

