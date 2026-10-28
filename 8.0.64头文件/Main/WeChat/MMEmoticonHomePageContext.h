@interface MMEmoticonHomePageContext : MMEmoticonLiteAppPageContextBase
{
    BOOL _cannotOpenInLimitedMode; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _defaultTag; // +0x10
    id /* block */ _closedCallback; // +0x18
    unsigned long long _searchScene; // +0x20
    NSString * _sessionId; // +0x28
}
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)defaultTag;
- (void)setDefaultTag:(unsigned int)arg1;
- (id /* block */)closedCallback;
- (void)setClosedCallback:(id /* block */)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (BOOL)cannotOpenInLimitedMode;
- (void)setCannotOpenInLimitedMode:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
