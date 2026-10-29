@interface TingPlayAppFactoryObjcStatic : NSObject
+ (id)_createPlayAppWithIdentifier:(int)arg1 appName:(id)arg2 playTaskType:(int)arg3 openPreloadPlayer:(BOOL)arg4;
+ (void)_setupNotificationBridgeForPlayApp:(id)arg1;
+ (id)createPlayAudioApp;
+ (id)createPlayTingChatRoomApp;
+ (id)createCustomBasicApp:(int)arg1;
+ (id)createCustomApp:(int)arg1;
+ (id)createFinderAudioApp;
+ (id)createQuickPlayApp;
+ (id)createTingMusicApp;
+ (id)createStandAlonePlayApp;
+ (id)createStandAlonePlayApp:(id)arg1;
+ (id)createWebviewBgAudioPlayApp;
+ (id)getFloatBallHelper:(int)arg1;
@end
