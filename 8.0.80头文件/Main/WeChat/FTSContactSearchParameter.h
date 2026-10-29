@interface FTSContactSearchParameter : NSObject
{
    BOOL _isMultiSearchGroupMember; // +0x8
    int _type; // +0xc
    NSString * _query; // +0x10
    id /* block */ _cancelBlock; // +0x18
    NSMutableDictionary * _groupRelation; // +0x20
    NSMutableSet * _matchGroups; // +0x28
}
- (id)query;
- (void)setQuery:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (BOOL)isMultiSearchGroupMember;
- (void)setIsMultiSearchGroupMember:(BOOL)arg1;
- (id)groupRelation;
- (void)setGroupRelation:(id)arg1;
- (id)matchGroups;
- (void)setMatchGroups:(id)arg1;
- (void).cxx_destruct;
@end
