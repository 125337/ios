@interface FavClickStreamData : NSObject
{
    BOOL _bResume; // +0x8
    unsigned int _enterPageTimeInS; // +0xc
    unsigned int _enterPageTime; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _className; // +0x20
    long long _stayTime; // +0x28
    long long _enterPageTimeInMs; // +0x30
}
- (id)init;
- (void)onViewControllerDidAppear:(id)arg1;
- (void)onViewControllerDidDisappear;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)dealloc;
- (id)jsonString;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)enterPageTimeInS;
- (void)setEnterPageTimeInS:(unsigned int)arg1;
- (BOOL)bResume;
- (void)setBResume:(BOOL)arg1;
- (id)className;
- (void)setClassName:(id)arg1;
- (unsigned int)enterPageTime;
- (void)setEnterPageTime:(unsigned int)arg1;
- (long long)stayTime;
- (void)setStayTime:(long long)arg1;
- (long long)enterPageTimeInMs;
- (void)setEnterPageTimeInMs:(long long)arg1;
- (void).cxx_destruct;
@end
