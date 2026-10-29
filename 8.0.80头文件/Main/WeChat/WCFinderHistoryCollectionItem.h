@interface WCFinderHistoryCollectionItem : NSObject <WCFinderFeedArrayConvert, PBCoding>
{
    FinderCollectionInfo * _collectionInfo; // +0x8
    FinderContact * _contact; // +0x10
    unsigned long long _lastPlayTime; // +0x18
}
+ (id)feedArrayConvertTidFromObject:(id)arg1;
+ (id)feedArrayConvertVMFromItem:(id)arg1 scene:(int)arg2;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_lastPlayTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)lastPlayTime;
- (void)setLastPlayTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
