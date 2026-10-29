@interface CdnTaskInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    CMessageWrap * m_wrapMsg; // +0x10
    MassSendWrap * m_massWrapMsg; // +0x18
    NSString * m_nsChatName; // +0x20
    unsigned int m_uiThumbSize; // +0x28
    BOOL m_bHD; // +0x2c
    unsigned long long m_uiFinishedLen; // +0x30
    unsigned long long m_uiTotalLen; // +0x38
    unsigned long long m_ui64StartTime; // +0x40
    unsigned long long m_ui64EndTime; // +0x48
    int m_nRetCode; // +0x50
    BOOL m_bUpload; // +0x54
    BOOL m_bThumb; // +0x55
    NSString * m_nsCdnStatInfo; // +0x58
    unsigned int m_uiOpType; // +0x60
    NSString * m_nsMd5; // +0x68
    BOOL m_bAutoDownload; // +0x70
    double m_tGetMoovTime; // +0x78
    unsigned long long m_emDownloadMode; // +0x80
    WCMediaItem * m_oWCMediaItem; // +0x88
    unsigned long long m_saveAlbumMode; // +0x90
    BOOL m_bPreloadTask; // +0x98
    unsigned int m_uiHasPreloadSize; // +0x9c
    unsigned int m_uiConfigPreloadPercent; // +0xa0
    BOOL m_bSourceChanged; // +0xa4
    int retryCount; // +0xa8
    BOOL _m_bDisableHitCheck; // +0xac
    BOOL _m_bCheckExistOnly; // +0xad
    BOOL _m_bSilent; // +0xae
    BOOL _isSendingMsg; // +0xaf
    BOOL _isRealtimeUploadSentAppmsg; // +0xb0
    BOOL _isRealtimeUpload; // +0xb1
    BOOL _isDataUploaded; // +0xb2
    BOOL _isSendImgWithCdn; // +0xb3
    BOOL _customizedVideoFlagsEnabled; // +0xb4
    BOOL _isSkipTransH264; // +0xb5
    BOOL _hasTryWxamConvert; // +0xb6
    BOOL _wxamIllegal; // +0xb7
    BOOL _wxamDisabled; // +0xb8
    BOOL _heicIllegal; // +0xb9
    BOOL _hadTryCaculateOriginSourceMD5; // +0xba
    BOOL _hadTryCalcPHash; // +0xbb
    unsigned int m_uiMoovPos; // +0xbc
    int _videoFlagPolicy; // +0xc0
    NSString * m_nsShareOriginUrl; // +0xc8
    NSString * m_nsShareOpenUrl; // +0xd0
    NSString * m_nsJsAppId; // +0xd8
    NSMutableDictionary * m_dicStatParas; // +0xe0
    NSString * m_nsSnsPostUser; // +0xe8
    NSString * _m_uiThumbUrl; // +0xf0
    NSString * _m_uiThumbAesKey; // +0xf8
    NSString * _m_uiAuthKey; // +0x100
    NSMutableDictionary * _m_userInfo; // +0x108
    unsigned long long _m_ui64TaskCreateTime; // +0x110
    NSString * _tempPath; // +0x118
    NSString * _cachePath; // +0x120
    NSString * _requestVideoFlag; // +0x128
    NSString * _responseVideoFlag; // +0x130
    long long _downloadBehavior; // +0x138
}
+ (unsigned int)GetStatNetworkType;
+ (BOOL)isServerBehavior:(long long)arg1;
- (id)init;
- (id)GetStatInfo;
- (BOOL)isMsgFromChatroom;
- (unsigned int)getVideoPreloadStatus;
- (id)description;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (id)m_massWrapMsg;
- (void)setM_massWrapMsg:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (unsigned int)m_uiThumbSize;
- (void)setM_uiThumbSize:(unsigned int)arg1;
- (BOOL)m_bHD;
- (void)setM_bHD:(BOOL)arg1;
- (unsigned long long)m_uiFinishedLen;
- (void)setM_uiFinishedLen:(unsigned long long)arg1;
- (unsigned long long)m_uiTotalLen;
- (void)setM_uiTotalLen:(unsigned long long)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (unsigned long long)m_ui64EndTime;
- (void)setM_ui64EndTime:(unsigned long long)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (BOOL)m_bUpload;
- (void)setM_bUpload:(BOOL)arg1;
- (BOOL)m_bThumb;
- (void)setM_bThumb:(BOOL)arg1;
- (id)m_nsCdnStatInfo;
- (void)setM_nsCdnStatInfo:(id)arg1;
- (unsigned int)m_uiOpType;
- (void)setM_uiOpType:(unsigned int)arg1;
- (id)m_nsMd5;
- (void)setM_nsMd5:(id)arg1;
- (id)m_nsShareOriginUrl;
- (void)setM_nsShareOriginUrl:(id)arg1;
- (id)m_nsShareOpenUrl;
- (void)setM_nsShareOpenUrl:(id)arg1;
- (id)m_nsJsAppId;
- (void)setM_nsJsAppId:(id)arg1;
- (id)m_dicStatParas;
- (void)setM_dicStatParas:(id)arg1;
- (BOOL)m_bAutoDownload;
- (void)setM_bAutoDownload:(BOOL)arg1;
- (double)m_tGetMoovTime;
- (void)setM_tGetMoovTime:(double)arg1;
- (id)m_oWCMediaItem;
- (void)setM_oWCMediaItem:(id)arg1;
- (unsigned long long)m_emDownloadMode;
- (void)setM_emDownloadMode:(unsigned long long)arg1;
- (unsigned long long)m_saveAlbumMode;
- (void)setM_saveAlbumMode:(unsigned long long)arg1;
- (BOOL)m_bPreloadTask;
- (void)setM_bPreloadTask:(BOOL)arg1;
- (unsigned int)m_uiHasPreloadSize;
- (void)setM_uiHasPreloadSize:(unsigned int)arg1;
- (unsigned int)m_uiConfigPreloadPercent;
- (void)setM_uiConfigPreloadPercent:(unsigned int)arg1;
- (BOOL)m_bSourceChanged;
- (void)setM_bSourceChanged:(BOOL)arg1;
- (unsigned int)m_uiMoovPos;
- (void)setM_uiMoovPos:(unsigned int)arg1;
- (id)m_nsSnsPostUser;
- (void)setM_nsSnsPostUser:(id)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (id)m_uiThumbUrl;
- (void)setM_uiThumbUrl:(id)arg1;
- (id)m_uiThumbAesKey;
- (void)setM_uiThumbAesKey:(id)arg1;
- (id)m_uiAuthKey;
- (void)setM_uiAuthKey:(id)arg1;
- (BOOL)m_bDisableHitCheck;
- (void)setM_bDisableHitCheck:(BOOL)arg1;
- (BOOL)m_bCheckExistOnly;
- (void)setM_bCheckExistOnly:(BOOL)arg1;
- (BOOL)m_bSilent;
- (void)setM_bSilent:(BOOL)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (unsigned long long)m_ui64TaskCreateTime;
- (void)setM_ui64TaskCreateTime:(unsigned long long)arg1;
- (BOOL)isSendingMsg;
- (void)setIsSendingMsg:(BOOL)arg1;
- (BOOL)isRealtimeUploadSentAppmsg;
- (void)setIsRealtimeUploadSentAppmsg:(BOOL)arg1;
- (BOOL)isRealtimeUpload;
- (void)setIsRealtimeUpload:(BOOL)arg1;
- (BOOL)isDataUploaded;
- (void)setIsDataUploaded:(BOOL)arg1;
- (BOOL)isSendImgWithCdn;
- (void)setIsSendImgWithCdn:(BOOL)arg1;
- (id)tempPath;
- (void)setTempPath:(id)arg1;
- (id)cachePath;
- (void)setCachePath:(id)arg1;
- (BOOL)customizedVideoFlagsEnabled;
- (void)setCustomizedVideoFlagsEnabled:(BOOL)arg1;
- (int)videoFlagPolicy;
- (void)setVideoFlagPolicy:(int)arg1;
- (id)requestVideoFlag;
- (void)setRequestVideoFlag:(id)arg1;
- (id)responseVideoFlag;
- (void)setResponseVideoFlag:(id)arg1;
- (BOOL)isSkipTransH264;
- (void)setIsSkipTransH264:(BOOL)arg1;
- (BOOL)hasTryWxamConvert;
- (void)setHasTryWxamConvert:(BOOL)arg1;
- (BOOL)wxamIllegal;
- (void)setWxamIllegal:(BOOL)arg1;
- (BOOL)wxamDisabled;
- (void)setWxamDisabled:(BOOL)arg1;
- (BOOL)heicIllegal;
- (void)setHeicIllegal:(BOOL)arg1;
- (BOOL)hadTryCaculateOriginSourceMD5;
- (void)setHadTryCaculateOriginSourceMD5:(BOOL)arg1;
- (BOOL)hadTryCalcPHash;
- (void)setHadTryCalcPHash:(BOOL)arg1;
- (long long)downloadBehavior;
- (void)setDownloadBehavior:(long long)arg1;
- (void).cxx_destruct;
@end

