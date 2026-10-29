@interface WCSessionPagePathMergeInfo : MMObject <NSCopying>
{
    unsigned int _count; // +0x8
    NSString * _sid; // +0x10
    NSString * _pagePathId; // +0x18
    unsigned long long _interval; // +0x20
}
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sid;
- (void)setSid:(id)arg1;
- (id)pagePathId;
- (void)setPagePathId:(id)arg1;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

