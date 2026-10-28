@interface IntelligentMessageItemPB : MMObject <PBCoding>
{
    BOOL _hadUpdateFaceCluster; // +0x8
    NSMutableArray * _hadUpdateModelKeyList; // +0x10
    NSArray * _shouldUpdateModelKeyList; // +0x18
}
+ (void)PBArrayAdd_hadUpdateModelKeyList;
+ (void)PBArrayAdd_hadUpdateFaceCluster;
+ (void)PBArrayAdd_shouldUpdateModelKeyList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)hadUpdateModelKeyList;
- (void)setHadUpdateModelKeyList:(id)arg1;
- (BOOL)hadUpdateFaceCluster;
- (void)setHadUpdateFaceCluster:(BOOL)arg1;
- (id)shouldUpdateModelKeyList;
- (void)setShouldUpdateModelKeyList:(id)arg1;
- (void).cxx_destruct;
@end
