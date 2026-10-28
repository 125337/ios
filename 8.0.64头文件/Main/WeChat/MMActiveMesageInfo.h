@interface MMActiveMesageInfo : NSObject <WCTTableCoding>
{
    unsigned int _localID; // +0x8
    unsigned int _activeTime; // +0xc
    NSString * _sessionName; // +0x10
    unsigned long long _infoType; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionName;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_localID;
+ (const void *)infoType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_infoType;
+ (const void *)activeTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_activeTime;
+ (void)__wcdb_index_4:(void *)arg1;
- (id)description;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (unsigned long long)infoType;
- (void)setInfoType:(unsigned long long)arg1;
- (unsigned int)activeTime;
- (void)setActiveTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
