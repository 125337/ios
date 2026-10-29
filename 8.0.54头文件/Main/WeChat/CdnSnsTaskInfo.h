@interface CdnSnsTaskInfo : NSObject
{
    int m_nRetCode; // +0x8
    unsigned long long m_ui64StartTime; // +0x10
    unsigned int m_uiFileType; // +0x18
    unsigned long long m_uiFileSize; // +0x20
    NSString * m_nsCdnStatInfo; // +0x28
    WCMediaItem * m_oWCMediaItem; // +0x30
    long long downloadType; // +0x38
    NSString * m_nsClientID; // +0x40
    NSString * m_nsSavePath; // +0x48
    UrlInfo * m_urlInfo; // +0x50
    unsigned int m_uiIPDnsType; // +0x58
    unsigned int m_uiConcurrentCount; // +0x5c
    unsigned int m_eImgRequestType; // +0x60
    unsigned int m_eImgResponseType; // +0x64
    BOOL m_bNeedNotify; // +0x68
    BOOL m_isDCIP; // +0x69
    unsigned int m_dcIpDnsType; // +0x6c
    unsigned int m_ocIpDnsType; // +0x70
    NSArray * m_dcIplist; // +0x78
    NSArray * m_ocIplist; // +0x80
    unsigned int m_uiDnsCostTime; // +0x88
    int m_cdnMediaType; // +0x8c
    BOOL _isBatchDownloadThumb; // +0x90
    BOOL _finishBatchTask; // +0x91
    BOOL _isCoverTask; // +0x92
    BOOL _wasSuspended; // +0x93
    BOOL _sufferedFromBadNetwork; // +0x94
    unsigned int _feedMediaAllCount; // +0x98
    long long m_maxRetryCount; // +0xa0
    WCStoryMediaItem * _m_oStoryMediaItem; // +0xa8
    WCFinderFeedMediaWrap * _m_oFinderMediaItem; // +0xb0
    MMTextStateMediaItem * _m_oTextStateMediaMediaItem; // +0xb8
    NSString * _tid; // +0xc0
    NSArray * _batchMediaInfo; // +0xc8
    long long _finderDownloadImageType; // +0xd0
}
- (id)init;
- (id)GetStatInfo;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (unsigned long long)m_ui64StartTime;
- (void)setM_ui64StartTime:(unsigned long long)arg1;
- (unsigned int)m_uiFileType;
- (void)setM_uiFileType:(unsigned int)arg1;
- (unsigned long long)m_uiFileSize;
- (void)setM_uiFileSize:(unsigned long long)arg1;
- (id)m_nsCdnStatInfo;
- (void)setM_nsCdnStatInfo:(id)arg1;
- (id)m_oWCMediaItem;
- (void)setM_oWCMediaItem:(id)arg1;
- (long long)downloadType;
- (void)setDownloadType:(long long)arg1;
- (id)m_nsClientID;
- (void)setM_nsClientID:(id)arg1;
- (id)m_nsSavePath;
- (void)setM_nsSavePath:(id)arg1;
- (id)m_urlInfo;
- (void)setM_urlInfo:(id)arg1;
- (long long)m_maxRetryCount;
- (void)setM_maxRetryCount:(long long)arg1;
- (unsigned int)m_uiConcurrentCount;
- (void)setM_uiConcurrentCount:(unsigned int)arg1;
- (unsigned int)m_eImgRequestType;
- (void)setM_eImgRequestType:(unsigned int)arg1;
- (unsigned int)m_eImgResponseType;
- (void)setM_eImgResponseType:(unsigned int)arg1;
- (BOOL)m_bNeedNotify;
- (void)setM_bNeedNotify:(BOOL)arg1;
- (BOOL)m_isDCIP;
- (void)setM_isDCIP:(BOOL)arg1;
- (unsigned int)m_dcIpDnsType;
- (void)setM_dcIpDnsType:(unsigned int)arg1;
- (unsigned int)m_ocIpDnsType;
- (void)setM_ocIpDnsType:(unsigned int)arg1;
- (id)m_dcIplist;
- (void)setM_dcIplist:(id)arg1;
- (id)m_ocIplist;
- (void)setM_ocIplist:(id)arg1;
- (int)m_cdnMediaType;
- (void)setM_cdnMediaType:(int)arg1;
- (unsigned int)m_uiDnsCostTime;
- (void)setM_uiDnsCostTime:(unsigned int)arg1;
- (id)m_oStoryMediaItem;
- (void)setM_oStoryMediaItem:(id)arg1;
- (id)m_oFinderMediaItem;
- (void)setM_oFinderMediaItem:(id)arg1;
- (id)m_oTextStateMediaMediaItem;
- (void)setM_oTextStateMediaMediaItem:(id)arg1;
- (BOOL)isBatchDownloadThumb;
- (void)setIsBatchDownloadThumb:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned int)feedMediaAllCount;
- (void)setFeedMediaAllCount:(unsigned int)arg1;
- (id)batchMediaInfo;
- (void)setBatchMediaInfo:(id)arg1;
- (BOOL)finishBatchTask;
- (void)setFinishBatchTask:(BOOL)arg1;
- (BOOL)isCoverTask;
- (void)setIsCoverTask:(BOOL)arg1;
- (long long)finderDownloadImageType;
- (void)setFinderDownloadImageType:(long long)arg1;
- (BOOL)wasSuspended;
- (void)setWasSuspended:(BOOL)arg1;
- (BOOL)sufferedFromBadNetwork;
- (void)setSufferedFromBadNetwork:(BOOL)arg1;
- (void).cxx_destruct;
@end

