@interface TingBasicPlayAppConfig : NSObject <TingPlayAppConfig>
{
    id <TingPlayAppMinimizeDelegate> minimizeDelegate; // +0x8
}
- (int)identifier;
- (int)audioModuleScene;
- (void)onMinimizeTap;
- (int)playTaskType;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
