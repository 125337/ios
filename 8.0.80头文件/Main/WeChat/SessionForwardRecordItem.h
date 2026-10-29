@interface SessionForwardRecordItem : NSObject
{
    unsigned int _forwardTime; // +0x8
    NSString * _sessionItemUsername; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionItemUsername;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_sessionItemUsername;
+ (const void *)forwardTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_forwardTime;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)sessionItemUsername;
- (void)setSessionItemUsername:(id)arg1;
- (unsigned int)forwardTime;
- (void)setForwardTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
