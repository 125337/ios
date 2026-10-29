@interface GameLifeSessionInfo : NSObject <WCTTableCoding>
{
    unsigned int _sessionType; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _talker; // +0x18
    NSString * _selfUsername; // +0x20
    unsigned long long _disabledStaticPanelIdFlag; // +0x28
    unsigned long long _disabledAppPanelIdFlag; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)talker;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_talker;
+ (const void *)selfUsername;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_selfUsername;
+ (const void *)disabledStaticPanelIdFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_disabledStaticPanelIdFlag;
+ (const void *)disabledAppPanelIdFlag;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_disabledAppPanelIdFlag;
+ (const void *)sessionType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_sessionType;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)talker;
- (void)setTalker:(id)arg1;
- (id)selfUsername;
- (void)setSelfUsername:(id)arg1;
- (unsigned long long)disabledStaticPanelIdFlag;
- (void)setDisabledStaticPanelIdFlag:(unsigned long long)arg1;
- (unsigned long long)disabledAppPanelIdFlag;
- (void)setDisabledAppPanelIdFlag:(unsigned long long)arg1;
- (unsigned int)sessionType;
- (void)setSessionType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

