@interface MJPHAssetAnalysisResult : NSObject
{
    BOOL _isEdited; // +0x8
    BOOL _isScreenshot; // +0x9
    MJAssetAnalysisReportInfo * _reportInfo; // +0x10
}
- (id)initWithIsEdited:(BOOL)arg1 isScreenshot:(BOOL)arg2 reportInfo:(id)arg3;
- (id)description;
- (BOOL)isEdited;
- (BOOL)isScreenshot;
- (id)reportInfo;
- (void).cxx_destruct;
@end
