@interface WARichTextViewWeAppJumpWrap : NSObject
{
    BOOL _isForbidSSignal; // +0x8
    BOOL _isAgentTextStyle; // +0x9
    BOOL _isHalfScreen; // +0xa
    unsigned int _appState; // +0xc
    unsigned int _agentType; // +0x10
    NSString * _appid; // +0x18
    NSString * _pagePath; // +0x20
    NSString * _shareKey; // +0x28
    NSString * _chattoolUsername; // +0x30
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)appState;
- (void)setAppState:(unsigned int)arg1;
- (BOOL)isForbidSSignal;
- (void)setIsForbidSSignal:(BOOL)arg1;
- (id)shareKey;
- (void)setShareKey:(id)arg1;
- (id)chattoolUsername;
- (void)setChattoolUsername:(id)arg1;
- (BOOL)isAgentTextStyle;
- (void)setIsAgentTextStyle:(BOOL)arg1;
- (unsigned int)agentType;
- (void)setAgentType:(unsigned int)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
