@interface CUploadVideoWrap : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFromUsrName; // +0x10
    NSString * m_nsToUsrName; // +0x18
    unsigned int m_uiLocalID; // +0x20
    long long m_n64SvrID; // +0x28
    unsigned int m_uiThumbTotalLen; // +0x30
    unsigned int m_uiThumbStartPos; // +0x34
    NSData * m_dtThumb; // +0x38
    unsigned int m_uiVideoTotalLen; // +0x40
    unsigned int m_uiVideoStartPos; // +0x44
    unsigned int m_uiVideoTime; // +0x48
    NSData * m_dtVideo; // +0x50
    unsigned int m_uiCameraType; // +0x58
    unsigned int m_uiNetwork; // +0x5c
    unsigned int m_uiVideoSource; // +0x60
    unsigned int m_uiEncrypVer; // +0x64
    NSString * m_nsAesKey; // +0x68
    NSString * m_nsVideoUrl; // +0x70
    NSString * m_nsVideoThumbUrl; // +0x78
    NSString * m_nsThumbAesKey; // +0x80
    unsigned int m_uiVideoThumbSize; // +0x88
    unsigned int m_uiVideoThumbWidth; // +0x8c
    unsigned int m_uiVideoThumbHeight; // +0x90
    NSString * m_nsMsgSource; // +0x98
    NSString * m_nsMd5; // +0xa0
    NSString * m_nsStreamVideoUrl; // +0xa8
    NSString * m_nsStreamVideoTitle; // +0xb0
    NSString * m_nsStreamVideoWording; // +0xb8
    NSString * m_nsStreamVideoWebUrl; // +0xc0
    unsigned int m_uiStreamVideoTime; // +0xc8
    NSString * m_nsStreamVideoThumbUrl; // +0xd0
    NSString * m_nsStreamVideoPublishId; // +0xd8
    NSString * m_nsStreamVideoAdUxInfo; // +0xe0
    NSString * m_nsStatExtStr; // +0xe8
    BOOL _m_bHitMd5; // +0xf0
    BOOL _m_bUseSafeCdn; // +0xf1
    unsigned int _m_uiCrc32; // +0xf4
    unsigned int _m_forwardType; // +0xf8
    unsigned int _m_videoSource; // +0xfc
    NSString * _m_nsNewMd5; // +0x100
    NSString * _m_nsAppId; // +0x108
    NSString * _m_nsMessageAction; // +0x110
    NSString * _m_nsMessageExt; // +0x118
    NSString * _m_nsMediaTagName; // +0x120
}
- (id)init;
- (id)description;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFromUsrName;
- (void)setM_nsFromUsrName:(id)arg1;
- (id)m_nsToUsrName;
- (void)setM_nsToUsrName:(id)arg1;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (long long)m_n64SvrID;
- (void)setM_n64SvrID:(long long)arg1;
- (unsigned int)m_uiThumbTotalLen;
- (void)setM_uiThumbTotalLen:(unsigned int)arg1;
- (unsigned int)m_uiThumbStartPos;
- (void)setM_uiThumbStartPos:(unsigned int)arg1;
- (id)m_dtThumb;
- (void)setM_dtThumb:(id)arg1;
- (unsigned int)m_uiVideoTotalLen;
- (void)setM_uiVideoTotalLen:(unsigned int)arg1;
- (unsigned int)m_uiVideoStartPos;
- (void)setM_uiVideoStartPos:(unsigned int)arg1;
- (unsigned int)m_uiVideoTime;
- (void)setM_uiVideoTime:(unsigned int)arg1;
- (id)m_dtVideo;
- (void)setM_dtVideo:(id)arg1;
- (unsigned int)m_uiCameraType;
- (void)setM_uiCameraType:(unsigned int)arg1;
- (unsigned int)m_uiNetwork;
- (void)setM_uiNetwork:(unsigned int)arg1;
- (unsigned int)m_uiVideoSource;
- (void)setM_uiVideoSource:(unsigned int)arg1;
- (unsigned int)m_uiEncrypVer;
- (void)setM_uiEncrypVer:(unsigned int)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (id)m_nsVideoUrl;
- (void)setM_nsVideoUrl:(id)arg1;
- (id)m_nsVideoThumbUrl;
- (void)setM_nsVideoThumbUrl:(id)arg1;
- (id)m_nsThumbAesKey;
- (void)setM_nsThumbAesKey:(id)arg1;
- (unsigned int)m_uiVideoThumbSize;
- (void)setM_uiVideoThumbSize:(unsigned int)arg1;
- (unsigned int)m_uiVideoThumbWidth;
- (void)setM_uiVideoThumbWidth:(unsigned int)arg1;
- (unsigned int)m_uiVideoThumbHeight;
- (void)setM_uiVideoThumbHeight:(unsigned int)arg1;
- (id)m_nsMsgSource;
- (void)setM_nsMsgSource:(id)arg1;
- (id)m_nsMd5;
- (void)setM_nsMd5:(id)arg1;
- (id)m_nsStreamVideoUrl;
- (void)setM_nsStreamVideoUrl:(id)arg1;
- (id)m_nsStreamVideoTitle;
- (void)setM_nsStreamVideoTitle:(id)arg1;
- (id)m_nsStreamVideoWording;
- (void)setM_nsStreamVideoWording:(id)arg1;
- (id)m_nsStreamVideoWebUrl;
- (void)setM_nsStreamVideoWebUrl:(id)arg1;
- (unsigned int)m_uiStreamVideoTime;
- (void)setM_uiStreamVideoTime:(unsigned int)arg1;
- (id)m_nsStreamVideoThumbUrl;
- (void)setM_nsStreamVideoThumbUrl:(id)arg1;
- (id)m_nsStreamVideoPublishId;
- (void)setM_nsStreamVideoPublishId:(id)arg1;
- (id)m_nsStreamVideoAdUxInfo;
- (void)setM_nsStreamVideoAdUxInfo:(id)arg1;
- (id)m_nsStatExtStr;
- (void)setM_nsStatExtStr:(id)arg1;
- (id)m_nsNewMd5;
- (void)setM_nsNewMd5:(id)arg1;
- (unsigned int)m_uiCrc32;
- (void)setM_uiCrc32:(unsigned int)arg1;
- (BOOL)m_bHitMd5;
- (void)setM_bHitMd5:(BOOL)arg1;
- (BOOL)m_bUseSafeCdn;
- (void)setM_bUseSafeCdn:(BOOL)arg1;
- (unsigned int)m_forwardType;
- (void)setM_forwardType:(unsigned int)arg1;
- (unsigned int)m_videoSource;
- (void)setM_videoSource:(unsigned int)arg1;
- (id)m_nsAppId;
- (void)setM_nsAppId:(id)arg1;
- (id)m_nsMessageAction;
- (void)setM_nsMessageAction:(id)arg1;
- (id)m_nsMessageExt;
- (void)setM_nsMessageExt:(id)arg1;
- (id)m_nsMediaTagName;
- (void)setM_nsMediaTagName:(id)arg1;
- (void).cxx_destruct;
@end
