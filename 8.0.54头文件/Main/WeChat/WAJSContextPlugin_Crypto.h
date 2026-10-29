@interface WAJSContextPlugin_Crypto : WAJSContextPluginBase
{
    NSMutableDictionary * _contexts; // +0x8
    NSMutableArray * _keyAliasList; // +0x10
}
+ (id)getTagInKeyChainWithInputAlias:(id)arg1 appId:(id)arg2;
+ (id)getKeyTagsWithAppId:(id)arg1;
- (id)init;
- (void)loadKeyAliasList;
- (void)saveKeyAliasList;
- (id)getKeys;
- (void)removeKeyAlias:(id)arg1;
- (void)generateKeyWithAlgorithm:(id)arg1 keySize:(unsigned int)arg2 keyAlias:(id)arg3 completion:(id /* block */)arg4;
- (void)exchangeKeyWithPublicKey:(id)arg1 privateKeyAlias:(id)arg2 completion:(id /* block */)arg3;
- (void)openWithId:(long long)arg1 type:(id)arg2 algorithm:(id)arg3 keyAlias:(id)arg4 publicKey:(id)arg5 signature:(id)arg6 errMsgPtr:(id *)arg7;
- (void)operateWithId:(long long)arg1 type:(id)arg2 data:(id)arg3 completion:(id /* block */)arg4;
- (void)computeWithId:(long long)arg1 completion:(id /* block */)arg2;
- (id)getKeyTypeWithKeyAlgorithm:(id)arg1 keySize:(unsigned int)arg2;
- (id)contexts;
- (void)setContexts:(id)arg1;
- (id)keyAliasList;
- (void)setKeyAliasList:(id)arg1;
- (void).cxx_destruct;
@end

