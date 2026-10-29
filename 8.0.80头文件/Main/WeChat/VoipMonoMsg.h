@interface VoipMonoMsg : MonoServiceMsg
{
    BOOL _m_fromAnswered; // +0x8
    BOOL _hasHolded; // +0x9
    BOOL _isFromIlink; // +0xa
    BOOL _m_muteNotification; // +0xb
    unsigned int _m_receiveTime; // +0xc
    unsigned int _m_msgType; // +0x10
    unsigned int _m_mode; // +0x14
    unsigned int _m_fromScene; // +0x18
    unsigned long long _m_roomId; // +0x20
    long long _m_roomKey; // +0x28
    NSString * _m_fromUser; // +0x30
    long long _m_n64MesSvrID; // +0x38
    long long _msgID; // +0x40
    NSString * _notificationRequestID; // +0x48
    unsigned long long _recvTime; // +0x50
    WXLocalNotificationInfo * _m_notificationInfo; // +0x58
}
+ (id)defaultServiceType;
+ (id)msgKeyWithRoomID:(unsigned long long)arg1;
- (id)init;
- (BOOL)isOutOfDate;
- (BOOL)receiveTimeOutOfDate;
- (BOOL)isCancelMsg;
- (id)serviceType;
- (id)msgKey;
- (BOOL)isTheSameToMsg:(id)arg1;
- (BOOL)isParaVaild;
- (id)voipNotificationContentInfo;
- (id)localNotificationInfo;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isVideo;
- (BOOL)isInvite;
- (unsigned int)m_receiveTime;
- (void)setM_receiveTime:(unsigned int)arg1;
- (unsigned int)m_msgType;
- (void)setM_msgType:(unsigned int)arg1;
- (unsigned int)m_mode;
- (void)setM_mode:(unsigned int)arg1;
- (unsigned long long)m_roomId;
- (void)setM_roomId:(unsigned long long)arg1;
- (long long)m_roomKey;
- (void)setM_roomKey:(long long)arg1;
- (BOOL)m_fromAnswered;
- (void)setM_fromAnswered:(BOOL)arg1;
- (unsigned int)m_fromScene;
- (void)setM_fromScene:(unsigned int)arg1;
- (id)m_fromUser;
- (void)setM_fromUser:(id)arg1;
- (BOOL)hasHolded;
- (void)setHasHolded:(BOOL)arg1;
- (long long)m_n64MesSvrID;
- (void)setM_n64MesSvrID:(long long)arg1;
- (long long)msgID;
- (void)setMsgID:(long long)arg1;
- (id)notificationRequestID;
- (void)setNotificationRequestID:(id)arg1;
- (BOOL)isFromIlink;
- (void)setIsFromIlink:(BOOL)arg1;
- (unsigned long long)recvTime;
- (void)setRecvTime:(unsigned long long)arg1;
- (BOOL)m_muteNotification;
- (void)setM_muteNotification:(BOOL)arg1;
- (id)m_notificationInfo;
- (void)setM_notificationInfo:(id)arg1;
- (void).cxx_destruct;
@end
