@interface WCFinderPanelRecommendThankShareViewModel : NSObject
{
    NSString * _tid; // +0x8
    WCFinderPanelRecommendThankShareReportModel * _report; // +0x10
    FinderObjectThankInfo * _rawData; // +0x18
}
+ (id)modelWithInfo:(id)arg1 tid:(id)arg2;
- (id)nameString;
- (BOOL)hadThanked;
- (void)setHadThanked:(BOOL)arg1;
- (id)thankTips;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (id)rawData;
- (void)setRawData:(id)arg1;
- (void).cxx_destruct;
@end
