@interface SessionSortCache : NSObject <PBCoding>
{
    BOOL _hasMergeTopFlag; // +0x8
    NSMutableDictionary * _dicUsrNameUntopTime; // +0x10
    NSMutableDictionary * _dicUsrNameTopTime; // +0x18
    NSMutableDictionary * _dicUsrNameSortTime; // +0x20
}
+ (void)PBArrayAdd_dicUsrNameTopTime;
+ (void)PBArrayAdd_dicUsrNameUntopTime;
+ (void)PBArrayAdd_hasMergeTopFlag;
+ (void)PBArrayAdd_dicUsrNameSortTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (id)dicUsrNameUntopTime;
- (void)setDicUsrNameUntopTime:(id)arg1;
- (id)dicUsrNameTopTime;
- (void)setDicUsrNameTopTime:(id)arg1;
- (id)dicUsrNameSortTime;
- (void)setDicUsrNameSortTime:(id)arg1;
- (BOOL)hasMergeTopFlag;
- (void)setHasMergeTopFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
