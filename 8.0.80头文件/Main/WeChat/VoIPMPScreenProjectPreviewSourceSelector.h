@interface VoIPMPScreenProjectPreviewSourceSelector : NSObject <WCFileBrowseDelegate, UIDocumentPickerDelegate, MMImagePickerManagerDelegate>
{
    id <VoIPMPScreenProjectPreviewSourceSelectorDelegate> _delegate; // +0x8
    NSString * _chatroomName; // +0x10
    id /* block */ _selectFileCompletion; // +0x18
    id /* block */ _previewSourceCompletion; // +0x20
    NSString * _assetToken; // +0x28
    long long _assetCount; // +0x30
    NSMutableDictionary * _assetCache; // +0x38
}
- (id)init;
- (void)launchSelectFilePageWithCompletion:(id /* block */)arg1;
- (void)selectFileFromNativeWithCompletion:(id /* block */)arg1;
- (void)selectMediaFromNativeWithCompletion:(id /* block */)arg1;
- (id)cachedAssetPathsForToken:(id)arg1;
- (void)cleanupPreviewSource;
- (void)presentFileBrowserFromViewController:(id)arg1;
- (void)presentSourcePicker:(id)arg1 fromViewController:(id)arg2;
- (BOOL)supportsScreenProjectFileWithLogicController:(id)arg1 filePath:(id)arg2 fileExt:(id)arg3;
- (BOOL)supportsScreenProjectFileURL:(id)arg1;
- (BOOL)supportsScreenProjectPDFFileWithPath:(id)arg1;
- (void)showFileTypeNotSupportedToast;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowserCancel;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)completeFileSelectionWithFilePath:(id)arg1 fileExt:(id)arg2 fileName:(id)arg3;
- (id)copySecurityScopedDocumentURLToPreviewDirectory:(id)arg1 error:(id *)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)completeSightVideoSelectionWithPath:(id)arg1;
- (void)exportMediaAssetsToTempDir:(id)arg1 editedImages:(id)arg2 token:(id)arg3 completion:(id /* block */)arg4;
- (void)exportImageAsset:(id)arg1 toPath:(id)arg2 editedImage:(id)arg3 completion:(id /* block */)arg4;
- (void)exportVideoAsset:(id)arg1 toPath:(id)arg2 completion:(id /* block */)arg3;
- (id)topMostViewController;
- (void)notifySourceTypeChanged:(long long)arg1;
- (id)screenProjectFileMD5ForPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatroomName;
- (void)setChatroomName:(id)arg1;
- (id /* block */)selectFileCompletion;
- (void)setSelectFileCompletion:(id /* block */)arg1;
- (id /* block */)previewSourceCompletion;
- (void)setPreviewSourceCompletion:(id /* block */)arg1;
- (id)assetToken;
- (void)setAssetToken:(id)arg1;
- (long long)assetCount;
- (void)setAssetCount:(long long)arg1;
- (id)assetCache;
- (void)setAssetCache:(id)arg1;
- (void).cxx_destruct;
@end
