@interface WCFinderExpandableTagSelectorExpandInfo : NSObject
{
    map<long, Group, std::less<long>, std::allocator<std::pair<const long, Group>>> groupInfos; // +0x8
    NSString * _identifier; // +0x20
    long long _index; // +0x28
    long long _groupNumber; // +0x30
    NSMutableDictionary * _identifierMap; // +0x38
}
- (id)initWithIndex:(long long)arg1 groupNumber:(long long)arg2;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (long long)groupNumber;
- (void)setGroupNumber:(long long)arg1;
- (id)identifierMap;
- (void)setIdentifierMap:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

