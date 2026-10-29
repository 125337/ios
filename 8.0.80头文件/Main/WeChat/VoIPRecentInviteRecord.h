@interface VoIPRecentInviteRecord : NSObject <WCTTableCoding>
{
    unsigned int _lastInviteTime; // +0x8
    NSString * _userName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_userName;
+ (const void *)lastInviteTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_lastInviteTime;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)lastInviteTime;
- (void)setLastInviteTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
