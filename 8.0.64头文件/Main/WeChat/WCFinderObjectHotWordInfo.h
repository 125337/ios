@interface WCFinderObjectHotWordInfo : NSObject <WCTColumnCoding, PBCoding>
{
    FinderObjectHotWordInfo * _hotWordInfo; // +0x8
}
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (void)PBArrayAdd_hotWordInfo;
+ (void)initialize;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;
- (id)hotWordInfo;
- (void)setHotWordInfo:(id)arg1;
- (void).cxx_destruct;
@end
