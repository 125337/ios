@interface DefaultPlayAppConfig : NSObject <TingPlayAppConfig>
{
    id <TingPlayAppMinimizeDelegate> minimizeDelegate; // +0x8
}
- (int)audioModuleScene;
- (void)onMinimizeTap;
- (BOOL)standaloneReportInstance;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
