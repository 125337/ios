@interface MMImagePreviewControllerActionFlow : NSObject
{
    BOOL _isPickerFinished; // +0x8
    BOOL _shouldSaveAlbum; // +0x9
    id <MMAssetCompositeTaskProtocol> _videoCompositeTask; // +0x10
    MMAsset * _srcVideoAsset; // +0x18
    EditVideoAttr * _editVideoAttr; // +0x20
    NSDictionary * _byPassInfo; // +0x28
}
- (BOOL)isPickerFinished;
- (void)setIsPickerFinished:(BOOL)arg1;
- (BOOL)shouldSaveAlbum;
- (void)setShouldSaveAlbum:(BOOL)arg1;
- (id)videoCompositeTask;
- (void)setVideoCompositeTask:(id)arg1;
- (id)srcVideoAsset;
- (void)setSrcVideoAsset:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end

