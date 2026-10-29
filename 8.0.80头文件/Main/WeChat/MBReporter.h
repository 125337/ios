@interface MBReporter : NSObject
{
    BOOL _skipReport; // +0x8
    MagicBrushService * _service; // +0x10
    NSString * _bizName; // +0x18
    double _bizCreatedTime; // +0x20
    double _setupBeginTime; // +0x28
    double _mainBeginTime; // +0x30
    double _startBeginTime; // +0x38
    double _destroyBeginTime; // +0x40
}
+ (id)correctReportString:(id)arg1;
- (void)reportSetupCostTime;
- (void)reportSetupCostTimeWithExtra:(id)arg1;
- (void)reportStartCostTime;
- (void)reportDestroyCostTime;
- (void)reportMainCostTime;
- (void)reportMainCostTimeWithExtra:(id)arg1;
- (void)reportPluginCostTime:(id)arg1;
- (void)reportTime:(unsigned long long)arg1 delta:(double)arg2 extra:(id)arg3;
- (void)reportRuntimeException:(id)arg1 content:(id)arg2 extra:(id)arg3;
- (id)service;
- (void)setService:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (double)bizCreatedTime;
- (void)setBizCreatedTime:(double)arg1;
- (double)setupBeginTime;
- (void)setSetupBeginTime:(double)arg1;
- (double)mainBeginTime;
- (void)setMainBeginTime:(double)arg1;
- (double)startBeginTime;
- (void)setStartBeginTime:(double)arg1;
- (double)destroyBeginTime;
- (void)setDestroyBeginTime:(double)arg1;
- (BOOL)skipReport;
- (void)setSkipReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
