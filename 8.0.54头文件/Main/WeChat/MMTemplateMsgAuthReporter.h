@interface MMTemplateMsgAuthReporter : MMObject
+ (void)reportScopeCacheModifyInSettingPage:(id)arg1;
+ (void)reportAlertViewInTemplateMsgBottom:(id)arg1 forUser:(id)arg2;
+ (unsigned int)getContactTypeForUserName:(id)arg1;
+ (id)genKVUidInBrandChatPage:(id)arg1;
+ (void)reportPopUpInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportAlertViewInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportToastInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportGoToSettingPageInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
@end

