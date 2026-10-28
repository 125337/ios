@interface OpenInfo : NSObject <NSCoding>
{
    unsigned int m_uiLocalID; // +0x8
    NSString * m_nsUsrName; // +0x10
    unsigned int m_uiCreateTime; // +0x18
    unsigned int m_uiScene; // +0x1c
    CMessageWrap * m_wrapMsg; // +0x20
    unsigned int m_uiStartPos; // +0x28
    unsigned int m_uiAddQueueTime; // +0x2c
    BOOL m_bCheckMd5; // +0x30
    NSString * m_nsAttachId; // +0x38
    NSString * m_nsAttachFileExt; // +0x40
    unsigned int m_uiAttachDataSize; // +0x48
    unsigned long long m_ui64StartTime; // +0x50
    BOOL m_bUpload; // +0x58
    int m_nRetCode; // +0x5c
    BOOL _isRealtimeUpload; // +0x60
    BOOL _m_bFileExistInSvr; // +0x61
    BOOL _m_bSilent; // +0x62
    BOOL _m_isDeleted; // +0x63
    BOOL _isRevokingMsg; // +0x64
    BOOL _isSendingMsg; // +0x65
    BOOL _isSendingOverWriteMsg; // +0x66
    BOOL _isParallelUpload; // +0x67
    BOOL _disableHitCheck; // +0x68
    BOOL _autoDownload; // +0x69
    NSString * m_nsShareOriginUrl; // +0x70
    NSString * m_nsShareOpenUrl; // +0x78
    NSString * m_nsJsAppId; // +0x80
    NSMutableDictionary * m_dicStatParas; // +0x88
    NSString * _m_nsMsgMd5; // +0x90
    NSString * _bigFileSignature; // +0x98
    unsigned long long _emojiDataLength; // +0xa0
    long long _downloadBehavior; // +0xa8
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)GetMsg;
- (BOOL)IsCanUpload;
- (BOOL)IsCanDownload;
- (void)SetStatus;
- (void)SetStartTime;
- (id)GetStatInfo;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (unsigned int)m_uiStartPos;
- (void)setM_uiStartPos:(unsigned int)arg1;
- (unsigned int)m_uiAddQueueTime;
- (void)setM_uiAddQueueTime:(unsigned int)arg1;
- (BOOL)m_bCheckMd5;
- (void)setM_bCheckMd5:(BOOL)arg1;
- (id)m_nsAttachId;
- (void)setM_nsAttachId:(id)arg1;
- (id)m_nsAttachFileExt;
- (void)setM_nsAttachFileExt:(id)arg1;
- (unsigned int)m_uiAttachDataSize;
- (void)setM_uiAttachDataSize:(unsigned int)arg1;
- (BOOL)m_bUpload;
- (void)setM_bUpload:(BOOL)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (id)m_nsShareOriginUrl;
- (void)setM_nsShareOriginUrl:(id)arg1;
- (id)m_nsShareOpenUrl;
- (void)setM_nsShareOpenUrl:(id)arg1;
- (id)m_nsJsAppId;
- (void)setM_nsJsAppId:(id)arg1;
- (id)m_dicStatParas;
- (void)setM_dicStatParas:(id)arg1;
- (BOOL)isRealtimeUpload;
- (void)setIsRealtimeUpload:(BOOL)arg1;
- (BOOL)m_bFileExistInSvr;
- (void)setM_bFileExistInSvr:(BOOL)arg1;
- (id)m_nsMsgMd5;
- (void)setM_nsMsgMd5:(id)arg1;
- (BOOL)m_bSilent;
- (void)setM_bSilent:(BOOL)arg1;
- (BOOL)m_isDeleted;
- (void)setM_isDeleted:(BOOL)arg1;
- (BOOL)isRevokingMsg;
- (void)setIsRevokingMsg:(BOOL)arg1;
- (BOOL)isSendingMsg;
- (void)setIsSendingMsg:(BOOL)arg1;
- (BOOL)isSendingOverWriteMsg;
- (void)setIsSendingOverWriteMsg:(BOOL)arg1;
- (BOOL)isParallelUpload;
- (void)setIsParallelUpload:(BOOL)arg1;
- (id)bigFileSignature;
- (void)setBigFileSignature:(id)arg1;
- (unsigned long long)emojiDataLength;
- (void)setEmojiDataLength:(unsigned long long)arg1;
- (BOOL)disableHitCheck;
- (void)setDisableHitCheck:(BOOL)arg1;
- (BOOL)autoDownload;
- (void)setAutoDownload:(BOOL)arg1;
- (long long)downloadBehavior;
- (void)setDownloadBehavior:(long long)arg1;
- (void).cxx_destruct;
@end
