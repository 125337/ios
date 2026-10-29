@interface MultiTalkMonoMsg : MonoServiceMsg
{
    BOOL m_isCancelMsg; // +0x8
    BOOL m_isNotFriendMsg; // +0x9
    id _m_group; // +0x10
    NSString * _m_fromUser; // +0x18
    WXLocalNotificationInfo * _m_notificationInfo; // +0x20
    unsigned long long _m_msgReceiveTime; // +0x28
}
+ (id)inviteMsg;
+ (id)notFriendInviteMsg;
+ (id)cancelMsg;
+ (id)getInviteUserFromGroup:(id)arg1;
- (id)init;
- (BOOL)isOutOfDate;
- (BOOL)isCancelMsg;
- (id)serviceType;
- (id)msgKey;
- (BOOL)isTheSameToMsg:(id)arg1;
- (BOOL)isParaVaild;
- (id)voipNotificationContentInfoWithRequestID:(id)arg1;
- (id)localNotificationInfo;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)m_isCancelMsg;
- (void)setM_isCancelMsg:(BOOL)arg1;
- (BOOL)m_isNotFriendMsg;
- (void)setM_isNotFriendMsg:(BOOL)arg1;
- (id)m_group;
- (void)setM_group:(id)arg1;
- (id)m_fromUser;
- (void)setM_fromUser:(id)arg1;
- (id)m_notificationInfo;
- (void)setM_notificationInfo:(id)arg1;
- (unsigned long long)m_msgReceiveTime;
- (void)setM_msgReceiveTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

