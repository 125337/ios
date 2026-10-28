@interface WCStoryPlayRecord : NSObject <WCTTableCoding>
{
    unsigned int _playCount; // +0x8
    unsigned int _lastPlayTime; // +0xc
    unsigned int _lastPlaySecne; // +0x10
    unsigned int _bHitPreload; // +0x14
    NSString * _tid; // +0x18
    NSString * _userName; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_userName;
+ (const void *)playCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_playCount;
+ (const void *)lastPlayTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_lastPlayTime;
+ (const void *)bHitPreload;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_bHitPreload;
+ (const void *)lastPlaySecne;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_lastPlaySecne;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)lastPlayTime;
- (void)setLastPlayTime:(unsigned int)arg1;
- (unsigned int)lastPlaySecne;
- (void)setLastPlaySecne:(unsigned int)arg1;
- (unsigned int)bHitPreload;
- (void)setBHitPreload:(unsigned int)arg1;
- (void).cxx_destruct;
@end
