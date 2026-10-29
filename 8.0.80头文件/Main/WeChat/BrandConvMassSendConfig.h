@interface BrandConvMassSendConfig : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _rId; // +0xc
    unsigned int _dbCreateTime; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)rId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_rId;
+ (const void *)dbCreateTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_dbCreateTime;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (unsigned int)rId;
- (void)setRId:(unsigned int)arg1;
- (unsigned int)dbCreateTime;
- (void)setDbCreateTime:(unsigned int)arg1;
@end
