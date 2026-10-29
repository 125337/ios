@interface MMUserDataOperateItem : MMObject <WCTTableCoding>
{
    unsigned int _dataType; // +0x8
    unsigned int _businessType; // +0xc
    unsigned long long _operateTime; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)dataType;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_dataType;
+ (const void *)businessType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_businessType;
+ (const void *)operateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_operateTime;
+ (void)__wcdb_index_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
+ (id)itemWithBusinessType:(unsigned int)arg1 dataType:(unsigned int)arg2;
- (id)description;
- (unsigned int)dataType;
- (void)setDataType:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (unsigned long long)operateTime;
- (void)setOperateTime:(unsigned long long)arg1;
@end
