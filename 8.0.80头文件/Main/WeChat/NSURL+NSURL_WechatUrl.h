@interface NSURL (NSURL_WechatUrl) <IJSC2CodeCacheSource>
+ (id)safeUrlWithString:(id)arg1;
+ (id)jit_safeUrlWithString:(id)arg1;
+ (id)wwkapi_nilobj;
+ (id)queryDictionaryFromUrl:(id)arg1;
- (void)setByteCodeSwitchType:(unsigned long long)arg1;
- (unsigned long long)byteCodeSwitchType;
- (id)byteCodeDirPath;
- (void)setByteCodeDirPath:(id)arg1;
- (id)byteCodeIdentifier;
- (void)setByteCodeIdentifier:(id)arg1;
- (id)codeCacheDetail;
- (void)setCodeCacheDetail:(id)arg1;
- (id)SC_URLWithQueries:(id)arg1;
- (id)getUrlPartAfterSharp;
- (BOOL)isWechatRedirect;
- (BOOL)isNeedForceSyncA8Key;
- (BOOL)isOAuthUrl;
- (BOOL)isHostPathHasPrefixWithConfigKey:(id)arg1 defaultValue:(id)arg2;
- (id)hostPort;
- (BOOL)isInDmoain:(id)arg1;
@end
