@interface FICEntryMetadata : NSObject <PBCoding>
{
    unsigned int _entityIndex; // +0x8
    unsigned int _LRUFactor; // +0xc
    int _entityUsedCount; // +0x10
    NSString * _entityUUID; // +0x18
}
+ (void)PBArrayAdd_entityIndex;
+ (void)PBArrayAdd_LRUFactor;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)entityUUID;
- (void)setEntityUUID:(id)arg1;
- (unsigned int)entityIndex;
- (void)setEntityIndex:(unsigned int)arg1;
- (unsigned int)LRUFactor;
- (void)setLRUFactor:(unsigned int)arg1;
- (int)entityUsedCount;
- (void)setEntityUsedCount:(int)arg1;
- (void).cxx_destruct;
@end
