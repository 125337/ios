@interface MMFinderLiveAiAssistantSwitchPanel : MMPageSheetBaseView
{
    BOOL _isPreLive; // +0x8
    BOOL _hasReportedExposure; // +0x9
    id /* block */ _switchToggleHandler; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    NSMutableArray * _switchRows; // +0x20
    UIView * _topSepLine; // +0x28
    WCFinderLiveStarterReporter * _starterReporter; // +0x30
}
- (id)initWithTaskId:(id)arg1 isPreLive:(BOOL)arg2;
- (void)layoutSubviews;
- (void)pageSheetDidShow;
- (void)setupPageSheetConfig;
- (void)buildDetailView;
- (void)appendRowWithItemType:(unsigned long long)arg1 title:(id)arg2 detail:(id)arg3 enable:(BOOL)arg4 container:(id)arg5;
- (void)layoutUI;
- (id)finderLiveTask;
- (BOOL)shouldShowReceiveItem;
- (BOOL)shouldShowVoiceItem;
- (BOOL)isReceiveSwitchOn;
- (BOOL)isVoiceSwitchOn;
- (void)reloadSwitchStates;
- (void)reportPanelExposureIfNeeded;
- (long long)subElementIdForItemType:(unsigned long long)arg1;
- (void)reportExposureForItemType:(unsigned long long)arg1;
- (void)reportSwitchToggle:(unsigned long long)arg1 enable:(BOOL)arg2;
- (id /* block */)switchToggleHandler;
- (void)setSwitchToggleHandler:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isPreLive;
- (void)setIsPreLive:(BOOL)arg1;
- (id)switchRows;
- (void)setSwitchRows:(id)arg1;
- (id)topSepLine;
- (void)setTopSepLine:(id)arg1;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (BOOL)hasReportedExposure;
- (void)setHasReportedExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
