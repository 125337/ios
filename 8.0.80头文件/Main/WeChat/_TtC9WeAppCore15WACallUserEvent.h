@interface _TtC9WeAppCore15WACallUserEvent : NSObject
{
    unsigned long long eventType; // +0x8
    void * appId; // +0x10
    void * jsapiName; // +0x20
    void * jsapiHandler; // +0x30
    void * jsapiFailHandler; // +0x40
    void * jsapiReplyHandler; // +0x50
    void * jsapiParams; // +0x60
    void * svrSessionContext; // +0x68
    BOOL isTriggered; // +0x78
    void * voipSessionID; // +0x80
}
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id /* block */)jsapiHandler;
- (void)setJsapiHandler:(id /* block */)arg1;
- (id /* block */)jsapiFailHandler;
- (void)setJsapiFailHandler:(id /* block */)arg1;
- (id /* block */)jsapiReplyHandler;
- (void)setJsapiReplyHandler:(id /* block */)arg1;
- (id)jsapiParams;
- (void)setJsapiParams:(id)arg1;
- (id)svrSessionContext;
- (void)setSvrSessionContext:(id)arg1;
- (BOOL)isTriggered;
- (void)setIsTriggered:(BOOL)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
