@interface MJAssetAnalysisReportInfo : NSObject
{
    long long _realShotAssetCount; // +0x8
    long long _totalAssetCount; // +0x10
}
+ (id)emptyReportInfo;
- (id)initWithRealShotAssetCount:(long long)arg1 totalAssetCount:(long long)arg2;
- (void)fillWithReportInfo:(id)arg1;
- (id)description;
- (long long)realShotAssetCount;
- (long long)totalAssetCount;
@end
