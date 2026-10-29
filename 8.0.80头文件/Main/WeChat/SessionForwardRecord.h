@interface SessionForwardRecord : NSObject
{
    BOOL _isHidden; // +0x8
    BOOL _isMostUsed; // +0x9
    unsigned int _forwardTime; // +0xc
    NSString * _sessionUsername; // +0x10
    unsigned long long _scene; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionUsername;
+ (const void *)forwardTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_forwardTime;
+ (const void *)isHidden;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_isHidden;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_scene;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)sessionUsername;
- (void)setSessionUsername:(id)arg1;
- (unsigned int)forwardTime;
- (void)setForwardTime:(unsigned int)arg1;
- (BOOL)isHidden;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)isMostUsed;
- (void)setIsMostUsed:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
