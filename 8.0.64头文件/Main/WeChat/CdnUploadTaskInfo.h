@interface CdnUploadTaskInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFileId; // +0x10
    NSString * m_nsAesKey; // +0x18
    unsigned long long m_nFileLength; // +0x20
    NSString * m_nsFileMD5; // +0x28
    NSString * m_nsTransInfo; // +0x30
    int m_nRetCode; // +0x38
    NSString * m_nsChatName; // +0x40
    NSString * m_nsThumbAesKey; // +0x48
    int m_nThumbImgLength; // +0x50
    NSString * m_nsThumbMd5; // +0x58
    int m_nMidimgLength; // +0x60
    NSString * m_nsStreamId; // +0x68
    NSString * m_nsFileUrl; // +0x70
    NSString * m_nsThumbUrl; // +0x78
    unsigned int m_uiScene; // +0x80
    unsigned int m_nHitCacheType; // +0x84
    BOOL m_bNeedSendMsg; // +0x88
    unsigned long long m_nSvrMsgId; // +0x90
    BOOL m_bFileExist; // +0x98
    NSString * m_emojiMd5; // +0xa0
    CDNUploadMsgImgPrepareResponse * m_pbUploadResp; // +0xa8
    BOOL _m_useSafeCdn; // +0xb0
    unsigned int _m_uiCrc32; // +0xb4
    NSString * _m_nsMidImageMd5; // +0xb8
    NSString * _m_videoNewMd5; // +0xc0
    NSString * _m_lastSvrIP; // +0xc8
    NSArray * _m_arrCheckHitFileInfo; // +0xd0
    NSArray * _arrFileInfo; // +0xd8
    NSData * _cdnProtoData; // +0xe0
}
- (id)init;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFileId;
- (void)setM_nsFileId:(id)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (id)m_nsThumbAesKey;
- (void)setM_nsThumbAesKey:(id)arg1;
- (unsigned long long)m_nFileLength;
- (void)setM_nFileLength:(unsigned long long)arg1;
- (id)m_nsFileMD5;
- (void)setM_nsFileMD5:(id)arg1;
- (int)m_nMidimgLength;
- (void)setM_nMidimgLength:(int)arg1;
- (id)m_nsTransInfo;
- (void)setM_nsTransInfo:(id)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (int)m_nThumbImgLength;
- (void)setM_nThumbImgLength:(int)arg1;
- (id)m_nsThumbMd5;
- (void)setM_nsThumbMd5:(id)arg1;
- (id)m_nsStreamId;
- (void)setM_nsStreamId:(id)arg1;
- (id)m_nsFileUrl;
- (void)setM_nsFileUrl:(id)arg1;
- (id)m_nsThumbUrl;
- (void)setM_nsThumbUrl:(id)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (BOOL)m_bNeedSendMsg;
- (void)setM_bNeedSendMsg:(BOOL)arg1;
- (unsigned int)m_nHitCacheType;
- (void)setM_nHitCacheType:(unsigned int)arg1;
- (unsigned long long)m_nSvrMsgId;
- (void)setM_nSvrMsgId:(unsigned long long)arg1;
- (BOOL)m_bFileExist;
- (void)setM_bFileExist:(BOOL)arg1;
- (id)m_pbUploadResp;
- (void)setM_pbUploadResp:(id)arg1;
- (id)m_emojiMd5;
- (void)setM_emojiMd5:(id)arg1;
- (id)m_nsMidImageMd5;
- (void)setM_nsMidImageMd5:(id)arg1;
- (id)m_videoNewMd5;
- (void)setM_videoNewMd5:(id)arg1;
- (unsigned int)m_uiCrc32;
- (void)setM_uiCrc32:(unsigned int)arg1;
- (BOOL)m_useSafeCdn;
- (void)setM_useSafeCdn:(BOOL)arg1;
- (id)m_lastSvrIP;
- (void)setM_lastSvrIP:(id)arg1;
- (id)m_arrCheckHitFileInfo;
- (void)setM_arrCheckHitFileInfo:(id)arg1;
- (id)arrFileInfo;
- (void)setArrFileInfo:(id)arg1;
- (id)cdnProtoData;
- (void)setCdnProtoData:(id)arg1;
- (void).cxx_destruct;
@end
