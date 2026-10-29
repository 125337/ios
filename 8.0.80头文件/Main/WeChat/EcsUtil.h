@interface EcsUtil : NSObject
+ (BOOL)shouldCheckFeatureListBeforeLaunchWeApp;
+ (BOOL)enableSignBulkBuyAppMsg;
+ (BOOL)enableGiftMessageQuote;
+ (BOOL)enableEcsOpenApiAsync;
+ (BOOL)hasSupportFeatureWithFeatureList:(id)arg1 configFeatureList:(id)arg2;
+ (BOOL)isFeatureChcekOkWithFeatureId:(long long)arg1 miniFeatureVersion:(long long)arg2 configFeatureList:(id)arg3;
+ (id)getEcsGiftMsgDatabasePath;
+ (id)convertMsgJumpInfo:(id)arg1;
+ (BOOL)shouldShowSendGiftEntranceInChatToolView:(id)arg1;
+ (id)getJumpInfoWithNativeRouterRequestType:(unsigned long long)arg1 recipientType:(int)arg2;
+ (BOOL)isEcsGiftAppMsg:(unsigned int)arg1;
+ (id)getDisplayName:(id)arg1;
+ (id)getDisplayNameWithChatroom:(id)arg1 chatroom:(id)arg2;
+ (void)replaceSceneNoteWithKey:(id)arg1 value:(id)arg2 miniAppInfo:(id)arg3;
+ (BOOL)shouldShowRedDotInChatPlusIcon:(id)arg1 isGroupChat:(BOOL)arg2;
+ (BOOL)shouldShowRedDotInChatGiftIcon:(id)arg1 isGroupChat:(BOOL)arg2;
+ (void)markHasClearRedDotInChatPlusIconWithGroupChat:(BOOL)arg1;
+ (void)markHasClearRedDotInChatGiftIconWithGroupChat:(BOOL)arg1;
+ (id)generateKeyFromProductCardReqInfo:(id)arg1;
+ (void)report32325WithKey:(id)arg1 value:(id)arg2 extra:(id)arg3;
+ (void)report32325WithKey:(id)arg1 value:(id)arg2 extra:(id)arg3 p1:(id)arg4;
+ (id)safeGetString:(id)arg1;
+ (void)commonOpenSnsEcs:(id)arg1 shareSnsInfo:(id)arg2 scene:(unsigned long long)arg3 feedCreateTime:(unsigned long long)arg4;
+ (void)openSnsEcs:(id)arg1 createTime:(unsigned int)arg2 jumpInfoBase64:(id)arg3;
+ (id)currentGMsgIDWithFeedId:(id)arg1 shareTime:(unsigned long long)arg2;
+ (id)getProductCardReq:(id)arg1 shareSnsInfo:(id)arg2 createTime:(unsigned long long)arg3;
+ (id)convertBase64Str2JumpInfo:(id)arg1;
@end
