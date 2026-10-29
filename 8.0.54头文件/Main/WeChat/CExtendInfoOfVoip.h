@interface CExtendInfoOfVoip : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiVoipRecvTime; // +0x8
    unsigned int m_uiVoipStatus; // +0xc
    unsigned int m_uiVoipInviteType; // +0x10
    unsigned long long m_iVoipRoomid; // +0x18
    long long m_i64VoipKey; // +0x20
    unsigned int m_wordingType; // +0x28
    unsigned int m_duration; // +0x2c
    CMessageWrap * m_refMessageWrap; // +0x30
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)arg1;
- (long long)m_i64VoipKey;
- (void)setM_i64VoipKey:(long long)arg1;
- (unsigned long long)m_iVoipRoomid;
- (void)setM_iVoipRoomid:(unsigned long long)arg1;
- (unsigned int)m_uiVoipInviteType;
- (void)setM_uiVoipInviteType:(unsigned int)arg1;
- (unsigned int)m_uiVoipRecvTime;
- (void)setM_uiVoipRecvTime:(unsigned int)arg1;
- (unsigned int)m_uiVoipStatus;
- (void)setM_uiVoipStatus:(unsigned int)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (unsigned int)m_wordingType;
- (void)setM_wordingType:(unsigned int)arg1;
- (unsigned int)m_duration;
- (void)setM_duration:(unsigned int)arg1;
- (void).cxx_destruct;
@end

