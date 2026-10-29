@interface MJMCPickerEditingMediator : NSObject <MMImagePickerManagerDelegate>
{
    BOOL _didHandleLocalBGMPicking; // +0x8
    MJMovieComposingViewController * _composingVC; // +0x10
    unsigned long long _scene; // +0x18
}
- (void)showAlbumPickerForAssetSelection;
- (void)showAlbumPickerForLocalBGMVideoSelection;
- (void)dismissImagePickerAnimated:(BOOL)arg1;
- (void)dismissImagePickerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (void)handlePickedAssetInfos:(id)arg1;
- (void)handlePickedLocalBGMAssetInfos:(id)arg1 picker:(id)arg2;
- (id)composingVC;
- (void)setComposingVC:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)didHandleLocalBGMPicking;
- (void)setDidHandleLocalBGMPicking:(BOOL)arg1;
- (void).cxx_destruct;
@end
