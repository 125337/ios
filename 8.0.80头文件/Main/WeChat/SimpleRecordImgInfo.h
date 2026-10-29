@interface SimpleRecordImgInfo : SimpleImgInfo <IRecordDownloadExt>
{
    unsigned int _downloadBtnStatus; // +0x20
    FavoritesItemDataField * _m_recordData; // +0x28
    CMessageWrap * _m_msgWrap; // +0x30
}
- (id)getSquareImgDir;
- (id)getImgPath;
- (void)startDownloadAsset;
- (void)startDownloadRawAsset;
- (void)stopDownloadRawAsset;
- (id)getImageSourcePath;
- (BOOL)isDownloadingRawImage;
- (id)getImagePreviewPath;
- (id)getRawFilePath;
- (id)getImageData;
- (id)getImage;
- (id)getThumbPath;
- (id)getLivePhotoVideoPath;
- (id)getSightPath;
- (unsigned int)getVideoTime;
- (id)getDefaultImg;
- (BOOL)isImgMsg;
- (BOOL)isVideoMsg;
- (BOOL)isFromC2C;
- (BOOL)isLivePhotoMsg;
- (BOOL)isLivePhotoVideoExist;
- (void)setM_recordData:(id)arg1;
- (id)getImgUUID;
- (BOOL)isRawImageOrVideo;
- (long long)getRawFileSize;
- (id)getPreviewRawBtnAttributedTitle;
- (id)getHDButtonTextBySize:(unsigned long long)arg1 prefix:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (id)m_recordData;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (unsigned int)downloadBtnStatus;
- (void)setDownloadBtnStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
