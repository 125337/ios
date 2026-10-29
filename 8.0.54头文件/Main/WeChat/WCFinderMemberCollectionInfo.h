@interface WCFinderMemberCollectionInfo : NSObject <PBCoding>
{
    BOOL _continueFlag; // +0x8
    NSMutableArray * _collectionInfoArray; // +0x10
    unsigned long long _collectionCount; // +0x18
    NSData * _lastBuffer; // +0x20
}
+ (void)PBArrayAdd_collectionInfoArray;
+ (void)PBArrayAdd_collectionCount;
+ (void)PBArrayAdd_continueFlag;
+ (void)PBArrayAdd_lastBuffer;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMemberCollectionInfo:(id)arg1;
- (id)collectionInfoArray;
- (void)setCollectionInfoArray:(id)arg1;
- (unsigned long long)collectionCount;
- (void)setCollectionCount:(unsigned long long)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

