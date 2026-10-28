@interface TextStateReadInfo : NSObject <WCTTableCoding>
{
    unsigned int _expiredTime; // +0x8
    NSString * _textStateId; // +0x10
    NSString * _topicId; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)textStateId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_textStateId;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_expiredTime;
+ (const void *)topicId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_topicId;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (unsigned int)expiredTime;
- (void)setExpiredTime:(unsigned int)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (void).cxx_destruct;
@end
