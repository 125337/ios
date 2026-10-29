@interface TextStateLogicConfig : NSObject
+ (BOOL)useStatusModelGetCgiOpt;
+ (BOOL)useStatusModelCacheOpt;
+ (int)maxStatusSyncReadCount;
+ (BOOL)useFlutterPublishPage;
+ (int)flutterPublishPageStyleVersion;
+ (BOOL)useFlutterPublishPageForEdit;
+ (BOOL)useFlutterPublishPageFor3rdParty;
+ (BOOL)useFlutterPublishPageFor3rdPartyWithSourceInfo:(id)arg1;
+ (BOOL)isFlutterPublish3rdPartyTypeBlocked:(unsigned int)arg1;
+ (BOOL)isFlutterPublish3rdPartySourceIdBlocked:(id)arg1;
+ (int)kitchenViewCountFriendCount;
+ (BOOL)kitchenViewCountAnimtionDebug;
+ (double)kitchenPhase1Duration;
+ (double)kitchenPhase1RiseY;
+ (double)kitchenPhase2Duration;
+ (double)kitchenPhase2RiseY;
+ (double)kitchenPhase3Duration;
+ (double)kitchenPhase3RiseY;
+ (double)kitchenBubbleStaggerDelay;
+ (double)kitchenNPercent;
+ (double)kitchenMPercent;
+ (unsigned long long)kitchenMaxBubbleCount;
+ (BOOL)enableChatTitleViewIconFlickerFix;
+ (BOOL)useCommentPageSheet;
@end
