@interface WCFinderTableViewHelper : NSObject
+ (void)tableViewRegisterCell:(id)arg1;
+ (id)feedCellForTableView:(id)arg1 rowAtIndexPath:(id)arg2 delegate:(id)arg3 contentVM:(id)arg4 feedViewerScene:(unsigned long long)arg5 paramModel:(id)arg6;
+ (id)_fullScreenFeedCellForForTableView:(id)arg1 rowAtIndexPath:(id)arg2 delegate:(id)arg3 contentVM:(id)arg4 feedViewerScene:(unsigned long long)arg5 paramModel:(id)arg6;
+ (double)feedHightOfIndexPath:(id)arg1 contentVM:(id)arg2 width:(double)arg3 paramModel:(id)arg4;
+ (id)getCurrentFocusIndexPath:(id)arg1 tableView:(id)arg2;
+ (id)getCurrentFocusIndexPath:(id)arg1 tableView:(id)arg2 targetContentOffset:(CGPoint)arg3;
+ (CGRect)videoFrameInLiveCellForCellSize:(CGSize)arg1 videoSize:(CGSize)arg2 landScapeMarginTop:(double)arg3 landScapeMarginBottom:(double)arg4;
+ (CGRect)morphDismissTargetFrameInTableView:(id)arg1 forLiveId:(id)arg2 videoSize:(CGSize)arg3;
+ (id)morphDismissTargetExtraConfigInTableView:(id)arg1 forLiveId:(id)arg2;
+ (id)visibleCellInTableView:(id)arg1 forLiveId:(id)arg2;
+ (id)visibleLivePlayerViewInTableViewCell:(id)arg1 forLiveId:(id)arg2;
+ (void)scrollToInsertFeedId:(id)arg1 aboveFeedId:(id)arg2 viewModel:(id)arg3 tableView:(id)arg4 animated:(BOOL)arg5 fromVC:(id)arg6 completionBlock:(id /* block */)arg7;
+ (void)silenceInsertFeedId:(id)arg1 aboveFeedId:(id)arg2 viewModel:(id)arg3 tableView:(id)arg4 fromVC:(id)arg5 completionBlock:(id /* block */)arg6;
@end
