@interface SpeakTextLoadingRequest : NSObject
{
    unsigned int m_requestCount; // +0x8
    unsigned int m_requestInterval; // +0xc
    BOOL _useNewTTS; // +0x10
    int _scene; // +0x14
    id <SpeakTextLoadingRequestDelegate> _delegate; // +0x18
    NSString * _language; // +0x20
    NSString * _requestText; // +0x28
    NSData * _contextBuff; // +0x30
    NSMutableArray * _extInfos; // +0x38
    unsigned long long _lastReceiveDataTime; // +0x40
}
- (id)initWithText:(id)arg1;
- (void)startRequest;
- (void)startQueryTTS;
- (void)delayStartQueryTTS;
- (void)handleRequestFail;
- (void)updateExtInfosFromResponse:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useNewTTS;
- (void)setUseNewTTS:(BOOL)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
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
