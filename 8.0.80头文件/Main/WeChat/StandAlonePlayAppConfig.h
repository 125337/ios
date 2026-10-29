@interface StandAlonePlayAppConfig : NSObject <ITingPlayAppConfig>
{
    int _floatBallType; // +0x8
    id <TingPlayAppMinimizeDelegate> minimizeDelegate; // +0x10
    NSString * _cachedTaskBizName; // +0x18
}
- (id)init;
- (int)identifier;
- (int)audioModuleScene;
- (id)minimizeTaskBizName;
- (void)onMinimizeTap;
- (BOOL)disableOpenFromMinimize;
- (void)updateTaskDataBeforeMinimize:(id)arg1;
- (int)playTaskType;
- (id)playAppName;
- (BOOL)openPreloadPlayer;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (int)floatBallType;
- (void)setFloatBallType:(int)arg1;
- (id)cachedTaskBizName;
- (void)setCachedTaskBizName:(id)arg1;
- (void).cxx_destruct;
@end
