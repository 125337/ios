@interface VoIPMPSubCallCache : NSObject
{
    BOOL _isChangeToMultitalk; // +0x8
    VoIPMtInviteMsg * _inviteMsg; // +0x10
    CMessageWrap * _inviteMessageWrap; // +0x18
    ConfRecvInviteInfo * _inviteInfo; // +0x20
    unsigned long long _inviteType; // +0x28
    NSData * _data; // +0x30
    NSDictionary * _memberStatusMap; // +0x38
}
- (id)initWithInviteMsg:(id)arg1 messageWrap:(id)arg2;
- (id)description;
- (id)voIPMonoMsgWithType:(unsigned int)arg1;
- (id)inviteMultiTalkMonoMsg;
- (id)cancelMultiTalkMonoMsg;
- (id)inviteMonoMsg;
- (id)cancelMonoMsg;
- (id)inviteMsg;
- (void)setInviteMsg:(id)arg1;
- (id)inviteMessageWrap;
- (void)setInviteMessageWrap:(id)arg1;
- (id)inviteInfo;
- (void)setInviteInfo:(id)arg1;
- (unsigned long long)inviteType;
- (void)setInviteType:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)isChangeToMultitalk;
- (void)setIsChangeToMultitalk:(BOOL)arg1;
- (id)memberStatusMap;
- (void)setMemberStatusMap:(id)arg1;
- (void).cxx_destruct;
@end
