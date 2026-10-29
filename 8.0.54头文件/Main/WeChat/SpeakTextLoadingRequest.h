@interface SpeakTextLoadingRequest : NSObject
{
    unsigned int m_requestCount; // +0x8
    unsigned int m_requestInterval; // +0xc
    id <SpeakTextLoadingRequestDelegate> _delegate; // +0x10
    NSString * _requestText; // +0x18
    NSData * _contextBuff; // +0x20
    NSMutableArray * _extInfos; // +0x28
    unsigned long long _lastReceiveDataTime; // +0x30
}
- (id)initWithText:(id)arg1;
- (void)startRequest;
- (void)startQueryTTS;
- (void)delayStartQueryTTS;
- (void)handleRequestFail;
- (void)updateExtInfosFromResponse:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)requestText;
- (void)setRequestText:(id)arg1;
- (id)contextBuff;
- (void)setContextBuff:(id)arg1;
- (id)extInfos;
- (void)setExtInfos:(id)arg1;
- (unsigned long long)lastReceiveDataTime;
- (void)setLastReceiveDataTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

