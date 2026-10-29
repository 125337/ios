@interface UrlInfo : NSObject <NSCopying>
{
    NSString * m_nsRequestUrl; // +0x8
    NSData * m_dtResponseData; // +0x10
    NSString * m_nsRefer; // +0x18
    BOOL m_bGetMethod; // +0x20
    NSData * m_dtBodyData; // +0x28
    NSDictionary * m_dicReq; // +0x30
    NSDictionary * m_dicResp; // +0x38
    BOOL m_bCdn; // +0x40
    NSString * m_nsRequestUrlSuffix; // +0x48
    unsigned int m_uiRecvTime; // +0x50
    unsigned int m_uiRetCode; // +0x54
    unsigned int m_uiDataSize; // +0x58
    unsigned int m_uiDnsCostTime; // +0x5c
    unsigned int m_uiConnectCostTime; // +0x60
    unsigned int m_uiSendCostTime; // +0x64
    unsigned int m_uiWaitResponseCostTime; // +0x68
    unsigned int m_uiReceiveCostTime; // +0x6c
    NSString * m_nsClientIP; // +0x70
    NSString * m_nsServerIP; // +0x78
    unsigned int m_uiDnsType; // +0x80
    NSString * m_host; // +0x88
    NSString * m_nsXErrno; // +0x90
    NSMutableArray * m_aryReceiveData; // +0x98
    NSString * m_fileMd5; // +0xa0
    BOOL m_bSupportValidateMd5; // +0xa8
    BOOL m_bContinueReceive; // +0xa9
    NSString * m_filePath; // +0xb0
    BOOL m_useDCIP; // +0xb8
    BOOL m_fromSns; // +0xb9
    BOOL m_useXorEncrypt; // +0xba
    unsigned long long m_xorEncryKey; // +0xc0
    unsigned int m_uiXEncIdx; // +0xc8
    NSString * m_nsXEnc; // +0xd0
    NSString * m_nsXEncToken; // +0xd8
    unsigned int m_uiReqestCSeq; // +0xe0
    unsigned int m_uiResponseCSeq; // +0xe4
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)GenStatString;
- (id)GenStatStringWithDataType:(unsigned long long)arg1;
- (id)m_nsRequestUrl;
- (void)setM_nsRequestUrl:(id)arg1;
- (id)m_dtResponseData;
- (void)setM_dtResponseData:(id)arg1;
- (id)m_nsRefer;
- (void)setM_nsRefer:(id)arg1;
- (BOOL)m_bGetMethod;
- (void)setM_bGetMethod:(BOOL)arg1;
- (id)m_dtBodyData;
- (void)setM_dtBodyData:(id)arg1;
- (id)m_dicReq;
- (void)setM_dicReq:(id)arg1;
- (id)m_dicResp;
- (void)setM_dicResp:(id)arg1;
- (BOOL)m_bCdn;
- (void)setM_bCdn:(BOOL)arg1;
- (unsigned int)m_uiRecvTime;
- (void)setM_uiRecvTime:(unsigned int)arg1;
- (unsigned int)m_uiRetCode;
- (void)setM_uiRetCode:(unsigned int)arg1;
- (unsigned int)m_uiDataSize;
- (void)setM_uiDataSize:(unsigned int)arg1;
- (unsigned int)m_uiDnsCostTime;
- (void)setM_uiDnsCostTime:(unsigned int)arg1;
- (unsigned int)m_uiConnectCostTime;
- (void)setM_uiConnectCostTime:(unsigned int)arg1;
- (unsigned int)m_uiSendCostTime;
- (void)setM_uiSendCostTime:(unsigned int)arg1;
- (unsigned int)m_uiWaitResponseCostTime;
- (void)setM_uiWaitResponseCostTime:(unsigned int)arg1;
- (unsigned int)m_uiReceiveCostTime;
- (void)setM_uiReceiveCostTime:(unsigned int)arg1;
- (id)m_nsClientIP;
- (void)setM_nsClientIP:(id)arg1;
- (id)m_nsServerIP;
- (void)setM_nsServerIP:(id)arg1;
- (unsigned int)m_uiDnsType;
- (void)setM_uiDnsType:(unsigned int)arg1;
- (id)m_host;
- (void)setM_host:(id)arg1;
- (id)m_nsRequestUrlSuffix;
- (void)setM_nsRequestUrlSuffix:(id)arg1;
- (id)m_nsXErrno;
- (void)setM_nsXErrno:(id)arg1;
- (BOOL)m_bContinueReceive;
- (void)setM_bContinueReceive:(BOOL)arg1;
- (id)m_filePath;
- (void)setM_filePath:(id)arg1;
- (id)m_fileMd5;
- (void)setM_fileMd5:(id)arg1;
- (BOOL)m_bSupportValidateMd5;
- (void)setM_bSupportValidateMd5:(BOOL)arg1;
- (BOOL)m_useDCIP;
- (void)setM_useDCIP:(BOOL)arg1;
- (BOOL)m_fromSns;
- (void)setM_fromSns:(BOOL)arg1;
- (BOOL)m_useXorEncrypt;
- (void)setM_useXorEncrypt:(BOOL)arg1;
- (id)m_aryReceiveData;
- (void)setM_aryReceiveData:(id)arg1;
- (unsigned long long)m_xorEncryKey;
- (void)setM_xorEncryKey:(unsigned long long)arg1;
- (id)m_nsXEnc;
- (void)setM_nsXEnc:(id)arg1;
- (id)m_nsXEncToken;
- (void)setM_nsXEncToken:(id)arg1;
- (unsigned int)m_uiXEncIdx;
- (void)setM_uiXEncIdx:(unsigned int)arg1;
- (unsigned int)m_uiReqestCSeq;
- (void)setM_uiReqestCSeq:(unsigned int)arg1;
- (unsigned int)m_uiResponseCSeq;
- (void)setM_uiResponseCSeq:(unsigned int)arg1;
- (void).cxx_destruct;
@end

