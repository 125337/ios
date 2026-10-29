@interface BrandWebAudioStateManager : NSObject
+ (id)endSuccessfully:(id)arg1;
+ (id)endSuccessfully:(id)arg1 result:(id)arg2;
+ (id)endWithCode:(long long)arg1 func:(id)arg2 desc:(id)arg3;
+ (BOOL)shouldHandleGetAudioState:(id)arg1;
+ (id)getAudioState:(id)arg1;
+ (BOOL)shouldHandleSetAudioState:(id)arg1;
+ (id)setAudioState:(id)arg1 info:(id)arg2 scene:(int)arg3;
+ (BOOL)shouldHandleOperateAudio:(id)arg1;
+ (id)operateAudio:(id)arg1 info:(id)arg2;
+ (id)handleSetForegroundSate:(id)arg1;
+ (id)handleSetShutDownTimer:(id)arg1;
+ (id)handleRefreshPlayList:(id)arg1;
+ (id)isValidTingItem:(id)arg1;
+ (BOOL)enableToPlay:(int)arg1;
+ (BOOL)isValidCategory:(id)arg1;
+ (void)playCategory:(id)arg1 itemList:(id)arg2 index:(unsigned long long)arg3 deleteAfterLsiten:(BOOL)arg4 launchOptions:(id)arg5;
@end
