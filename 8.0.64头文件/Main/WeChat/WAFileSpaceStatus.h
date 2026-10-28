@interface WAFileSpaceStatus : NSObject <PBCoding>
{
    unsigned long long _totalFileSize; // +0x8
    NSMutableDictionary * _dicAppItem; // +0x10
}
+ (void)PBArrayAdd_dicAppItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)updateTotalFileSize;
- (id)description;
- (unsigned long long)totalFileSize;
- (void)setTotalFileSize:(unsigned long long)arg1;
- (id)dicAppItem;
- (void)setDicAppItem:(id)arg1;
- (void).cxx_destruct;
@end
