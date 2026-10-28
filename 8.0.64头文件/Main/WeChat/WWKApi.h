@interface WWKApi : NSObject
+ (BOOL)registerApp:(id)arg1;
+ (BOOL)registerApp:(id)arg1 corpId:(id)arg2 agentId:(id)arg3;
+ (BOOL)handleOpenUrlString:(id)arg1;
+ (BOOL)isAppInstalled;
+ (BOOL)isAppSupportSendSeparateMessages;
+ (BOOL)isAppSupportSendBuffer;
+ (BOOL)isAppSupportUrlDataIsGov:(BOOL)arg1;
+ (id)getAppInstallUrl;
+ (id)getApiVersion;
+ (id)getProtocolVersion;
+ (BOOL)openCreateChat;
+ (BOOL)openChatList;
+ (BOOL)sendReq:(id)arg1;
+ (BOOL)sendObj:(id)arg1;
+ (BOOL)sendObj:(id)arg1 scheme:(id)arg2;
+ (BOOL)openURL:(id)arg1;
+ (BOOL)canOpenURL:(id)arg1;
+ (BOOL)p_isAppInstalledWithScheme:(id)arg1;
+ (BOOL)isAppInstalled:(long long)arg1;
+ (BOOL)sendReq:(id)arg1 appType:(long long)arg2;
- (BOOL)openURL:(id)arg1;
- (BOOL)canOpenURL:(id)arg1;
@end
