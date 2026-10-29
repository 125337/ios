@interface WCFinderMyTabEntranceWordingReadInfo : NSObject <PBCoding>
{
    NSMutableDictionary * _readTimeMap; // +0x8
    NSMutableDictionary * _profimeReadTimeMap; // +0x10
}
+ (void)PBArrayAdd_readTimeMap;
+ (void)PBArrayAdd_profimeReadTimeMap;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)readTimeMap;
- (void)setReadTimeMap:(id)arg1;
- (id)profimeReadTimeMap;
- (void)setProfimeReadTimeMap:(id)arg1;
- (void).cxx_destruct;
@end

