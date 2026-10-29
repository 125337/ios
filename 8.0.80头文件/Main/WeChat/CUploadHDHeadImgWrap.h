@interface CUploadHDHeadImgWrap : NSObject
{
    NSString * m_nsName; // +0x8
    unsigned int m_startPos; // +0x10
    unsigned int m_totalLen; // +0x14
    NSData * m_dtData; // +0x18
    NSData * m_dtNormalData; // +0x20
    NSString * m_nsHash; // +0x28
    NSString * m_nsFinalMD5; // +0x30
    NSString * m_nsSmallUrl; // +0x38
    NSString * m_nsHDUrl; // +0x40
    unsigned int m_eventID; // +0x48
    unsigned int m_uiUploadEventID; // +0x4c
    unsigned int m_headType; // +0x50
    int m_headScene; // +0x54
    BOOL _isUseCdnUpload; // +0x58
    unsigned int _cgiFunc; // +0x5c
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)hash;
- (void)setHash:(id)arg1;
- (id)finalMD5;
- (void)setFinalMD5:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)normalData;
- (void)setNormalData:(id)arg1;
- (unsigned int)startPos;
- (void)setStartPos:(unsigned int)arg1;
- (unsigned int)totalLen;
- (void)setTotalLen:(unsigned int)arg1;
- (int)headScene;
- (void)setHeadScene:(int)arg1;
- (unsigned int)headType;
- (void)setHeadType:(unsigned int)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (unsigned int)uiUploadEventID;
- (void)setUiUploadEventID:(unsigned int)arg1;
- (id)smallUrl;
- (void)setSmallUrl:(id)arg1;
- (id)HDUrl;
- (void)setHDUrl:(id)arg1;
- (BOOL)isUseCdnUpload;
- (void)setIsUseCdnUpload:(BOOL)arg1;
- (unsigned int)cgiFunc;
- (void)setCgiFunc:(unsigned int)arg1;
- (void).cxx_destruct;
@end
