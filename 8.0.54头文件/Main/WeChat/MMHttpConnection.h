@interface MMHttpConnection : MMObject
{
    unsigned int mStatusCode; // +0x8
    NSString * m_nsFileName; // +0x10
    MMTimer * m_tmCheckTimeOut; // +0x18
    unsigned int m_uiHttpType; // +0x20
    NSString * m_nsNotifyKey; // +0x28
    unsigned int m_uiContentLen; // +0x30
    id <MMHttpConnectionDelegate><NSObject> mDelegate; // +0x38
    BOOL m_bGZip; // +0x40
    BOOL isWebp; // +0x41
    unsigned int mConnProto; // +0x44
    NSURLConnection * mUrlConn; // +0x48
    NSMutableData * mRecvData; // +0x50
    NSString * mCacheKey; // +0x58
    double timeInterval; // +0x60
}
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)handleMd5WithRaw:(id)arg1 urlStr:(id)arg2;
- (void)saveRawDataIfNeeded:(id)arg1 fileName:(id)arg2;
- (BOOL)setNormalRequestHeader:(id)arg1;
- (BOOL)setPostRequestHeader:(id)arg1 boundary:(id)arg2;
- (BOOL)connectWithRequest:(id)arg1;
- (id)initWithProtocol:(unsigned int)arg1 andDelegate:(id)arg2;
- (void)CancelTimer;
- (void)dealloc;
- (BOOL)getWithURL:(id)arg1;
- (BOOL)getWithURL:(id)arg1 andRefererHeader:(id)arg2;
- (BOOL)sgetWithURL:(id)arg1;
- (BOOL)spostWithURL:(id)arg1 body:(id)arg2 boundary:(id)arg3;
- (void)cancelRequest;
- (void)TimeOut;
- (id)mUrlConn;
- (void)setMUrlConn:(id)arg1;
- (id)mRecvData;
- (void)setMRecvData:(id)arg1;
- (id)mCacheKey;
- (void)setMCacheKey:(id)arg1;
- (unsigned int)mConnProto;
- (void)setMConnProto:(unsigned int)arg1;
- (id)m_nsFileName;
- (void)setM_nsFileName:(id)arg1;
- (id)m_tmCheckTimeOut;
- (void)setM_tmCheckTimeOut:(id)arg1;
- (unsigned int)m_uiHttpType;
- (void)setM_uiHttpType:(unsigned int)arg1;
- (id)m_nsNotifyKey;
- (void)setM_nsNotifyKey:(id)arg1;
- (BOOL)isWebp;
- (void)setIsWebp:(BOOL)arg1;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (void).cxx_destruct;
@end

