@interface WCFinderSnsShareInfo : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _shareCount; // +0x8
    unsigned int _watchingCount; // +0xc
    long long _type; // +0x10
    NSArray * _shareContactListArray; // +0x18
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_shareCount;
+ (void)PBArrayAdd_watchingCount;
+ (void)PBArrayAdd_shareContactListArray;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)finderSnsShareInfoFromObject:(id)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)genFinderSnSShareInfo;
- (long long)type;
- (void)setType:(long long)arg1;
- (unsigned int)shareCount;
- (void)setShareCount:(unsigned int)arg1;
- (unsigned int)watchingCount;
- (void)setWatchingCount:(unsigned int)arg1;
- (id)shareContactListArray;
- (void)setShareContactListArray:(id)arg1;
- (void).cxx_destruct;
@end

