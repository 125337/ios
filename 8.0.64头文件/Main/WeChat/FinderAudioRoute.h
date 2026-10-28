@interface FinderAudioRoute : MMUserService <MMServiceProtocol>
{
    unsigned int _netType; // +0x8
    MMFlutterViewController * _appViewController; // +0x10
    UINavigationController * _appContainer; // +0x18
    id <TingPlayApp> _FAPlayApp; // +0x20
}
+ (id)shared;
+ (BOOL)isTingAudioRemove;
- (void)openMainFeedWithBuffer:(id)arg1 params:(id)arg2;
- (void)openPlayingTaskServicePage;
- (void)openMineAudioPage;
- (void)openListRepoPageWithInfo:(id)arg1 index:(int)arg2;
- (void)openCategoryCollection:(id)arg1 isAuthor:(id)arg2;
- (void)openAudioAuthorPage:(id)arg1;
- (void)initPlayApp;
- (void)createOrReuseFlutterPageRouteName:(id)arg1 params:(id)arg2;
- (BOOL)isAppAlive;
- (BOOL)isFinderAudioEntryEnable;
- (BOOL)isFinderAudioAppEnable;
- (BOOL)isInnerUser;
- (void)releaseFlutterInstance;
- (void)finderSleepModeJumpTingWithByPassBuffer:(id)arg1 params:(id)arg2;
- (void)initPlayTaskController;
- (id)extraPlugins;
- (BOOL)checkNeedTerminateApp;
- (void)terminateAppImmediatly;
- (int)getAppEnterScene;
- (id)getAppSessionId;
- (int)getAudioSessionRoute;
- (int)getNetType;
- (id)getPlayerReportContext;
- (id)getPlayerTingItem;
- (id)getPlayingTask;
- (id)getTapeItem;
- (int)getVolume;
- (BOOL)isPlaying;
- (id)appViewController;
- (void)setAppViewController:(id)arg1;
- (id)appContainer;
- (void)setAppContainer:(id)arg1;
- (id)FAPlayApp;
- (void)setFAPlayApp:(id)arg1;
- (unsigned int)netType;
- (void)setNetType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
