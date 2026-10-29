@interface FlutterRouterPlugin : NSObject <QLPreviewControllerDataSource, MMFlutterPlugin, RouterPluginApi>
{
    UIViewController * _viewController; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)currentNavController;
- (void)launchDoubleLinkSettingsWithError:(id *)arg1;
- (void)launchSnsPostRequest:(id)arg1 error:(id *)arg2;
- (void)launchUserProfileRequest:(id)arg1 error:(id *)arg2;
- (void)launchFinderFeedRequest:(id)arg1 error:(id *)arg2;
- (void)launchFinderProfileRequest:(id)arg1 error:(id *)arg2;
- (void)launchFinderTimelineWithError:(id *)arg1;
- (void)launchTingPlayerRequest:(id)arg1 error:(id *)arg2;
- (void)launchTingCategoryRequest:(id)arg1 error:(id *)arg2;
- (void)launchBizArticleRequest:(id)arg1 error:(id *)arg2;
- (void)launchBizTimelineWithError:(id *)arg1;
- (void)launchAppChooserRequest:(id)arg1 error:(id *)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)launchTingForFileRequest:(id)arg1 error:(id *)arg2;
- (void)launchNoteDetailRequest:(id)arg1 error:(id *)arg2;
- (void)launchGalleryRequest:(id)arg1 error:(id *)arg2;
- (void)launchChatbotGalleryRequest:(id)arg1 error:(id *)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
