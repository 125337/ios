@interface TingFinderAudioPlayAppConfig : NSObject <ITingPlayAppConfig>
{
    id <TingPlayAppMinimizeDelegate> minimizeDelegate; // +0x8
}
- (int)identifier;
- (int)audioModuleScene;
- (id)minimizeTaskBizName;
- (void)onMinimizeTap;
- (int)playTaskType;
- (id)playAppName;
- (BOOL)openPreloadPlayer;
- (void)doMinimizeModuleConfig:(id)arg1 withPlayApp:(id)arg2;
- (void)doNowPlayingModuleConfig:(id)arg1;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
