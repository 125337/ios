@interface EcsCoreEcsPrivacy_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsPrivacy_Ur>
+ (id)sharedInstance;
- (id)decryptArticle:(id)arg1;
- (id)decryptSentence:(id)arg1;
- (id)decryptWord:(id)arg1;
- (id)convertDecryptArticleReqFromJsonStringList:(id)arg1;
- (id)convertDecryptArticleReqFromBase64List:(id)arg1;
- (id)convertDecryptArticleRespToJsonString:(id)arg1;
- (void)decryptArticleAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)decryptSentenceAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)decryptWordAsync:(id)arg1 callback:(id /* block */)arg2;
- (id)encryptStr:(id)arg1;
- (id)decryptStr:(id)arg1;
@end
