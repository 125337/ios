@interface WCFinderParseContentInfo : NSObject <PBCoding, WCTTableCoding>
{
    NSString * _tid; // +0x8
    WCFinderParseContentModel * _parseModel; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)parseModel;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_parseModel;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)parseModel;
- (void)setParseModel:(id)arg1;
- (void).cxx_destruct;
@end

