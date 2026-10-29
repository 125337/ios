@interface WCTimelineRouterHelper : NSObject
+ (void)showImagePickerWithPickerScene:(int)arg1 sourceType:(long long)arg2 showsCameraButtonInPicker:(BOOL)arg3 showsCameraButtonAtBottom:(BOOL)arg4 customOptionsBlock:(id /* block */)arg5 delegate:(id)arg6 fromViewController:(id)arg7;
+ (BOOL)navigateToInnerFeatureProfile:(id)arg1 currentViewController:(id)arg2 sourceFeed:(id)arg3;
+ (BOOL)navigateToInnerFeatureProfile:(id)arg1 currentViewController:(id)arg2 sourceFeed:(id)arg3 isSnSAd:(BOOL)arg4 adParamInofStr:(id)arg5;
+ (BOOL)navigateToPostFinderViewController:(id)arg1 currentViewController:(id)arg2 finderPostDelegate:(id)arg3;
+ (BOOL)navigateToMicroMerchantSubTimeline:(id)arg1 ofFoldPlaceHolder:(id)arg2 currentViewController:(id)arg3;
+ (BOOL)navigateToPOI:(id)arg1 currentViewController:(id)arg2;
+ (BOOL)navigateToOriginPOI:(id)arg1 currentViewController:(id)arg2;
+ (BOOL)navigateToMusicPlayer:(id)arg1 currentViewController:(id)arg2;
+ (BOOL)presentTextCommitViewController:(id)arg1 postReportSession:(id)arg2 trashReportData:(id)arg3 withExtBean:(id)arg4;
+ (BOOL)presentCommitViewController:(BOOL)arg1 arrImage:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentViewController:(id)arg5 withExtBean:(id)arg6;
+ (BOOL)presentCommitViewController:(BOOL)arg1 sightDraft:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentViewController:(id)arg5 withExtBean:(id)arg6;
+ (BOOL)presentSpringCommitViewControllerWithPostReportSession:(id)arg1 springPostScene:(long long)arg2 currentViewController:(id)arg3;
+ (BOOL)presentForwardViewController:(id)arg1 postReportSession:(id)arg2 trashReportData:(id)arg3 currentViewController:(id)arg4;
+ (BOOL)presentReEditViewControllerWithDataItem:(id)arg1 postReportSession:(id)arg2 currentViewController:(id)arg3;
+ (BOOL)presentReEditViewControllerWithDraftController:(id)arg1 forwardItem:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentViewController:(id)arg5 withExtBean:(id)arg6;
+ (id)searchViewControllerForPresentingReEditViewControllerFromNavigationController:(id)arg1;
+ (void)popAndPresentReEditViewControllerWithDataItem:(id)arg1 postReportSession:(id)arg2 currentNavigationViewController:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)popAndPresentReEditViewControllerWithDraftController:(id)arg1 forwardItem:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 currentNavigationViewController:(id)arg5 completionHandler:(id /* block */)arg6;
+ (BOOL)navigateToContactInfoViewController:(id)arg1 scene:(unsigned int)arg2 opInfo:(id)arg3 currentViewController:(id)arg4;
+ (BOOL)navigateToContactInfoViewController:(id)arg1 scene:(unsigned int)arg2 userData:(id)arg3 currentViewController:(id)arg4;
+ (BOOL)presentSetPermissionViewController:(id)arg1 scene:(long long)arg2 currentViewController:(id)arg3;
+ (BOOL)presentSetPermissionViewController:(id)arg1 tid:(id)arg2 currentViewController:(id)arg3;
+ (BOOL)navigateToTextDetailViewController:(id)arg1 currentViewController:(id)arg2;
+ (BOOL)navigateToTextDetailViewController:(id)arg1 fromDataItem:(id)arg2 isAdComment:(BOOL)arg3 currentViewController:(id)arg4;
+ (void)navigateToCommentDetailViewController:(id)arg1 failedComment:(id)arg2 currentViewController:(id)arg3 pageContext:(id)arg4;
+ (void)navigateToCommentDetailViewController:(id)arg1 tipType:(long long)arg2 currentViewController:(id)arg3 pageContext:(id)arg4;
+ (void)openMiaoJianApp:(id)arg1 callback:(id /* block */)arg2;
@end

