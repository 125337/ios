@interface MMFinderLiveLandscapeBarrageSettingInfo : NSObject
{
    BOOL _enableBarrageStyle; // +0x8
    BOOL _enableDisplayBarrageStyle; // +0x9
    double _barrageDisplayRange; // +0x10
    double _barrageDisplayAlpha; // +0x18
    MMFinderLiveLandscapeBarrageState * _barrageState; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    LiveLandscapeBarrageDisplaySettingInfo * _displaySetting; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)updateEnableBarrageStyle:(BOOL)arg1;
- (void)updateEnableDisplayBarrageStyle:(BOOL)arg1;
- (void)updateBarrageDisplayRange:(double)arg1;
- (void)updateBarrageDisplayAlpha:(double)arg1;
- (int)getDisplayBarrageRangeReportTag;
- (int)getDisplayBarrageAlphaReportTag;
- (id)barrageState;
- (id)displaySetting;
- (BOOL)checkDisplaySettingParamValid:(id)arg1;
- (BOOL)enableBarrageStyle;
- (void)setEnableBarrageStyle:(BOOL)arg1;
- (BOOL)enableDisplayBarrageStyle;
- (void)setEnableDisplayBarrageStyle:(BOOL)arg1;
- (double)barrageDisplayRange;
- (void)setBarrageDisplayRange:(double)arg1;
- (double)barrageDisplayAlpha;
- (void)setBarrageDisplayAlpha:(double)arg1;
- (void)setBarrageState:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setDisplaySetting:(id)arg1;
- (void).cxx_destruct;
@end

