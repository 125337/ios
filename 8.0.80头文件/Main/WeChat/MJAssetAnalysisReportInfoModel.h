@interface MJAssetAnalysisReportInfoModel : NSObject <PBCoding>
{
    long long _realShotAssetCount; // +0x8
    long long _totalAssetCount; // +0x10
}
+ (void)PBArrayAdd_realShotAssetCount;
+ (void)PBArrayAdd_totalAssetCount;
+ (void)initialize;
+ (id)modelWithReportInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)toReportInfo;
- (id)description;
- (long long)realShotAssetCount;
- (void)setRealShotAssetCount:(long long)arg1;
- (long long)totalAssetCount;
- (void)setTotalAssetCount:(long long)arg1;
@end
