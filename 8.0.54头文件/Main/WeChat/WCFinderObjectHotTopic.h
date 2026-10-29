@interface WCFinderObjectHotTopic : NSObject <WCTTableCoding, PBCoding>
{
    BOOL _jumpFlag; // +0x8
    unsigned int _topicType; // +0xc
    unsigned long long _topicId; // +0x10
    NSString * _topicName; // +0x18
    NSData * _topicBuffer; // +0x20
}
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_topicName;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_jumpFlag;
+ (void)PBArrayAdd_topicBuffer;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)topicId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_topicId;
+ (const void *)topicName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_topicName;
+ (const void *)topicType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_topicType;
+ (const void *)jumpFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_jumpFlag;
+ (const void *)topicBuffer;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_topicBuffer;
+ (id)newWithPBTopic:(id)arg1;
- (id)getPBPropertyTable;
- (id)convertToPBTopic;
- (id)description;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)topicName;
- (void)setTopicName:(id)arg1;
- (unsigned int)topicType;
- (void)setTopicType:(unsigned int)arg1;
- (BOOL)jumpFlag;
- (void)setJumpFlag:(BOOL)arg1;
- (id)topicBuffer;
- (void)setTopicBuffer:(id)arg1;
- (void).cxx_destruct;
@end

