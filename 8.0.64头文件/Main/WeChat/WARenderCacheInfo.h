@interface WARenderCacheInfo : MMObject <WCTTableCoding>
{
    unsigned int _debugType; // +0x8
    unsigned int _appVersion; // +0xc
    unsigned int _lastAccessTime; // +0x10
    NSString * _username; // +0x18
    NSString * _pagePath; // +0x20
    NSString * _pubVersion; // +0x28
    unsigned long long _cacheSize; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)debugType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_debugType;
+ (const void *)appVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_appVersion;
+ (const void *)pagePath;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_pagePath;
+ (const void *)pubVersion;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_pubVersion;
+ (const void *)cacheSize;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_cacheSize;
+ (const void *)lastAccessTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_lastAccessTime;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
- (id)description;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)debugType;
- (void)setDebugType:(unsigned int)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)pubVersion;
- (void)setPubVersion:(id)arg1;
- (unsigned long long)cacheSize;
- (void)setCacheSize:(unsigned long long)arg1;
- (unsigned int)lastAccessTime;
- (void)setLastAccessTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
