@interface CExtendInfoOfImg : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiHDImgSize; // +0x8
    unsigned int m_uiNormalImgSize; // +0xc
    unsigned int m_uiHevcNormalImgSize; // +0x10
    NSString * m_nsImgHDUrl; // +0x18
    NSString * m_nsImgMidUrl; // +0x20
    NSData * m_dtImg; // +0x28
    ImageInfo * m_oImageInfo; // +0x30
    NSString * m_nsAesKey; // +0x38
    NSString * m_nsMsgThumbUrl; // +0x40
    NSString * m_nsMsgThumbAesKey; // +0x48
    unsigned int m_uiMsgThumbSize; // +0x50
    unsigned int m_uiMsgThumbWidth; // +0x54
    unsigned int m_uiMsgThumbHeight; // +0x58
    NSString * m_nsAutoDownloadControl; // +0x60
    NSString * m_nsMsgMd5; // +0x68
    MessageExpItem * m_oMsgExpItem; // +0x70
    NSString * m_nsAttachFileKey; // +0x78
    unsigned int m_uiContinueUploadCount; // +0x80
    NSString * m_authkey; // +0x88
    NSString * m_imgDataHash; // +0x90
    NSString * m_platformSignature; // +0x98
    NSString * m_imgSourceUrl; // +0xa0
    WAScreenshotContextInfo * m_weappScreenshotContextInfo; // +0xa8
    SourceImgInfo * m_sourceImgInfo; // +0xb0
    BOOL m_isCanUpload; // +0xb8
    BOOL m_forbidShowSource; // +0xb9
    BOOL m_isSpatial; // +0xba
    BOOL _m_bIsForceUpdate; // +0xbb
    unsigned int m_uiScene; // +0xbc
    unsigned int _m_uiAppVersion; // +0xc0
    CMessageWrap * m_refMessageWrap; // +0xc8
    MMAsset * m_asset; // +0xd0
    NSString * m_nsAppID; // +0xd8
    NSString * m_nsAppMediaTagName; // +0xe0
    NSString * m_nsAppMessageExt; // +0xe8
    NSString * m_nsAppMessageAction; // +0xf0
    NSString * m_nsOriginSourceDataMd5; // +0xf8
    NSString * m_phash; // +0x100
    NSString * m_pdqhash; // +0x108
    NSString * secInfo; // +0x110
    NSData * _wxamData; // +0x118
    NSString * _m_nsAppName; // +0x120
    NSData * _m_dtSenderMidImg; // +0x128
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (BOOL)isUploadHDImage;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)arg1;
- (id)secInfo;
- (void)setImage:(id)arg1 withData:(id)arg2 withImageInfo:(id)arg3 isLongOriginImage:(BOOL)arg4;
- (void)setImage:(id)arg1 isLongOriginImage:(BOOL)arg2;
- (void)setImage:(id)arg1 withImageInfo:(id)arg2 isLongOriginImage:(BOOL)arg3;
- (void)setImage:(id)arg1 withData:(id)arg2 isLongOriginImage:(BOOL)arg3;
- (BOOL)IsHDImg;
- (void)genearteThumbIfNeed;
- (id)GetThumbPath;
- (id)GetDownloadThumbPath;
- (void)setM_asset:(id)arg1;
- (id)m_nsAttachFileKey;
- (void)setM_weappScreenshotContextInfo:(id)arg1;
- (id)m_weappScreenshotContextInfo;
- (id)m_sourceImgInfo;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (id)m_nsImgHDUrl;
- (void)setM_nsImgHDUrl:(id)arg1;
- (id)m_nsImgMidUrl;
- (void)setM_nsImgMidUrl:(id)arg1;
- (id)m_nsMsgThumbAesKey;
- (void)setM_nsMsgThumbAesKey:(id)arg1;
- (id)m_nsMsgThumbUrl;
- (void)setM_nsMsgThumbUrl:(id)arg1;
- (id)m_oMsgExpItem;
- (void)setM_oMsgExpItem:(id)arg1;
- (unsigned int)m_uiHDImgSize;
- (void)setM_uiHDImgSize:(unsigned int)arg1;
- (unsigned int)m_uiMsgThumbHeight;
- (void)setM_uiMsgThumbHeight:(unsigned int)arg1;
- (unsigned int)m_uiMsgThumbSize;
- (void)setM_uiMsgThumbSize:(unsigned int)arg1;
- (unsigned int)m_uiMsgThumbWidth;
- (void)setM_uiMsgThumbWidth:(unsigned int)arg1;
- (id)m_nsAutoDownloadControl;
- (void)setM_nsAutoDownloadControl:(id)arg1;
- (unsigned int)m_uiNormalImgSize;
- (void)setM_uiNormalImgSize:(unsigned int)arg1;
- (unsigned int)m_uiHevcNormalImgSize;
- (void)setM_uiHevcNormalImgSize:(unsigned int)arg1;
- (id)m_dtImg;
- (void)setM_dtImg:(id)arg1;
- (id)m_oImageInfo;
- (void)setM_oImageInfo:(id)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (id)m_asset;
- (BOOL)m_isCanUpload;
- (void)setM_isCanUpload:(BOOL)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_nsMsgMd5;
- (void)setM_nsMsgMd5:(id)arg1;
- (id)m_nsAppID;
- (void)setM_nsAppID:(id)arg1;
- (id)m_nsAppMediaTagName;
- (void)setM_nsAppMediaTagName:(id)arg1;
- (id)m_nsAppMessageExt;
- (void)setM_nsAppMessageExt:(id)arg1;
- (id)m_nsAppMessageAction;
- (void)setM_nsAppMessageAction:(id)arg1;
- (void)setM_nsAttachFileKey:(id)arg1;
- (unsigned int)m_uiContinueUploadCount;
- (void)setM_uiContinueUploadCount:(unsigned int)arg1;
- (id)m_authkey;
- (void)setM_authkey:(id)arg1;
- (id)m_platformSignature;
- (void)setM_platformSignature:(id)arg1;
- (id)m_imgDataHash;
- (void)setM_imgDataHash:(id)arg1;
- (id)m_imgSourceUrl;
- (void)setM_imgSourceUrl:(id)arg1;
- (void)setM_sourceImgInfo:(id)arg1;
- (BOOL)m_forbidShowSource;
- (void)setM_forbidShowSource:(BOOL)arg1;
- (id)m_nsOriginSourceDataMd5;
- (void)setM_nsOriginSourceDataMd5:(id)arg1;
- (id)m_phash;
- (void)setM_phash:(id)arg1;
- (id)m_pdqhash;
- (void)setM_pdqhash:(id)arg1;
- (BOOL)m_isSpatial;
- (void)setM_isSpatial:(BOOL)arg1;
- (id)wxamData;
- (void)setWxamData:(id)arg1;
- (id)m_nsAppName;
- (void)setM_nsAppName:(id)arg1;
- (unsigned int)m_uiAppVersion;
- (void)setM_uiAppVersion:(unsigned int)arg1;
- (BOOL)m_bIsForceUpdate;
- (void)setM_bIsForceUpdate:(BOOL)arg1;
- (id)m_dtSenderMidImg;
- (void)setM_dtSenderMidImg:(id)arg1;
- (void).cxx_destruct;
@end

