@interface MMEasterEggActivityChatReportObject : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _keyword; // +0x10
    unsigned long long _isChatRoom; // +0x18
    NSString * _userName; // +0x20
    unsigned long long _isReceiver; // +0x28
    unsigned long long _effectType; // +0x30
}
- (void)setupSessionId:(id)arg1;
- (void)setupKeyword:(id)arg1 userName:(id)arg2 isChatRoom:(long long)arg3 isReceiver:(long long)arg4 effectType:(long long)arg5;
- (void)reportChatAction:(unsigned long long)arg1;
- (void)reportChatAction:(unsigned long long)arg1 extendString:(id)arg2;
- (void)reportChatAction:(unsigned long long)arg1 keyword:(id)arg2 extendString:(id)arg3 allKeyWords:(id)arg4;
- (void)reportTriggerWithAllKeyWords:(id)arg1;
- (void)reportEggJoinActionWithKeyword:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (unsigned long long)isChatRoom;
- (void)setIsChatRoom:(unsigned long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)isReceiver;
- (void)setIsReceiver:(unsigned long long)arg1;
- (unsigned long long)effectType;
- (void)setEffectType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
