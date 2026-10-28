@interface LiteAppAssetPickerControllerProxyObjectForAllAsset : NSObject <MMImagePreviewBrowserControllerDataSource>
{
    BOOL _bPickerStyleForFile; // +0x8
    BOOL _containsVideo; // +0x9
    MMAlbum * m_album; // +0x10
    NSMutableArray * _selectedInfos; // +0x18
    NSMutableArray * _m_imageArray; // +0x20
    id <MMImagePickerControlCenter> _controlCenter; // +0x28
    NSMutableArray * _otherAlbumSelectedInfos; // +0x30
}
- (void)setSelectedInfos:(id)arg1;
- (BOOL)isPreviewSelectedOnly;
- (BOOL)isPreviewStyleForFile;
- (id)selectedAssetInfosForPreview;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewAssetTotal;
- (unsigned long long)getSelectedAssetTotalSize;
- (BOOL)isPreviewSelectedAssetInfosContainsVideo;
- (id)m_album;
- (void)setM_album:(id)arg1;
- (id)selectedInfos;
- (BOOL)bPickerStyleForFile;
- (void)setBPickerStyleForFile:(BOOL)arg1;
- (BOOL)containsVideo;
- (void)setContainsVideo:(BOOL)arg1;
- (id)m_imageArray;
- (void)setM_imageArray:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)otherAlbumSelectedInfos;
- (void)setOtherAlbumSelectedInfos:(id)arg1;
- (void).cxx_destruct;
@end
