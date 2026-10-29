@interface MMFinderLiveAiAssistantToolMusicControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleOpenPanelWithContext:(id)arg1 operationView:(id)arg2 completion:(id /* block */)arg3;
- (void)handlePlayWithPanel:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePauseWithPanel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleResumeWithPanel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNextWithPanel:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePreviousWithPanel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleStopWithPanel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleVolumeWithPanel:(id)arg1 delta:(id)arg2 completion:(id /* block */)arg3;
- (void)handlePlaySongWithSongId:(id)arg1 listenId:(id)arg2 panel:(id)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (void)handleMoveSongWithSongId:(id)arg1 listenId:(id)arg2 toIndex:(id)arg3 panel:(id)arg4 completion:(id /* block */)arg5;
- (void)handleSetOrderWithSongs:(id)arg1 panel:(id)arg2 completion:(id /* block */)arg3;
- (void)handleRemoveSongWithSongId:(id)arg1 listenId:(id)arg2 panel:(id)arg3 completion:(id /* block */)arg4;
- (long long)indexOfSongWithSongId:(id)arg1 listenId:(id)arg2 inArray:(id)arg3;
- (id)briefMusicInfosFromMusicDataArray:(id)arg1;
- (id)extraInfoForMusicItem:(id)arg1;
@end
