@interface PrivateMsgSessionInfo : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _nickname; // +0x10
    NSString * _avatarUrl; // +0x18
    NSString * _lastMsgContent; // +0x20
    long long _lastMsgTime; // +0x28
    NSString * _lastMsgTimeText; // +0x30
    long long _unreadCount; // +0x38
    NSString * _bizuin; // +0x40
    long long _identityType; // +0x48
    long long _serviceType; // +0x50
    long long _isGreetSession; // +0x58
}
+ (id)makeWithSessionId:(id)arg1 nickname:(id)arg2 avatarUrl:(id)arg3 lastMsgContent:(id)arg4 lastMsgTime:(long long)arg5 lastMsgTimeText:(id)arg6 unreadCount:(long long)arg7 bizuin:(id)arg8 identityType:(long long)arg9 serviceType:(long long)arg10 isGreetSession:(long long)arg11;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)lastMsgContent;
- (void)setLastMsgContent:(id)arg1;
- (long long)lastMsgTime;
- (void)setLastMsgTime:(long long)arg1;
- (id)lastMsgTimeText;
- (void)setLastMsgTimeText:(id)arg1;
- (long long)unreadCount;
- (void)setUnreadCount:(long long)arg1;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (long long)identityType;
- (void)setIdentityType:(long long)arg1;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
- (long long)isGreetSession;
- (void)setIsGreetSession:(long long)arg1;
- (void).cxx_destruct;
@end
