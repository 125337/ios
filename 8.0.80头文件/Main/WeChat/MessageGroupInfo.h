@interface MessageGroupInfo : NSObject <NSCopying, YYModel>
{
    unsigned int _createTime; // +0x8
    unsigned int _sequence; // +0xc
    unsigned long long _type; // +0x10
    NSString * _groupId; // +0x18
    long long _count; // +0x20
}
+ (id)fromXMLNode:(XmlReaderNode_t *)arg1;
+ (id)mediaGroupWithCount:(long long)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)toXMLString;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (void).cxx_destruct;
@end
