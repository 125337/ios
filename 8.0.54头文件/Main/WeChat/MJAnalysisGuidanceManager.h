@interface MJAnalysisGuidanceManager : NSObject
{
    MJPHAssetsAnalyzer * _phAssetsAnalyzer; // +0x8
    MJOSTAnalyzer * _ostAnalyzer; // +0x10
    MJMusicAnalyzer * _musicAnalyzer; // +0x18
    MJVolumeAnalyzer * _volumeAnalyzer; // +0x20
    MJAssetAnalysisReportInfo * _reportInfo; // +0x28
    MJVolumeAnalysisResult * _volumeResult; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)analyzeForGuidanceWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)phAssetsAnalyzer;
- (id)ostAnalyzer;
- (id)musicAnalyzer;
- (id)volumeAnalyzer;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)volumeResult;
- (void)setVolumeResult:(id)arg1;
- (void).cxx_destruct;
@end

