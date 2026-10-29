@interface MMDictationNetAgentCgi : NSObject <PBMessageObserverDelegate, IMMDictationNetAgent>
{
    unsigned int _cgiTotalTimeOut; // +0x8
    unsigned int _cgiRetryCount; // +0xc
    id <MMDictationNetAgentDelegate> delegate; // +0x10
    long long _lastResultSeq; // +0x18
    NSDate * _currentStartTime; // +0x20
}
- (id)init;
- (unsigned int)sendRequest:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)checkNetErr:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)cgiTotalTimeOut;
- (void)setCgiTotalTimeOut:(unsigned int)arg1;
- (unsigned int)cgiRetryCount;
- (void)setCgiRetryCount:(unsigned int)arg1;
- (long long)lastResultSeq;
- (void)setLastResultSeq:(long long)arg1;
- (id)currentStartTime;
- (void)setCurrentStartTime:(id)arg1;
- (void).cxx_destruct;
@end
