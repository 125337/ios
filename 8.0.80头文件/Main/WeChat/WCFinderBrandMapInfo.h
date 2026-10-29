@interface WCFinderBrandMapInfo : NSObject
{
    NSString * _finderUsername; // +0x8
    NSString * _bizUsername; // +0x10
    unsigned long long _cacheTime; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_finderUsername;
+ (const void *)bizUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_bizUsername;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cacheTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
