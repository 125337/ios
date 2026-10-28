@interface OpLog : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int oplogID; // +0xc
    unsigned int oplogCmdID; // +0x10
    NSData * oplogBuffer; // +0x18
    long long lastInsertedRowID; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)oplogID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_oplogID;
+ (const void *)oplogCmdID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_oplogCmdID;
+ (const void *)oplogBuffer;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_oplogBuffer;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)description;
- (unsigned int)oplogID;
- (void)setOplogID:(unsigned int)arg1;
- (unsigned int)oplogCmdID;
- (void)setOplogCmdID:(unsigned int)arg1;
- (id)oplogBuffer;
- (void)setOplogBuffer:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end
