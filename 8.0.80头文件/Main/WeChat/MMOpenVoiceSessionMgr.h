@interface MMOpenVoiceSessionMgr : NSObject <PBMessageObserverDelegate>
{
    NSMutableDictionary * _sessionKeyPool; // +0x8
    id /* block */ _currentCGIRequestCallback; // +0x10
    NSString * _currentRequestAppId; // +0x18
}
- (id)init;
- (void)get:(id)arg1 privateData:(id)arg2 callback:(id /* block */)arg3;
- (void)reset:(id)arg1;
- (id)add:(id)arg1 sessionKey:(id)arg2 lifeSpan:(unsigned int)arg3;
- (void)updateSessionKeyRemote:(id)arg1 privateData:(id)arg2 callback:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
