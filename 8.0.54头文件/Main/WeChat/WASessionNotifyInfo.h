@interface WASessionNotifyInfo : NSObject <PBCoding>
{
    NSNumber * _globalOpenStatus; // +0x8
    NSMutableDictionary * _dicCloseItem; // +0x10
}
+ (void)PBArrayAdd_globalOpenStatus;
+ (void)PBArrayAdd_dicCloseItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)globalOpenStatus;
- (void)setGlobalOpenStatus:(id)arg1;
- (id)dicCloseItem;
- (void)setDicCloseItem:(id)arg1;
- (void).cxx_destruct;
@end

