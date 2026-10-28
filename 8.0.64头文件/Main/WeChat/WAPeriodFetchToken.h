@interface WAPeriodFetchToken : MMObject <WCTTableCoding>
{
    unsigned int _lastSaveTime; // +0x8
    NSString * _userName; // +0x10
    NSString * _fetchToken; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_userName;
+ (const void *)lastSaveTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_lastSaveTime;
+ (const void *)fetchToken;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_fetchToken;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)lastSaveTime;
- (void)setLastSaveTime:(unsigned int)arg1;
- (id)fetchToken;
- (void)setFetchToken:(id)arg1;
- (void).cxx_destruct;
@end
