@interface DBBypInfoBizSyncItem : NSObject <WCTTableCoding>
{
    unsigned int _subType; // +0x8
    NSString * _chatName; // +0x10
    NSData * _buff; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_chatName;
+ (const void *)buff;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_buff;
+ (const void *)subType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_subType;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)buff;
- (void)setBuff:(id)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
