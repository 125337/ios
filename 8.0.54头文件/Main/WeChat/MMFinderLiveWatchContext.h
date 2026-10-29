@interface MMFinderLiveWatchContext : NSObject
{
    MMFinderLiveWatchRecommandData * _recommandData; // +0x8
    MMFinderLiveAudienceReportContext * _reportContext; // +0x10
}
+ (id)CurrentContext;
+ (void)CleanContext;
- (void)reinit;
- (id)recommandData;
- (id)reportContext;
- (void)setRecommandData:(id)arg1;
- (void)setReportContext:(id)arg1;
- (void).cxx_destruct;
@end

