@interface WKXPCAttachment : NSObject
{
    int _flag; // +0x8
    unsigned int _feat; // +0xc
    int _count; // +0x10
    int _connCount; // +0x14
    NSHashTable * _dicts; // +0x18
    NSDictionary * _envs; // +0x20
    WKWebView * _webView; // +0x28
    NSHashTable * _connections; // +0x30
    NSObject<OS_xpc_object> * _bootstrap; // +0x38
}
- (id)init;
- (void)clear;
- (BOOL)isValid;
- (void)addObject:(id)arg1;
- (BOOL)hasQOS;
- (void)addConnection:(id)arg1;
- (BOOL)hasPID;
- (BOOL)isStarted;
- (BOOL)isEnded;
- (id)dicts;
- (void)setDicts:(id)arg1;
- (id)envs;
- (void)setEnvs:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (int)flag;
- (void)setFlag:(int)arg1;
- (unsigned int)feat;
- (void)setFeat:(unsigned int)arg1;
- (int)count;
- (void)setCount:(int)arg1;
- (int)connCount;
- (void)setConnCount:(int)arg1;
- (id)connections;
- (void)setConnections:(id)arg1;
- (id)bootstrap;
- (void)setBootstrap:(id)arg1;
- (void).cxx_destruct;
@end
