@interface SimpleImgInfo : MMObject
{
    NSString * m_strMsgLocalID; // +0x8
    unsigned int m_uiCreateTime; // +0x10
    BOOL m_bExpired; // +0x14
    id <SimpleImgInfoDelegate> m_delegate; // +0x18
    BOOL _forbidDetailPage; // +0x20
    BOOL _m_noResponseClick; // +0x21
}
- (id)getTitle;
- (id)getSessionName;
- (id)getSquareImgDir;
- (id)getImgPath;
- (id)getImage;
- (id)getImageData;
- (id)getSightPath;
- (unsigned int)getVideoTime;
- (id)getDefaultImg;
- (id)getIconName;
- (BOOL)isAppUrlMsg;
- (BOOL)isAppFileMsg;
- (BOOL)isFileMsg;
- (BOOL)isAppMusicMsg;
- (BOOL)isAppVideoMsg;
- (BOOL)isAppNoteMsg;
- (BOOL)isAppRecordMsg;
- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (BOOL)isVideoMsg;
- (BOOL)isFromC2C;
- (BOOL)isLivePhotoMsg;
- (BOOL)isLivePhotoVideoExist;
- (long long)compare:(id)arg1;
- (BOOL)isBrandMpVideoMsg;
- (BOOL)isUseWebImg;
- (id)getThumbUrl;
- (BOOL)isGroupNoticeMsg;
- (BOOL)isRawImageOrVideo;
- (id)getRawFilePath;
- (long long)getRawFileSize;
- (id)getPreviewRawBtnAttributedTitle;
- (id)getThumbPath;
- (id)getLivePhotoVideoPath;
- (id)getImgUUID;
- (BOOL)isFinderMsg;
- (void)startVideoPreload:(unsigned int)arg1;
- (unsigned long long)getMsgRelatedResourceSize;
- (id)m_strMsgLocalID;
- (void)setM_strMsgLocalID:(id)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (BOOL)m_bExpired;
- (void)setM_bExpired:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)forbidDetailPage;
- (void)setForbidDetailPage:(BOOL)arg1;
- (BOOL)m_noResponseClick;
- (void)setM_noResponseClick:(BOOL)arg1;
- (void).cxx_destruct;
@end
