@interface DefaultPlayAppConfig : NSObject <ITingPlayAppConfig>
{
    id <TingPlayAppMinimizeDelegate> minimizeDelegate; // +0x8
}
- (int)identifier;
- (int)audioModuleScene;
- (void)onMinimizeTap;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
