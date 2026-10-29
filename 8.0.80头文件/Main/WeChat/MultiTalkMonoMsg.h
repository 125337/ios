@interface MultiTalkMonoMsg : MonoServiceMsg
{
    BOOL m_isCancelMsg; // +0x8
    BOOL _m_muteNotification; // +0x9
    MMConfSDKMemberMgr * _m_group; // +0x10
    NSString * _m_fromUser; // +0x18
    unsigned long long _roomID; // +0x20
    WXLocalNotificationInfo * _m_notificationInfo; // +0x28
    unsigned long long _m_msgReceiveTime; // +0x30
}
+ (id)inviteMsg;
+ (id)cancelMsg;
+ (id)inviteMsgWithRoomID:(unsigned long long)arg1;
+ (id)cancelMsgWithRoomID:(unsigned long long)arg1;
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
- (id)m_group;
- (void)setM_group:(id)arg1;
- (id)m_fromUser;
- (void)setM_fromUser:(id)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (BOOL)m_muteNotification;
- (void)setM_muteNotification:(BOOL)arg1;
- (id)m_notificationInfo;
- (void)setM_notificationInfo:(id)arg1;
- (unsigned long long)m_msgReceiveTime;
- (void)setM_msgReceiveTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
