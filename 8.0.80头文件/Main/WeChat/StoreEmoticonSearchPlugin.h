@interface StoreEmoticonSearchPlugin : WSWebViewPluginBase
{
    unsigned long long _scene; // +0x8
}
- (id)initWithScene:(unsigned long long)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)parserCommand:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
@end
