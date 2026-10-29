@interface MMFinderLiveGestureRecord : NSObject <WCTTableCoding>
{
    unsigned int _gestureId; // +0x8
    unsigned int _version; // +0xc
    unsigned int _schemaVersion; // +0x10
    MMFinderLiveGestureInfo * _gestureInfo; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)gestureId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_gestureId;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_version;
+ (const void *)gestureInfo;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_gestureInfo;
+ (const void *)schemaVersion;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_schemaVersion;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (unsigned int)gestureId;
- (void)setGestureId:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)gestureInfo;
- (void)setGestureInfo:(id)arg1;
- (unsigned int)schemaVersion;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

