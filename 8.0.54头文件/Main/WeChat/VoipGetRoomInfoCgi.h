@interface VoipGetRoomInfoCgi : NSObject <PBMessageObserverDelegate>
{
    VoipMonoMsg * m_voipMonoMsg; // +0x8
    id <VoipGetRoomInfoCgiDelegate> _m_delegate; // +0x10
}
- (id)init;
- (void)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_voipMonoMsg;
- (void)setM_voipMonoMsg:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

