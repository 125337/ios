@interface WCTimelineADLogicController : NSObject <WCTimelineLogicControllerImplProtocol>
{
    BOOL _canLogAdContext; // +0x8
    id <WCTimelineLogicControllerDelegate> _delegate; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startAdDisappear;
- (void)startAdResumeAppear;
- (void)startAdOnTimelineReloaded;
- (BOOL)checkAdCellVisibleWithDataItem:(id)arg1 isReloadingData:(BOOL)arg2 needRecordAD:(BOOL)arg3 bIsCellVisible:(BOOL)arg4 tableView:(id)arg5 indexPathsForVisibleRows:(id)arg6 adReloadIndexPaths:(id)arg7 indexPath:(id)arg8;
- (void)tryReportAdCell:(id)arg1;
- (void)reportAdExposureFromCachedBodyWrap;
- (void)recordADBodyStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)calADCellYVisible:(BOOL *)arg1 centerVisible:(BOOL *)arg2 bottomVisible:(BOOL *)arg3 forRowAtIndexPath:(id)arg4 inTableView:(id)arg5;
- (void)onSearchTopicTagClicked:(id)arg1 scene:(long long)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 scene:(long long)arg3;
- (void)Reset;
- (void)Register;
- (BOOL)canLogAdContext;
- (void)setCanLogAdContext:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
