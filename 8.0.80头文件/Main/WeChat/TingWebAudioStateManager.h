@interface TingWebAudioStateManager : NSObject
+ (id)_playAppForSourceType:(long long)arg1 create:(BOOL)arg2;
+ (BOOL)_passPlayAppForSourceType:(long long)arg1;
+ (BOOL)_webAudioStateFeatureEnable:(long long)arg1;
+ (id)endSuccessfully:(id)arg1;
+ (id)endSuccessfully:(id)arg1 result:(id)arg2;
+ (id)endWithCode:(long long)arg1 func:(id)arg2 desc:(id)arg3;
+ (id)setAudioState:(id)arg1 info:(id)arg2 scene:(int)arg3;
+ (id)audioStateInfo:(id)arg1 tingItem:(id)arg2 status:(int)arg3;
+ (id)standAlonePlayAppAudioStateInfoWithEvent:(int)arg1;
+ (id)getAudioState:(id)arg1 info:(id)arg2;
+ (id)operateAudio:(id)arg1 info:(id)arg2;
+ (id)onAudioStateChanged:(id)arg1 tingItem:(id)arg2 status:(int)arg3 event:(int)arg4 withContext:(id)arg5;
+ (id)opSetShutDownWithInfoAndReturnErrmsg:(id)arg1;
+ (id)opRefreshPlayListWithInfoAndReturnErrmsg:(id)arg1;
+ (id)isValidTingItem:(id)arg1 sourceType:(long long)arg2;
+ (id)tingItemFromWebItem:(id)arg1;
+ (id)webItemFromTingItem:(id)arg1;
+ (BOOL)isValidCategory:(id)arg1;
+ (id)tingItemFromPlayableInfo:(id)arg1;
+ (void)playCategory:(id)arg1 itemList:(id)arg2 index:(unsigned long long)arg3 deleteAfterLsiten:(BOOL)arg4 launchOptions:(id)arg5 sourceType:(long long)arg6;
+ (void)playWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 launchOptions:(id)arg4 sourceType:(long long)arg5;
+ (void)playTingItem:(id)arg1 launchOptions:(id)arg2 sourceType:(long long)arg3;
@end
