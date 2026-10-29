@interface DBContactTableForSearch : NSObject <WCTTableCoding>
{
    NSString * _userName; // +0x8
    NSData * _dbContactRemark; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_userName;
+ (const void *)dbContactRemark;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_dbContactRemark;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)dbContactRemark;
- (void)setDbContactRemark:(id)arg1;
- (void).cxx_destruct;
@end

