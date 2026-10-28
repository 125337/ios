@interface ImageInfo : NSObject <NSCopying>
{
    unsigned int m_uiImageSource; // +0x8
    UIImage * _image; // +0x10
    NSData * _imageData; // +0x18
    NSString * _assetId; // +0x20
    MMImageExifLogInfo * _exifLogInfo; // +0x28
    NSString * _livePhotoVideoPath; // +0x30
    NSString * _livePhotoHDVideoPath; // +0x38
    NSString * _revokeBatchId; // +0x40
}
- (void)setIsEdited:(BOOL)arg1;
- (BOOL)isEdited;
- (void)setEditImageAttr:(id)arg1;
- (id)editImageAttr;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)m_uiImageSource;
- (void)setM_uiImageSource:(unsigned int)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)assetId;
- (void)setAssetId:(id)arg1;
- (id)exifLogInfo;
- (void)setExifLogInfo:(id)arg1;
- (id)livePhotoVideoPath;
- (void)setLivePhotoVideoPath:(id)arg1;
- (id)livePhotoHDVideoPath;
- (void)setLivePhotoHDVideoPath:(id)arg1;
- (id)revokeBatchId;
- (void)setRevokeBatchId:(id)arg1;
- (void).cxx_destruct;
@end
