@interface MJSCPickerEditingMediator : NSObject <MMImagePickerManagerDelegate>
{
    MJShootComposingViewController * _composingVC; // +0x8
    unsigned long long _fromScene; // +0x10
    NSString * _shootEntryExtInfo; // +0x18
    NSString * _userName; // +0x20
    RecommendedMusicInfo * _patMusicInfo; // +0x28
}
- (void)showAlbumPickerForSingleImageSelectionWithEnterScene:(unsigned long long)arg1;
- (void)showAlbumPickerWithEnterScene:(unsigned long long)arg1;
- (void)showAlbumPickerWithEnterScene:(unsigned long long)arg1 isCurrentAIGCTemplate:(BOOL)arg2;
- (void)dismissImagePickerAnimated:(BOOL)arg1;
- (void)dismissImagePickerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (unsigned long long)postEnterScene;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)_onAssetPickerDidChangeAssetSelection:(id)arg1 withCurrentState:(id)arg2;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)handleMiaoJianSourceLocalVideoAssetPickingActionWithPostSession:(id)arg1;
- (BOOL)isFromFinderRedPackageEntry;
- (BOOL)isFromFinderRedPackageEntryInOldMovieComposing;
- (BOOL)isFromFinderRedPackageEntryInNewMovieComposing;
- (BOOL)shouldInterruptForAssetsDurationCheckWithAssetInfos:(id)arg1;
- (void)notifyDidFinishPickImageAssetInfos:(id)arg1 picker:(id)arg2;
- (void)notifyDidFinishPickAssetInfos:(id)arg1 picker:(id)arg2;
- (id)composingVC;
- (void)setComposingVC:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)shootEntryExtInfo;
- (void)setShootEntryExtInfo:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (void).cxx_destruct;
@end
