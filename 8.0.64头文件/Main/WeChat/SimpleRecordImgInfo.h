@interface SimpleRecordImgInfo : SimpleImgInfo <IRecordDownloadExt>
{
    FavoritesItemDataField * _m_recordData; // +0x20
    CMessageWrap * _m_msgWrap; // +0x28
}
- (id)getSquareImgDir;
- (id)getImgPath;
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
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (id)m_recordData;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (void).cxx_destruct;
@end
