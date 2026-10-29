@interface TingMusicPlayAppConfig : NSObject <ITingPlayAppConfig>
{
    BOOL _disableOpen; // +0x8
    id <TingPlayAppMinimizeDelegate> minimizeDelegate; // +0x10
}
- (int)identifier;
- (int)audioModuleScene;
- (id)minimizeTaskBizName;
- (void)onMinimizeTap;
- (int)playTaskType;
- (id)createCustomMinimizeTask;
- (id)playAppName;
- (BOOL)openPreloadPlayer;
- (void)doMinimizeModuleConfig:(id)arg1 withPlayApp:(id)arg2;
- (BOOL)enableNowPlayingLyrics;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
