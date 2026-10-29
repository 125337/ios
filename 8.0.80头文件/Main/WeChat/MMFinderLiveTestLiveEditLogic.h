@interface MMFinderLiveTestLiveEditLogic : NSObject <WCActionSheetDelegate, MMSightCameraViewControllerDelegate, MMImagePickerManagerDelegate, WCEditImageViewControllerDelegate, MMFinderLiveBulletinViewControllerDelegate, MMFinderLiveVisivilityShareSettingDelegate, WCTimelinePOIPickerViewControllerDelegate>
{
    BOOL _editingBulletin; // +0x8
    BOOL _coverHostSheetDismissed; // +0x9
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x10
    MMFinderLiveTestLiveInfoConfirmSheet * _sheet; // +0x18
    MMFinderLiveViewController * _fromVC; // +0x20
    NSMutableDictionary * _inFlightCompletions; // +0x28
    MMFinderLiveSettingVisivilityShareSettingView * _shareSettingView; // +0x30
    MMFinderLiveSettingVisivilitySettingInfo * _previousVisibilitySettingInfo; // +0x38
}
- (id)initWithFinderLiveTaskId:(id)arg1 sheet:(id)arg2;
- (id)liveTask;
- (void)editCoverWithCompletion:(id /* block */)arg1;
- (void)editDescriptionWithCompletion:(id /* block */)arg1;
- (void)editVisibilityWithCompletion:(id /* block */)arg1;
- (void)editLocationWithCompletion:(id /* block */)arg1;
- (void)trackCompletion:(id /* block */)arg1 forType:(id)arg2;
- (id /* block */)consumeCompletionForType:(id)arg1;
- (void)finishCoverEditingWithResult:(id)arg1;
- (void)cancelAllCompletions;
- (void)showCoverActionSheetWithCompletion:(id /* block */)arg1;
- (void)showFinderSightPictureTakenView;
- (void)presentEditFinderHeadImageVCWithOriginImageUrl:(id)arg1 image:(id)arg2;
- (void)loadHeadImageAndPresentEditor:(id)arg1;
- (void)uploadImage:(id)arg1 completion:(id /* block */)arg2;
- (void)setLiveCoverWithImageAttr:(id)arg1 source:(unsigned int)arg2;
- (void)reportModifyCoverActionSheetItemExpose:(unsigned long long)arg1;
- (void)reportCoverModifyWithCoverURL:(id)arg1;
- (unsigned long long)privateTypeForVisibilityMode:(unsigned long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)isFrontCamera;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewControllerDidCancelWithInfos:(id)arg1 infos:(id)arg2;
- (void)editImageViewControllerDidUnselected:(id)arg1 infos:(id)arg2;
- (void)onMMFinderLiveBulletinViewControllerTapDone:(id)arg1;
- (void)onShareSettingViewConfirmed:(id)arg1;
- (void)onShareSettingViewCanceled:(id)arg1;
- (id)testLiveVisibilityInitParams;
- (void)handleShareSettingViewConfirmed:(id)arg1 settingInfo:(id)arg2;
- (BOOL)isTestLiveMode:(unsigned long long)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIPickerCanceled;
- (id)finderLiveTaskId;
- (id)sheet;
- (void)setSheet:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)inFlightCompletions;
- (void)setInFlightCompletions:(id)arg1;
- (id)shareSettingView;
- (void)setShareSettingView:(id)arg1;
- (id)previousVisibilitySettingInfo;
- (void)setPreviousVisibilitySettingInfo:(id)arg1;
- (BOOL)editingBulletin;
- (void)setEditingBulletin:(BOOL)arg1;
- (BOOL)coverHostSheetDismissed;
- (void)setCoverHostSheetDismissed:(BOOL)arg1;
- (void).cxx_destruct;
@end
