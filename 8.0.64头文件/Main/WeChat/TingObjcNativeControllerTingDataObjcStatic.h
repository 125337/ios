@interface TingObjcNativeControllerTingDataObjcStatic : NSObject
+ (void)addOrRevertBlackList:(id)arg1 addOrRevert:(BOOL)arg2 callback:(id /* block */)arg3;
+ (void)deleteFavBySourceId:(id)arg1 callback:(id /* block */)arg2;
+ (void)getIdentityType:(id /* block */)arg1;
+ (void)hasAddedInFavDB:(id)arg1 callback:(id /* block */)arg2;
+ (void)onPlayerAction:(id)arg1 action:(long long)arg2 callback:(id /* block */)arg3;
+ (void)onPlayerLike:(id)arg1 isLike:(BOOL)arg2 callback:(id /* block */)arg3;
+ (void)onTingCommonEvent:(long long)arg1 paramsJson:(id)arg2 callback:(id /* block */)arg3;
+ (void)preloadMiniProgram:(long long)arg1 preloadScene:(long long)arg2 callback:(id /* block */)arg3;
+ (void)showAudioRedDot:(id /* block */)arg1;
+ (void)uploadRecordFileToCdn:(id)arg1 callback:(id /* block */)arg2;
+ (void)setShowAudioRedDot:(BOOL)arg1 callback:(id /* block */)arg2;
+ (BOOL)isEngineCategoryInfoEvent:(id)arg1;
+ (BOOL)isOpenFullscreenPlayerEvent:(id)arg1;
+ (BOOL)isEngineListenItemInfoEvent:(id)arg1;
+ (void)trySyncPlayerActionToWeAppTask:(id)arg1 action:(unsigned long long)arg2;
+ (void)playMusicChatVoice:(id)arg1;
+ (void)playChatVoice:(id)arg1 callback:(id /* block */)arg2;
+ (id)getMusicChatPlayTask;
+ (BOOL)hanldeMusicChatPlayControl:(int)arg1 extraData:(id)arg2;
+ (int)getVolume;
+ (void)playOnceTimeAudioWithURL:(id)arg1 isAbandonFocusForce:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)containsInStar:(id)arg1 music:(BOOL)arg2 callback:(id /* block */)arg3;
@end
