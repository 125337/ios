@interface WCFinderRouterTemplateDelegateObj : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCFinderPostViewControllerDelegate, WCVideoProducerViewControllerDelegate, MJShootComposingViewControllerDelegate, MJMovieComposingViewControllerDelegate, MJPublisherDataSource>
{
    MJPublisher * _mjPublisher; // +0x8
    UIViewController * _hostVC; // +0x10
    WCFinderTemplateBindData * _bindData; // +0x18
}
+ (id)delegateObjWithHost:(id)arg1 bindData:(id)arg2;
+ (BOOL)checkIsChildViewController:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)finderTemplateSelectVCDidPickSightDraft:(id)arg1;
- (void)processWithSightDraft:(id)arg1;
- (void)processWithSightDraft:(id)arg1 publisherPostInfo:(id)arg2;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (id /* block */)processPostSessionModel;
- (void)releaseSelf;
- (void)_releaseSelf;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_startMaasComposingWithAssetInfosInner:(id)arg1 picker:(id)arg2 startHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didSavedAIGCAsyncDraft:(id)arg2;
- (id)mjPublisher;
- (void)setMjPublisher:(id)arg1;
- (id)hostVC;
- (void)setHostVC:(id)arg1;
- (id)bindData;
- (void)setBindData:(id)arg1;
- (void).cxx_destruct;
@end
