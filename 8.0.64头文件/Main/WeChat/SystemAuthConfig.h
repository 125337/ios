@interface SystemAuthConfig : NSObject
{
    NSDictionary * _webSceneMap; // +0x8
    unsigned long long _version; // +0x10
}
- (id)initWithFile:(id)arg1;
- (id)webSceneMap;
- (void)setWebSceneMap:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
