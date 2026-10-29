@interface FinderAudioRoute : MMUserService <TingPlayAppNotification, MMServiceProtocol>
{
    BOOL _audioProgressDirty; // +0x8
    unsigned int _netType; // +0xc
    MMFlutterViewController * _appViewController; // +0x10
    UINavigationController * _appContainer; // +0x18
    id <TingPlayApp> _FAPlayApp; // +0x20
    NSString * _pendingResumeFeedId; // +0x28
    double _pendingResumePlayPosition; // +0x30
    WCFinderVideoPlayInfo * _audioProgress; // +0x38
}
+ (id)shared;
+ (BOOL)isTingAudioRemove;
- (void)flushAudioProgress;
- (void)recordAudioItem:(id)arg1 position:(double)arg2 duration:(double)arg3;
- (void)playApp:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)playApp:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)onAudioEnterBackground:(id)arg1;
- (void)dealloc;
- (void)openMainFeedWithBuffer:(id)arg1 params:(id)arg2;
- (void)openPlayingTaskServicePage;
- (void)openMineAudioPage;
- (void)openListRepoPageWithInfo:(id)arg1 index:(int)arg2;
- (void)openListRepoPageWithInfo:(id)arg1 index:(int)arg2 reportParams:(id)arg3;
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
- (void)capturePendingResumePosition;
- (double)resumePlayPositionForFeedId:(id)arg1;
- (void)consumeResumePlayPosition:(double)arg1 forFeedId:(id)arg2;
- (id)appViewController;
- (void)setAppViewController:(id)arg1;
- (id)appContainer;
- (void)setAppContainer:(id)arg1;
- (id)FAPlayApp;
- (void)setFAPlayApp:(id)arg1;
- (unsigned int)netType;
- (void)setNetType:(unsigned int)arg1;
- (id)pendingResumeFeedId;
- (void)setPendingResumeFeedId:(id)arg1;
- (double)pendingResumePlayPosition;
- (void)setPendingResumePlayPosition:(double)arg1;
- (id)audioProgress;
- (void)setAudioProgress:(id)arg1;
- (BOOL)audioProgressDirty;
- (void)setAudioProgressDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end
