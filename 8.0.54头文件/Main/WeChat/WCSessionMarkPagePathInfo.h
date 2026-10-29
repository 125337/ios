@interface WCSessionMarkPagePathInfo : MMObject <NSCopying>
{
    unsigned int _index; // +0x8
    NSString * _pagePathId; // +0x10
    NSString * _sessionPageId; // +0x18
    unsigned long long _type; // +0x20
    NSMutableArray * _pagePaths; // +0x28
}
- (id)init;
- (id)toString;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)pagePathId;
- (void)setPagePathId:(id)arg1;
- (id)sessionPageId;
- (void)setSessionPageId:(id)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)pagePaths;
- (void)setPagePaths:(id)arg1;
- (void).cxx_destruct;
@end

