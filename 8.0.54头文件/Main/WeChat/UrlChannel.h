@interface UrlChannel : NSObject
{
    unsigned int m_uiRetryCount; // +0x8
    unsigned int m_uiChannelStatus; // +0xc
    unsigned int m_uiRetStatusCode; // +0x10
    unsigned int m_uiRetContentLength; // +0x14
    unsigned long long m_ui64StartTime; // +0x18
    unsigned long long m_ui64ConnectStartTime; // +0x20
    unsigned long long m_ui64SendStartTime; // +0x28
    unsigned long long m_ui64ReceiveStartTime; // +0x30
    unsigned long long m_uiTimeOutInSec; // +0x38
    NSString * m_lastRequestIp; // +0x40
    BOOL m_bStopRetry; // +0x48
    BOOL m_bForceStopTimer; // +0x49
    unsigned int m_uiMaxRetryCount; // +0x4c
    ProtobufCGIWrap * m_wrapInfo; // +0x50
    id <NotifyFromPrtlDelegate> m_delNotifyFromPrtl; // +0x58
    NSURLConnection * m_ucChannel; // +0x60
    MMTimer * m_tmCheck; // +0x68
    NSDate * m_tLastRecvData; // +0x70
    NSMutableData * m_dtResponseData; // +0x78
    NSString * m_nsIP; // +0x80
}
- (id)init;
- (void)dealloc;
- (void)InitPrtl:(id)arg1;
- (BOOL)Start;
- (void)Stop;
- (void)setM_wrapInfo:(id)arg1;
- (void)TryReportFailIP;
- (void)ResetChannel;
- (void)Connect;
- (void)CheckTimeOut;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)onReceiveDataLength:(id)arg1;
- (id)m_wrapInfo;
- (id)m_delNotifyFromPrtl;
- (void)setM_delNotifyFromPrtl:(id)arg1;
- (id)m_ucChannel;
- (void)setM_ucChannel:(id)arg1;
- (id)m_tmCheck;
- (void)setM_tmCheck:(id)arg1;
- (id)m_tLastRecvData;
- (void)setM_tLastRecvData:(id)arg1;
- (unsigned int)m_uiMaxRetryCount;
- (void)setM_uiMaxRetryCount:(unsigned int)arg1;
- (id)m_dtResponseData;
- (void)setM_dtResponseData:(id)arg1;
- (id)m_nsIP;
- (void)setM_nsIP:(id)arg1;
- (void).cxx_destruct;
@end

