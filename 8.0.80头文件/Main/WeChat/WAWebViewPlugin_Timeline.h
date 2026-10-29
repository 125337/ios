@interface WAWebViewPlugin_Timeline : WAWebViewPluginBase <IWATimelineCommitDelegate>
{
    BOOL _shouldShowShareTimelineMenu; // +0x8
    BOOL _externalShareActive; // +0x9
    id <IWAWebViewPluginDelegate> _resultDelegate; // +0x10
    id <IWATimelineService> _timelineService; // +0x18
    NSDictionary * _wmpfCustomParams; // +0x20
}
- (BOOL)isSharing;
- (BOOL)beginExternalShare;
- (void)notifyToShareTimelineWithCustomParams:(id)arg1;
- (id)genTimelineDataToShare:(id)arg1;
- (id)genTimelineDataToShareImage:(id)arg1;
- (void)shareTimelineData:(id)arg1;
- (id)pluginReportPageEvent;
- (void)reportShareTimeline:(id)arg1;
- (unsigned int)getAppType;
- (void)cleanWhenShareEnd;
- (void)onDoneForwardForForwardView:(id)arg1 timelineData:(id)arg2;
- (void)onCancelForwardForForwardView:(id)arg1 timelineData:(id)arg2;
- (BOOL)shouldShowShareTimelineMenu;
- (void)setShouldShowShareTimelineMenu:(BOOL)arg1;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)timelineService;
- (void)setTimelineService:(id)arg1;
- (id)wmpfCustomParams;
- (void)setWmpfCustomParams:(id)arg1;
- (BOOL)externalShareActive;
- (void)setExternalShareActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
