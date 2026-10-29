@interface TingPlayerHelper : NSObject
+ (void)playWithMusicInfo:(id)arg1 scene:(int)arg2;
+ (void)playWithMusicInfo:(id)arg1 scene:(int)arg2 enterPlayer:(BOOL)arg3;
+ (void)playWithFinderDataItem:(id)arg1 playbackTime:(double)arg2 scene:(int)arg3;
+ (void)playTingItem:(id)arg1 scene:(int)arg2;
+ (void)playTingItem:(id)arg1 scene:(int)arg2 enterPlayer:(BOOL)arg3;
+ (void)playTingItem:(id)arg1 launchOptions:(id)arg2;
+ (void)playWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4;
+ (void)playWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4 enterPlayer:(BOOL)arg5;
+ (void)playWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 launchOptions:(id)arg4;
+ (BOOL)audioSceneAllowEnterSqaure:(id)arg1 andScene:(int)arg2;
+ (void)playAudioItem:(id)arg1 launchOptions:(id)arg2;
+ (void)playWithModel:(id)arg1 launchOptions:(id)arg2;
+ (void)playWithModel:(id)arg1 launchOptions:(id)arg2 completion:(id /* block */)arg3;
+ (void)playWithListenIds:(id)arg1 index:(unsigned long long)arg2 scene:(int)arg3 enterPlayer:(BOOL)arg4 configuration:(id)arg5;
+ (void)playWithListenIds:(id)arg1 index:(unsigned long long)arg2 launchOptions:(id)arg3 configuration:(id)arg4;
+ (id)globalPlayer;
+ (id)currentPlayer;
+ (BOOL)isCurrentPlayerExist;
+ (id)createFlowPlayer;
+ (id)createFlowPlayer:(BOOL)arg1;
+ (id)createCurrentPlayerIfNeeded;
+ (void)pauseCurrentPlayingItem;
@end

