@interface ProtobufCGIWrap : NSObject
{
    WXPBGeneratedMessage * m_pbRequest; // +0x8
    Class m_pbRespClass; // +0x10
    WXPBGeneratedMessage * m_pbResponse; // +0x18
    unsigned int m_uiChannelType; // +0x20
    unsigned int m_uiCgi; // +0x24
    unsigned int m_uiScene; // +0x28
    NSString * m_nsCgiName; // +0x30
    NSString * m_nsUri; // +0x38
    NSData * m_dtResponseDecryptKey; // +0x40
    unsigned int m_uiMessage; // +0x48
    Class m_eventHandlerClass; // +0x50
    NSObject * m_oUserData; // +0x58
    UrlInfo * m_oUrlInfo; // +0x60
    BOOL m_bNotifyPartLen; // +0x68
    unsigned int m_uiRetryCount; // +0x6c
    double m_douTimeout; // +0x70
    double m_douReadTimeout; // +0x78
    int m_netwrokStrategy; // +0x80
    unsigned char m_routeInfo; // +0x84
    unsigned long long m_newdnsBusinessType; // +0x88
    BOOL _canRetry; // +0x90
    BOOL _m_longpolling; // +0x91
    BOOL _m_bindCellular; // +0x92
    BOOL _m_bIsKeepAlive; // +0x93
    BOOL _m_needCGIProfile; // +0x94
    BOOL _isDataReportMonitor; // +0x95
    short _encryptAlgo; // +0x96
    unsigned int _m_uiCandidateUin; // +0x98
    int _m_longPollingTimeout; // +0x9c
    int _stn_errType; // +0xa0
    int _stn_errCode; // +0xa4
    NSData * _requestData; // +0xa8
    NSData * _responseData; // +0xb0
    NSData * _m_retServerId; // +0xb8
    double _totalTimeOut; // +0xc0
    NSData * _m_pbResponseData; // +0xc8
    MMKCgi * _kindaCgi; // +0xd0
    MMKNetworkMockManager * _kindaMockManager; // +0xd8
    ProtobufCGIProfile * _cgiProfile; // +0xe0
    NSString * _reqHost; // +0xe8
}
- (BOOL)isRespSuccess;
- (id)init;
- (id)m_pbRequest;
- (void)setM_pbRequest:(id)arg1;
- (Class)m_pbRespClass;
- (void)setM_pbRespClass:(Class)arg1;
- (id)m_pbResponse;
- (void)setM_pbResponse:(id)arg1;
- (unsigned int)m_uiCgi;
- (void)setM_uiCgi:(unsigned int)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_nsCgiName;
- (void)setM_nsCgiName:(id)arg1;
- (id)m_nsUri;
- (void)setM_nsUri:(id)arg1;
- (unsigned int)m_uiChannelType;
- (void)setM_uiChannelType:(unsigned int)arg1;
- (id)m_dtResponseDecryptKey;
- (void)setM_dtResponseDecryptKey:(id)arg1;
- (unsigned int)m_uiMessage;
- (void)setM_uiMessage:(unsigned int)arg1;
- (Class)m_eventHandlerClass;
- (void)setM_eventHandlerClass:(Class)arg1;
- (id)m_oUserData;
- (void)setM_oUserData:(id)arg1;
- (id)m_oUrlInfo;
- (void)setM_oUrlInfo:(id)arg1;
- (BOOL)m_bNotifyPartLen;
- (void)setM_bNotifyPartLen:(BOOL)arg1;
- (unsigned int)m_uiRetryCount;
- (void)setM_uiRetryCount:(unsigned int)arg1;
- (double)m_douTimeout;
- (void)setM_douTimeout:(double)arg1;
- (double)m_douReadTimeout;
- (void)setM_douReadTimeout:(double)arg1;
- (int)m_netwrokStrategy;
- (void)setM_netwrokStrategy:(int)arg1;
- (unsigned char)m_routeInfo;
- (void)setM_routeInfo:(unsigned char)arg1;
- (unsigned long long)m_newdnsBusinessType;
- (void)setM_newdnsBusinessType:(unsigned long long)arg1;
- (id)requestData;
- (void)setRequestData:(id)arg1;
- (id)responseData;
- (void)setResponseData:(id)arg1;
- (id)m_retServerId;
- (void)setM_retServerId:(id)arg1;
- (unsigned int)m_uiCandidateUin;
- (void)setM_uiCandidateUin:(unsigned int)arg1;
- (BOOL)canRetry;
- (void)setCanRetry:(BOOL)arg1;
- (double)totalTimeOut;
- (void)setTotalTimeOut:(double)arg1;
- (BOOL)m_longpolling;
- (void)setM_longpolling:(BOOL)arg1;
- (int)m_longPollingTimeout;
- (void)setM_longPollingTimeout:(int)arg1;
- (BOOL)m_bindCellular;
- (void)setM_bindCellular:(BOOL)arg1;
- (id)m_pbResponseData;
- (void)setM_pbResponseData:(id)arg1;
- (BOOL)m_bIsKeepAlive;
- (void)setM_bIsKeepAlive:(BOOL)arg1;
- (BOOL)m_needCGIProfile;
- (void)setM_needCGIProfile:(BOOL)arg1;
- (BOOL)isDataReportMonitor;
- (void)setIsDataReportMonitor:(BOOL)arg1;
- (id)kindaCgi;
- (void)setKindaCgi:(id)arg1;
- (id)kindaMockManager;
- (void)setKindaMockManager:(id)arg1;
- (id)cgiProfile;
- (void)setCgiProfile:(id)arg1;
- (id)reqHost;
- (void)setReqHost:(id)arg1;
- (short)encryptAlgo;
- (void)setEncryptAlgo:(short)arg1;
- (int)stn_errType;
- (void)setStn_errType:(int)arg1;
- (int)stn_errCode;
- (void)setStn_errCode:(int)arg1;
- (void).cxx_destruct;
@end
