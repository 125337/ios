@interface WCSessionFlowSessionMergeInfo : MMObject <NSCopying>
{
    NSString * _sid; // +0x8
    unsigned long long _count; // +0x10
    unsigned long long _interval; // +0x18
}
- (id)toString;
- (id)getSessionMergeAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sid;
- (void)setSid:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

