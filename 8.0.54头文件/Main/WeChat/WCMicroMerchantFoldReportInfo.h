@interface WCMicroMerchantFoldReportInfo : NSObject
{
    unsigned long long _hitRuleType; // +0x8
    NSString * _feedID; // +0x10
    NSString * _username; // +0x18
    NSString * _sessionID; // +0x20
    unsigned long long _scene; // +0x28
    unsigned long long _statusType; // +0x30
}
+ (id)reportInfoWithInteraction:(id)arg1 sessionID:(id)arg2;
+ (id)reportInfoWithFoldAgainUsername:(id)arg1 sessionID:(id)arg2;
+ (unsigned long long)hitRuleTypeWithInteractionType:(unsigned long long)arg1;
- (id)initWithHitRuleType:(unsigned long long)arg1 feedID:(id)arg2 username:(id)arg3 sessionID:(id)arg4 scene:(unsigned long long)arg5 statusType:(unsigned long long)arg6;
- (void)report;
- (unsigned long long)hitRuleType;
- (void)setHitRuleType:(unsigned long long)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)statusType;
- (void)setStatusType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

