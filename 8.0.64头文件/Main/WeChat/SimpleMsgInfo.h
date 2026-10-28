@interface SimpleMsgInfo : SimpleImgInfo
{
    unsigned int m_uiMsgLocalID; // +0x20
    unsigned int m_uiMsgType; // +0x24
    NSString * _m_nsChatName; // +0x28
    NSString * _m_nsSessionName; // +0x30
    CMessageWrap * _m_msg; // +0x38
    unsigned long long _m_msgRelatedSize; // +0x40
}
+ (BOOL)isAppPayMsg:(id)arg1;
+ (BOOL)isAppMusicMsg:(id)arg1;
+ (BOOL)isFinderMsg:(id)arg1;
+ (BOOL)isShopOrProductMsg:(id)arg1;
+ (BOOL)isGiftMsg:(id)arg1;
- (id)init;
- (void)setM_strMsgLocalID:(id)arg1;
- (id)getSquareImgDir;
- (id)getMsg;
- (id)getImage;
- (id)getImageData;
- (id)getImgPath;
- (unsigned int)getVideoTime;
- (id)getTitle;
- (id)getDefaultImg;
- (id)getIconName;
- (id)getThumbOfAppMessage:(id)arg1;
- (BOOL)isAppUrlMsg;
- (BOOL)isAppMusicMsg;
- (BOOL)isAppVideoMsg;
- (BOOL)isAppNoteMsg;
- (BOOL)isAppRecordMsg;
- (BOOL)isAppFileMsg;
- (BOOL)isFileMsg;
- (BOOL)isImgMsg;
- (BOOL)isBrandMpVideoMsg;
- (BOOL)isVideoMsg;
- (BOOL)isGroupNoticeMsg;
- (BOOL)isUseWebImg;
- (id)getThumbUrl;
- (BOOL)isWeAppMsg;
- (id)getImgUUID;
- (BOOL)isFinderMsg;
- (BOOL)isShopOrProductMsg;
- (BOOL)isGiftMsg;
- (unsigned long long)getMsgRelatedResourceSize;
- (id)getSessionName;
- (unsigned int)m_uiMsgLocalID;
- (unsigned int)m_uiMsgType;
- (void)setM_uiMsgType:(unsigned int)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (id)m_nsSessionName;
- (void)setM_nsSessionName:(id)arg1;
- (id)m_msg;
- (void)setM_msg:(id)arg1;
- (unsigned long long)m_msgRelatedSize;
- (void)setM_msgRelatedSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
