@interface TingWeAppPlayAppConfig : NSObject <ITingPlayAppConfig>
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
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
