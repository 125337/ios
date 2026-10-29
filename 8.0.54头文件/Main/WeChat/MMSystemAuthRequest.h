@interface MMSystemAuthRequest : NSObject
{
    BOOL _weChatAuthorized; // +0x8
    BOOL _weChatRejected; // +0x9
    BOOL _weChatIgnored; // +0xa
    unsigned int _capability; // +0xc
    unsigned int _authStatus; // +0x10
    unsigned long long _scene; // +0x18
    id /* block */ _handler; // +0x20
    MMSystemAuthCancellableToken * _cancellableToken; // +0x28
}
- (void)reportWithAction:(unsigned long long)arg1;
- (BOOL)shouldCacheRejectSelection;
- (id)init;
- (id)description;
- (id)identifierKey;
- (unsigned int)capability;
- (void)setCapability:(unsigned int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned int)authStatus;
- (void)setAuthStatus:(unsigned int)arg1;
- (BOOL)weChatAuthorized;
- (void)setWeChatAuthorized:(BOOL)arg1;
- (BOOL)weChatRejected;
- (void)setWeChatRejected:(BOOL)arg1;
- (BOOL)weChatIgnored;
- (void)setWeChatIgnored:(BOOL)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (id)cancellableToken;
- (void)setCancellableToken:(id)arg1;
- (void).cxx_destruct;
@end

