@interface WCFinderPostMgr : NSObject <WCActionSheetDelegate, MJShootComposingViewControllerDelegate, MJShootPreviewViewControllerDelegate, MJMovieComposingViewControllerDelegate, MJImageComposingViewControllerDelegate, WCVideoProducerViewControllerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, WCFinderPostViewControllerDelegate, MMImagePickerManagerDelegate, WCActionSheetWithHeadAvatarDelegate>
{
    int _userPrepareScene; // +0x8
    int _profileEnterType; // +0xc
    int _commentScene; // +0x10
    long long _enterChildScene; // +0x18
    unsigned long long _enterScene; // +0x20
    id <WCFinderPostMgrDelegate> _delegate; // +0x28
    WCFinderPostActionSheetConfigArray * _postSheetConfigArray; // +0x30
    unsigned long long _directlyPostScene; // +0x38
    WCFinderCreateCoordinator * _createCoordinator; // +0x40
    unsigned long long _createFromType; // +0x48
    unsigned long long _createScene; // +0x50
    unsigned long long _shareScene; // +0x58
    MMUIViewController * _currentVC; // +0x60
    WCActionSheetWithHeadAvatar * _publishActionSheet; // +0x68
    MJPublisher * _mjPublisher; // +0x70
    unsigned long long _publisherEnterType; // +0x78
}
+ (BOOL)enableMJPublishEntry:(unsigned long long)arg1;
+ (BOOL)enableIpadPostMedia;
+ (BOOL)canShowCameraBtn;
+ (BOOL)ableToOpenMJPublisher;
+ (BOOL)checkPublishPermissionWithContact:(id)arg1;
- (id)initWithParamsModel:(id)arg1;
- (void)updatePostMgrWithParams:(id)arg1;
- (void)updatePostEnterScene:(unsigned long long)arg1;
- (id)postSheetConfigArray;
- (void)showPostEntranceActionSheet;
- (BOOL)enableEnterPostProcessFromContact:(id)arg1;
- (void)showPostEntranceActionSheetWithContact:(id)arg1;
- (void)showPostEntranceActionSheetWithContact:(id)arg1 info:(id)arg2;
- (void)showPostEntranceActionSheetWithIsMJPublisher:(BOOL)arg1 contact:(id)arg2 directly:(BOOL)arg3;
- (void)enterMiaoJianFinderMovieComposingWithContact:(id)arg1;
- (id)genPostPassInfoDictByContact:(id)arg1;
- (void)openAlbumPhotoByContact:(id)arg1;
- (void)openFinderPublishAlbumDirectlyByContact:(id)arg1;
- (id)getActionSheetShootPath;
- (BOOL)_enableShowPostConfigActionItem;
- (void)mergePostSessionFrom:(id)arg1;
- (unsigned long long)_getFinderFromAppInfoSource;
- (void)onClickHeadAvatarActionSheet;
- (void)onClickHeadAvatarDismiss;
- (void)reportPostActionSheetBtnWithEvent:(BOOL)arg1 hasRedDot:(BOOL)arg2;
- (void)reportPostRouteExtStatsForActionType:(int)arg1;
- (void)showFinderCameraViewController:(id)arg1 needTemplateEffect:(BOOL)arg2 byPassInfoDict:(id)arg3;
- (void)showFinderCameraViewController:(id)arg1 needTemplateEffect:(BOOL)arg2 byPassInfoDict:(id)arg3 musicIDs:(id)arg4;
- (BOOL)isFrontCamera;
- (void)showFinderPublishViewWithByPassInfoDict:(id)arg1;
- (void)showImagePickerByOptionObj:(id)arg1;
- (unsigned long long)streamEntranceTypeFromPostScene:(unsigned long long)arg1;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1 completion:(id /* block */)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)processWithSightDraft:(id)arg1;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (id)mergeDataItemBusinessLogic:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onImagePickerManagerOpenFinderCamera:(id)arg1;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)postViewControllerDidSaveDraft;
- (id)mjPublisher;
- (void)showMiaojianFinderPublisherWithShootDraftID:(id)arg1 contact:(id)arg2;
- (void)showMiaojianFinderCameraViewController:(id)arg1 needTemplateEffect:(BOOL)arg2 byPassInfoDict:(id)arg3 musicIDs:(id)arg4;
- (void)handleFinderPublisherEntryTypeDirectActionWithContact:(id)arg1 info:(id)arg2;
- (void)showMiaojianFinderPublisherWithPickerEditingEnabled:(BOOL)arg1 contact:(id)arg2;
- (void)showMiaojianFinderPublisherWithPickerEditingEnabled:(BOOL)arg1 shouldOpenMusicPanel:(BOOL)arg2 musicIDs:(id)arg3 contact:(id)arg4;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)startMovieComposingWithAssetInfos:(id)arg1 picker:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startMJImageComposingWithAssetInfos:(id)arg1 picker:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)imageComposingViewControllerDidCancel:(id)arg1;
- (void)imageComposingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)imageComposingViewController:(id)arg1 didFinishWithExportResult:(id)arg2 userInfo:(id)arg3;
- (void)_dismissImageComposing:(id)arg1 completion:(id /* block */)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)processWithMJShootingSightDraft:(id)arg1 finderTask:(id)arg2 appliedMusicInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didSavedAIGCAsyncDraft:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didCancelWithAIGCAsyncContext:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didFinishExportWithAIGCAsyncContext:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didFinishClipWithAIGCAsyncContext:(id)arg2;
- (long long)enterChildScene;
- (void)setEnterChildScene:(long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPostSheetConfigArray:(id)arg1;
- (unsigned long long)directlyPostScene;
- (void)setDirectlyPostScene:(unsigned long long)arg1;
- (int)userPrepareScene;
- (void)setUserPrepareScene:(int)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (int)profileEnterType;
- (void)setProfileEnterType:(int)arg1;
- (unsigned long long)createFromType;
- (void)setCreateFromType:(unsigned long long)arg1;
- (unsigned long long)createScene;
- (void)setCreateScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (id)publishActionSheet;
- (void)setPublishActionSheet:(id)arg1;
- (void)setMjPublisher:(id)arg1;
- (unsigned long long)publisherEnterType;
- (void)setPublisherEnterType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
