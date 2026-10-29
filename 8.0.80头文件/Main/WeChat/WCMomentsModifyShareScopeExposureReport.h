@interface WCMomentsModifyShareScopeExposureReport : NSObject
{
    BOOL _didClickModifyShareScope; // +0x8
    NSString * _feedId; // +0x10
    unsigned long long _exposureScene; // +0x18
}
+ (void)doReportWithDataItem:(id)arg1 exposureScene:(unsigned long long)arg2 didClickModifyShareScope:(BOOL)arg3;
+ (void)doReportWithDataItem:(id)arg1 presentingVC:(id)arg2 didClickModifyShareScope:(BOOL)arg3;
- (void)report;
- (id)generateReoprtString;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (unsigned long long)exposureScene;
- (void)setExposureScene:(unsigned long long)arg1;
- (BOOL)didClickModifyShareScope;
- (void)setDidClickModifyShareScope:(BOOL)arg1;
- (void).cxx_destruct;
@end
