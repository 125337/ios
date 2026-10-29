@interface WALaunchOpSwitchList : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _tencentMapDownloadGuide; // +0x8
}
+ (void)PBArrayAdd_tencentMapDownloadGuide;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (BOOL)tencentMapDownloadGuide;
- (void)setTencentMapDownloadGuide:(BOOL)arg1;
@end
