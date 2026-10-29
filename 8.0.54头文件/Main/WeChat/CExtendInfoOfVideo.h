@interface CExtendInfoOfVideo : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiVideoLen; // +0x8
    unsigned int m_uiVideoTime; // +0xc
    unsigned int m_uiUploadStatus; // +0x10
    unsigned int m_uiVideoOffset; // +0x14
    unsigned long long m_uiRawVideoOffset; // +0x18
    unsigned int m_uiCameraType; // +0x20
    unsigned int m_uiVideoSource; // +0x24
    NSString * m_nsAesKey; // +0x28
    unsigned int m_uiVideoFormat; // +0x30
    NSString * m_nsMsgDataUrl; // +0x38
    NSString * m_nsMsgThumbUrl; // +0x40
    NSString * m_nsMsgThumbAesKey; // +0x48
    unsigned int m_uiMsgThumbSize; // +0x50
    unsigned int m_uiMsgThumbWidth; // +0x54
    unsigned int m_uiMsgThumbHeight; // +0x58
    NSString * m_nsAutoDownloadControl; // +0x60
    NSString * m_nsStatExtStr; // +0x68
    MessageExpItem * m_oMsgExpItem; // +0x70
    NSString * m_nsFileParam; // +0x78
    NSString * m_nsStreamVideoUrl; // +0x80
    unsigned int m_uiStreamVideoTime; // +0x88
    NSString * m_nsStreamVideoTitle; // +0x90
    NSString * m_nsStreamVideoWording; // +0x98
    NSString * m_nsStreamVideoWebUrl; // +0xa0
    NSString * m_nsStreamVideoThumbUrl; // +0xa8
    NSString * m_nsStreamVideoPublishId; // +0xb0
    NSString * m_nsStreamVideoAdUxInfo; // +0xb8
    NSString * m_nsMsgMd5; // +0xc0
    NSString * m_nsNewMd5; // +0xc8
    int m_nDownloadLimit; // +0xd0
    NSString * m_nsAttachFileKey; // +0xd8
    unsigned int m_uiContinueUploadCount; // +0xe0
    unsigned int m_uiRawContinueUploadCount; // +0xe4
    NSString * m_authkey; // +0xe8
    NSString * m_nsEncodeJson; // +0xf0
    unsigned long long m_uiRawFileLength; // +0xf8
    NSString * m_nsRawFileMd5; // +0x100
    NSString * m_nsRawDataUrl; // +0x108
    NSString * m_nsRawAeskey; // +0x110
    unsigned int m_uiRawVideoFormat; // +0x118
    NSString * m_nsOriginSourceDataMd5; // +0x120
    unsigned int m_uOverWriteMsgSendTime; // +0x128
    long long m_n64OverWriteMsgSvrID; // +0x130
    NSString * m_nsUploadToken; // +0x138
    BOOL m_bIsPlaceHolder; // +0x140
    BOOL m_bIsVideoMsgToOverWrite; // +0x141
    WASourceWeappInfo * m_sourceWeappInfo; // +0x148
    BOOL m_bIsForceUpdate; // +0x150
    BOOL m_isSpatial; // +0x151
    unsigned int m_uiPreDownloadPercent; // +0x154
    unsigned int m_uiPreDownloadNetType; // +0x158
    unsigned int m_uiAppVersion; // +0x15c
    CMessageWrap * m_refMessageWrap; // +0x160
    NSString * m_nsAssetId; // +0x168
    NSString * m_nsNoPreDownloadRange; // +0x170
    NSString * m_nsAppID; // +0x178
    NSString * m_nsAppName; // +0x180
    NSString * m_nsAppMediaTagName; // +0x188
    NSString * m_nsAppMessageExt; // +0x190
    NSString * m_nsAppMessageAction; // +0x198
    VideoUploadStatInfo * _m_oVideoUploadStatInfo; // +0x1a0
    MMAsset * _m_asset; // +0x1a8
    NSString * _m_assetIdForForward; // +0x1b0
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
+ (void)CreateVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4 retMessageWrap:(id *)arg5;
+ (id)GenVideoMsg:(id)arg1 ToUsr:(id)arg2 MsgType:(unsigned int)arg3 VideoInfo:(id)arg4;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (void)parseStreamVideoNode:(XmlReaderNode_t *)arg1;
- (id)xmlOfStreamVideo;
- (void)UpdateContent:(id)arg1;
- (void)UpdateVideoStatus:(id)arg1;
- (void)updateUploadStatus:(id)arg1;
- (void)updateDownloadStatus:(id)arg1;
- (id)GetThumbPath;
- (id)GetDownloadThumbPath;
- (BOOL)IsUnPlayed;
- (id)m_nsAttachFileKey;
- (unsigned int)m_uiMsgThumbHeight;
- (void)setM_uiMsgThumbHeight:(unsigned int)arg1;
- (unsigned int)m_uiMsgThumbSize;
- (void)setM_uiMsgThumbSize:(unsigned int)arg1;
- (unsigned int)m_uiMsgThumbWidth;
- (void)setM_uiMsgThumbWidth:(unsigned int)arg1;
- (id)m_nsAutoDownloadControl;
- (void)setM_nsAutoDownloadControl:(id)arg1;
- (unsigned int)m_uiCameraType;
- (void)setM_uiCameraType:(unsigned int)arg1;
- (unsigned int)m_uiUploadStatus;
- (void)setM_uiUploadStatus:(unsigned int)arg1;
- (unsigned int)m_uiVideoLen;
- (void)setM_uiVideoLen:(unsigned int)arg1;
- (unsigned int)m_uiVideoOffset;
- (void)setM_uiVideoOffset:(unsigned int)arg1;
- (unsigned int)m_uiVideoSource;
- (void)setM_uiVideoSource:(unsigned int)arg1;
- (unsigned int)m_uiVideoTime;
- (void)setM_uiVideoTime:(unsigned int)arg1;
- (id)m_nsMsgThumbAesKey;
- (void)setM_nsMsgThumbAesKey:(id)arg1;
- (id)m_nsMsgThumbUrl;
- (void)setM_nsMsgThumbUrl:(id)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (id)m_nsMsgDataUrl;
- (void)setM_nsMsgDataUrl:(id)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (id)m_nsFileParam;
- (void)setM_nsFileParam:(id)arg1;
- (id)m_nsStreamVideoUrl;
- (void)setM_nsStreamVideoUrl:(id)arg1;
- (unsigned int)m_uiStreamVideoTime;
- (void)setM_uiStreamVideoTime:(unsigned int)arg1;
- (id)m_nsStreamVideoTitle;
- (void)setM_nsStreamVideoTitle:(id)arg1;
- (id)m_nsStreamVideoWording;
- (void)setM_nsStreamVideoWording:(id)arg1;
- (id)m_nsStreamVideoWebUrl;
- (void)setM_nsStreamVideoWebUrl:(id)arg1;
- (id)m_nsStreamVideoThumbUrl;
- (void)setM_nsStreamVideoThumbUrl:(id)arg1;
- (id)m_nsStreamVideoPublishId;
- (void)setM_nsStreamVideoPublishId:(id)arg1;
- (id)m_nsStreamVideoAdUxInfo;
- (void)setM_nsStreamVideoAdUxInfo:(id)arg1;
- (id)m_nsStatExtStr;
- (void)setM_nsStatExtStr:(id)arg1;
- (id)m_nsMsgMd5;
- (void)setM_nsMsgMd5:(id)arg1;
- (id)m_nsNewMd5;
- (void)setM_nsNewMd5:(id)arg1;
- (int)m_nDownloadLimit;
- (void)setM_nDownloadLimit:(int)arg1;
- (id)m_oMsgExpItem;
- (void)setM_oMsgExpItem:(id)arg1;
- (id)m_nsAssetId;
- (void)setM_nsAssetId:(id)arg1;
- (unsigned int)m_uiVideoFormat;
- (void)setM_uiVideoFormat:(unsigned int)arg1;
- (unsigned int)m_uiPreDownloadPercent;
- (void)setM_uiPreDownloadPercent:(unsigned int)arg1;
- (unsigned int)m_uiPreDownloadNetType;
- (void)setM_uiPreDownloadNetType:(unsigned int)arg1;
- (id)m_nsNoPreDownloadRange;
- (void)setM_nsNoPreDownloadRange:(id)arg1;
- (void)setM_nsAttachFileKey:(id)arg1;
- (unsigned int)m_uiContinueUploadCount;
- (void)setM_uiContinueUploadCount:(unsigned int)arg1;
- (unsigned int)m_uiRawContinueUploadCount;
- (void)setM_uiRawContinueUploadCount:(unsigned int)arg1;
- (id)m_authkey;
- (void)setM_authkey:(id)arg1;
- (id)m_nsAppID;
- (void)setM_nsAppID:(id)arg1;
- (id)m_nsAppName;
- (void)setM_nsAppName:(id)arg1;
- (unsigned int)m_uiAppVersion;
- (void)setM_uiAppVersion:(unsigned int)arg1;
- (BOOL)m_bIsForceUpdate;
- (void)setM_bIsForceUpdate:(BOOL)arg1;
- (id)m_nsAppMediaTagName;
- (void)setM_nsAppMediaTagName:(id)arg1;
- (id)m_nsAppMessageExt;
- (void)setM_nsAppMessageExt:(id)arg1;
- (id)m_nsAppMessageAction;
- (void)setM_nsAppMessageAction:(id)arg1;
- (id)m_nsEncodeJson;
- (void)setM_nsEncodeJson:(id)arg1;
- (unsigned long long)m_uiRawFileLength;
- (void)setM_uiRawFileLength:(unsigned long long)arg1;
- (id)m_nsRawFileMd5;
- (void)setM_nsRawFileMd5:(id)arg1;
- (id)m_nsRawDataUrl;
- (void)setM_nsRawDataUrl:(id)arg1;
- (id)m_nsRawAeskey;
- (void)setM_nsRawAeskey:(id)arg1;
- (unsigned int)m_uiRawVideoFormat;
- (void)setM_uiRawVideoFormat:(unsigned int)arg1;
- (unsigned long long)m_uiRawVideoOffset;
- (void)setM_uiRawVideoOffset:(unsigned long long)arg1;
- (unsigned int)m_uOverWriteMsgSendTime;
- (void)setM_uOverWriteMsgSendTime:(unsigned int)arg1;
- (long long)m_n64OverWriteMsgSvrID;
- (void)setM_n64OverWriteMsgSvrID:(long long)arg1;
- (id)m_nsUploadToken;
- (void)setM_nsUploadToken:(id)arg1;
- (BOOL)m_bIsPlaceHolder;
- (void)setM_bIsPlaceHolder:(BOOL)arg1;
- (BOOL)m_bIsVideoMsgToOverWrite;
- (void)setM_bIsVideoMsgToOverWrite:(BOOL)arg1;
- (id)m_nsOriginSourceDataMd5;
- (void)setM_nsOriginSourceDataMd5:(id)arg1;
- (BOOL)m_isSpatial;
- (void)setM_isSpatial:(BOOL)arg1;
- (id)m_sourceWeappInfo;
- (void)setM_sourceWeappInfo:(id)arg1;
- (id)m_oVideoUploadStatInfo;
- (void)setM_oVideoUploadStatInfo:(id)arg1;
- (id)m_asset;
- (void)setM_asset:(id)arg1;
- (id)m_assetIdForForward;
- (void)setM_assetIdForForward:(id)arg1;
- (void).cxx_destruct;
@end

