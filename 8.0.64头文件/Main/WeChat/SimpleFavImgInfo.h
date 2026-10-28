@interface SimpleFavImgInfo : SimpleMsgInfo <IFavCdnDownloadMgrExt>
{
    FavoritesItemDataField * _m_favData; // +0x28
    FavoritesItem * _m_favItem; // +0x30
}
- (id)m_strMsgLocalID;
- (id)getSquareImgDir;
- (id)getImgPath;
- (id)getSightPath;
- (unsigned int)getVideoTime;
- (id)getDefaultImg;
- (BOOL)isImgMsg;
- (BOOL)isVideoMsg;
- (BOOL)isBrandMpVideoMsg;
- (BOOL)isUseWebImg;
- (id)getThumbUrl;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (id)getImgUUID;
- (id)m_favData;
- (void)setM_favData:(id)arg1;
- (id)m_favItem;
- (void)setM_favItem:(id)arg1;
- (void).cxx_destruct;
@end
