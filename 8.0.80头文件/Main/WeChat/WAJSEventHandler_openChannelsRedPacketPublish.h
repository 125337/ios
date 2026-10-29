@interface WAJSEventHandler_openChannelsRedPacketPublish : WAJSEventHandler_BaseEvent <MJShootComposingViewControllerDelegate, MJMovieComposingViewControllerDelegate, WCFinderVideoProducerViewControllerDelegate, WCFinderCreateCoordinatorDelegate, WCFinderPostViewControllerDelegate>
{
    BOOL _isUsingNewPublisher; // +0x8
    MJPublisher * _mjPublisher; // +0x10
    WCFinderCreateCoordinator * _createCoordinator; // +0x18
    MMAsset * _finderAsset; // +0x20
    unsigned long long _enterScene; // +0x28
}
- (void)handleJSEvent:(id)arg1;
- (void)handleJSEventOnAuthorized:(id)arg1;
- (void)handleJSEventForNewPublisher:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (void)_startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_onMJPublisherMovieComposingFinishFailed;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerPostSucForEnterScene:(unsigned long long)arg1 params:(id)arg2;
- (id)mjPublisher;
- (id)getFromVC;
- (void)handleJSEventForOldPublisher:(id)arg1;
- (void)openPostPageWithTitle:(id)arg1 jumpInfo:(id)arg2;
- (void)presentPostVCWith:(id)arg1;
- (void)setMjPublisher:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)finderAsset;
- (void)setFinderAsset:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (BOOL)isUsingNewPublisher;
- (void)setIsUsingNewPublisher:(BOOL)arg1;
- (void).cxx_destruct;
@end
