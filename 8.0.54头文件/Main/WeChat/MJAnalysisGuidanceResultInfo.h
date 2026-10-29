@interface MJAnalysisGuidanceResultInfo : NSObject
{
    MJAssetAnalysisReportInfo * _reportInfo; // +0x8
    MJVolumeAnalysisResult * _volumeResult; // +0x10
}
- (id)initWithReportInfo:(id)arg1 volumeResult:(id)arg2;
- (id)description;
- (id)reportInfo;
- (id)volumeResult;
- (void).cxx_destruct;
@end

