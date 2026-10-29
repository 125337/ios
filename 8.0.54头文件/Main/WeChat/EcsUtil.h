@interface EcsUtil : NSObject
+ (BOOL)shouldCheckFeatureListBeforeLaunchWeApp;
+ (BOOL)hasSupportFeatureWithBundleFeatureList:(id)arg1 configFeatureList:(id)arg2;
+ (BOOL)isFeatureChcekOkWithFeatureId:(long long)arg1 miniFeatureVersion:(long long)arg2 configFeatureList:(id)arg3;
+ (id)getEcsGiftMsgDatabasePath;
+ (BOOL)shouldShowSendGiftEntranceInChatToolView;
+ (id)convertMsgJumpInfo:(id)arg1;
@end

