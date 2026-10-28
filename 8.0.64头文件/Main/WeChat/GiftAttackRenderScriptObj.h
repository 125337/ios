@interface GiftAttackRenderScriptObj : NSObject
{
    long long _scriptId; // +0x8
    NSString * _resourcePath; // +0x10
    long long _state; // +0x18
}
- (id)initWithScriptId:(long long)arg1 resPath:(id)arg2;
- (id)initWithEmptyScript;
- (BOOL)isValid;
- (long long)scriptId;
- (void)setScriptId:(long long)arg1;
- (id)resourcePath;
- (void)setResourcePath:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void).cxx_destruct;
@end
