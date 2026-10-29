@interface WCTSequence : NSObject
{
    int _seq; // +0x8
    NSString * _name; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_name;
+ (const void *)seq;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_seq;
+ (id)tableName;
- (id)name;
- (void)setName:(id)arg1;
- (int)seq;
- (void)setSeq:(int)arg1;
- (void).cxx_destruct;
@end

