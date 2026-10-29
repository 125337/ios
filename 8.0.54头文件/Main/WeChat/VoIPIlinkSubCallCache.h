@interface VoIPIlinkSubCallCache : NSObject
{
    VoIPMtInviteMsg * _inviteMsg; // +0x8
    CMessageWrap * _inviteMessageWrap; // +0x10
    ConfRecvInviteInfo * _inviteInfo; // +0x18
}
- (id)initWithInviteMsg:(id)arg1 messageWrap:(id)arg2;
- (id)description;
- (id)inviteMsg;
- (void)setInviteMsg:(id)arg1;
- (id)inviteMessageWrap;
- (void)setInviteMessageWrap:(id)arg1;
- (id)inviteInfo;
- (void)setInviteInfo:(id)arg1;
- (void).cxx_destruct;
@end

