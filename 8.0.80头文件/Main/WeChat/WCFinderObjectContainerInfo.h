@interface WCFinderObjectContainerInfo : NSObject
{
    NSString * _tid; // +0x8
    NSString * _containerId; // +0x10
    unsigned long long _cacheTime; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)containerId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_containerId;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cacheTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)containerId;
- (void)setContainerId:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
