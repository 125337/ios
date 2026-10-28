@interface WCFinderProfileOverviewSectionInfo : NSObject <PBCoding>
{
    long long _secType; // +0x8
    FinderHomePageSectionInfo * _sectionInfo; // +0x10
}
+ (void)PBArrayAdd_secType;
+ (void)PBArrayAdd_sectionInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (void).cxx_destruct;
@end
