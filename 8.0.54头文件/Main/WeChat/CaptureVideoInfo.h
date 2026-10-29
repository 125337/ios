@interface CaptureVideoInfo : NSObject
{
    NSString * thumb_path; // +0x8
    NSString * video_path; // +0x10
    unsigned int video_time; // +0x18
    unsigned int video_size; // +0x1c
    unsigned int thumb_size; // +0x20
    unsigned int m_uiVideoOffset; // +0x24
    BOOL front_camera; // +0x28
    unsigned int m_uiVideoSource; // +0x2c
    BOOL m_bForward; // +0x30
    NSString * m_nsMsgDataUrl; // +0x38
    NSString * m_nsAesKey; // +0x40
    unsigned int m_videoCreateTime; // +0x48
    NSString * m_nsStreamVideoUrl; // +0x50
    unsigned int m_uiStreamVideoTime; // +0x58
    NSString * m_nsStreamVideoTitle; // +0x60
    NSString * m_nsStreamVideoWording; // +0x68
    NSString * m_nsStreamVideoWebUrl; // +0x70
    NSString * m_nsStreamVideoThumbUrl; // +0x78
    NSString * m_nsStreamVideoPublishId; // +0x80
    NSString * m_nsStreamVideoAdUxInfo; // +0x88
    NSString * m_nsStatExtStr; // +0x90
    NSString * m_msgSource; // +0x98
    unsigned int thumb_width; // +0xa0
    unsigned int thumb_height; // +0xa4
    unsigned int video_width; // +0xa8
    unsigned int video_height; // +0xac
    BOOL bRawVideo; // +0xb0
    NSString * m_authkey; // +0xb8
    BOOL _isSpatial; // +0xc0
    BOOL _isEdited; // +0xc1
    unsigned int m_uiIsSenderStatus; // +0xc4
    unsigned int _overWriteMsgSendTime; // +0xc8
    unsigned int _m_forwardType; // +0xcc
    unsigned int _m_uiContinueUploadCount; // +0xd0
    unsigned int _m_uiPercent; // +0xd4
    unsigned int _m_referFromScene; // +0xd8
    NSString * m_nsSpecifiedChatName; // +0xe0
    MMAsset * _asset; // +0xe8
    NSString * _nsRawAesKey; // +0xf0
    NSString * _nsRawDataUrl; // +0xf8
    NSString * _nsRawFileMd5; // +0x100
    NSString * _nsUploadToken; // +0x108
    NSString * _nsRawVidePath; // +0x110
    NSString * _nsOriginSourceDataMd5; // +0x118
    unsigned long long _rawFileLength; // +0x120
    unsigned long long _overWriteMsgSvrID; // +0x128
    NSString * _video_assetId; // +0x130
    NSString * _m_assetIdForForward; // +0x138
    NSString * _m_md5; // +0x140
    NSString * _m_newMd5; // +0x148
    VideoUploadStatInfo * _m_statInfo; // +0x150
    EditVideoAttr * _editVideoAttr; // +0x158
    MMImageExifLogInfo * _exifLogInfo; // +0x160
    NSString * _m_nsAttachFileKey; // +0x168
    NSString * _m_nsAppId; // +0x170
    NSString * _m_nsMessageAction; // +0x178
    NSString * _m_nsMessageExt; // +0x180
    NSString * _m_nsMediaTagName; // +0x188
    WASourceWeappInfo * _m_sourceWeappInfo; // +0x190
    NSString * _m_weappSourceUsername; // +0x198
    NSString * _m_nsEncodeJson; // +0x1a0
    MPPageIdentityInfo * _m_mpPageIdentityInfo; // +0x1a8
}
+ (id)genVideoInfoWithVideoUrl:(id)arg1 thumb:(id)arg2;
+ (int)getVideoDurationForAsset:(id)arg1;
- (id)init;
- (id)thumb_path;
- (void)setThumb_path:(id)arg1;
- (id)video_path;
- (void)setVideo_path:(id)arg1;
- (unsigned int)video_time;
- (void)setVideo_time:(unsigned int)arg1;
- (unsigned int)video_size;
- (void)setVideo_size:(unsigned int)arg1;
- (unsigned int)thumb_size;
- (void)setThumb_size:(unsigned int)arg1;
- (unsigned int)m_uiVideoOffset;
- (void)setM_uiVideoOffset:(unsigned int)arg1;
- (BOOL)front_camera;
- (void)setFront_camera:(BOOL)arg1;
- (unsigned int)m_uiVideoSource;
- (void)setM_uiVideoSource:(unsigned int)arg1;
- (BOOL)m_bForward;
- (void)setM_bForward:(BOOL)arg1;
- (id)m_nsMsgDataUrl;
- (void)setM_nsMsgDataUrl:(id)arg1;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (id)m_msgSource;
- (void)setM_msgSource:(id)arg1;
- (unsigned int)thumb_width;
- (void)setThumb_width:(unsigned int)arg1;
- (unsigned int)thumb_height;
- (void)setThumb_height:(unsigned int)arg1;
- (unsigned int)video_width;
- (void)setVideo_width:(unsigned int)arg1;
- (unsigned int)video_height;
- (void)setVideo_height:(unsigned int)arg1;
- (unsigned int)m_videoCreateTime;
- (void)setM_videoCreateTime:(unsigned int)arg1;
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
- (id)m_authkey;
- (void)setM_authkey:(id)arg1;
- (id)m_nsSpecifiedChatName;
- (void)setM_nsSpecifiedChatName:(id)arg1;
- (unsigned int)m_uiIsSenderStatus;
- (void)setM_uiIsSenderStatus:(unsigned int)arg1;
- (BOOL)bRawVideo;
- (void)setBRawVideo:(BOOL)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)nsRawAesKey;
- (void)setNsRawAesKey:(id)arg1;
- (id)nsRawDataUrl;
- (void)setNsRawDataUrl:(id)arg1;
- (id)nsRawFileMd5;
- (void)setNsRawFileMd5:(id)arg1;
- (id)nsUploadToken;
- (void)setNsUploadToken:(id)arg1;
- (id)nsRawVidePath;
- (void)setNsRawVidePath:(id)arg1;
- (id)nsOriginSourceDataMd5;
- (void)setNsOriginSourceDataMd5:(id)arg1;
- (unsigned long long)rawFileLength;
- (void)setRawFileLength:(unsigned long long)arg1;
- (unsigned long long)overWriteMsgSvrID;
- (void)setOverWriteMsgSvrID:(unsigned long long)arg1;
- (unsigned int)overWriteMsgSendTime;
- (void)setOverWriteMsgSendTime:(unsigned int)arg1;
- (BOOL)isSpatial;
- (void)setIsSpatial:(BOOL)arg1;
- (id)video_assetId;
- (void)setVideo_assetId:(id)arg1;
- (id)m_assetIdForForward;
- (void)setM_assetIdForForward:(id)arg1;
- (unsigned int)m_forwardType;
- (void)setM_forwardType:(unsigned int)arg1;
- (id)m_md5;
- (void)setM_md5:(id)arg1;
- (id)m_newMd5;
- (void)setM_newMd5:(id)arg1;
- (id)m_statInfo;
- (void)setM_statInfo:(id)arg1;
- (BOOL)isEdited;
- (void)setIsEdited:(BOOL)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)exifLogInfo;
- (void)setExifLogInfo:(id)arg1;
- (id)m_nsAttachFileKey;
- (void)setM_nsAttachFileKey:(id)arg1;
- (unsigned int)m_uiContinueUploadCount;
- (void)setM_uiContinueUploadCount:(unsigned int)arg1;
- (unsigned int)m_uiPercent;
- (void)setM_uiPercent:(unsigned int)arg1;
- (id)m_nsAppId;
- (void)setM_nsAppId:(id)arg1;
- (id)m_nsMessageAction;
- (void)setM_nsMessageAction:(id)arg1;
- (id)m_nsMessageExt;
- (void)setM_nsMessageExt:(id)arg1;
- (id)m_nsMediaTagName;
- (void)setM_nsMediaTagName:(id)arg1;
- (id)m_sourceWeappInfo;
- (void)setM_sourceWeappInfo:(id)arg1;
- (id)m_weappSourceUsername;
- (void)setM_weappSourceUsername:(id)arg1;
- (id)m_nsEncodeJson;
- (void)setM_nsEncodeJson:(id)arg1;
- (id)m_mpPageIdentityInfo;
- (void)setM_mpPageIdentityInfo:(id)arg1;
- (unsigned int)m_referFromScene;
- (void)setM_referFromScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

