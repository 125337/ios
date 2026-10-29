@interface WeDropSendSelectFileEvent : WeDropSendEvent <MMImagePickerManagerDelegate, WCFileBrowseDelegate, INearConnectionServiceExt, WeDropSelectFileHelper>
{
    BOOL _usingLastSent; // +0x8
    MMUIViewController * _containerVC; // +0x10
    MMImagePickerManager * _imagePicker; // +0x18
    NSMutableArray * _missingContentInfos; // +0x20
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)selectAlbums:(id)arg1;
- (void)selectFiles:(id)arg1;
- (void)selectLastSend:(id)arg1;
- (void)confirmMissingInfo:(BOOL)arg1;
- (void)addMissingContent:(int)arg1;
- (void)postProcessSelectedFiles;
- (void)onFileSelected;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)processPickAssetInfo:(id)arg1 index:(unsigned long long)arg2;
- (void)handleVideoAsset:(id)arg1 index:(unsigned long long)arg2 resolver:(id /* block */)arg3;
- (void)handleImageAsset:(id)arg1 index:(unsigned long long)arg2 resolver:(id /* block */)arg3;
- (void)handleNonLiveImageAsset:(id)arg1 index:(unsigned long long)arg2 resolver:(id /* block */)arg3;
- (void)handleLiveImageAsset:(id)arg1 index:(unsigned long long)arg2 resolver:(id /* block */)arg3;
- (void)handleImageAssetInfo:(id)arg1 index:(unsigned long long)arg2 resolver:(id /* block */)arg3;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onFileBrowserCancel;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
- (id)containerVC;
- (void)setContainerVC:(id)arg1;
- (BOOL)usingLastSent;
- (void)setUsingLastSent:(BOOL)arg1;
- (id)imagePicker;
- (void)setImagePicker:(id)arg1;
- (id)missingContentInfos;
- (void)setMissingContentInfos:(id)arg1;
- (void).cxx_destruct;
@end
