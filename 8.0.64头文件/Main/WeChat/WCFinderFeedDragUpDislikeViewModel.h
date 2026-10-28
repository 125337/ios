@interface WCFinderFeedDragUpDislikeViewModel : NSObject <WCStateMachineDelegate>
{
    id <WCFinderFeedDragUpDislikeViewModelDelegate> _delegate; // +0x8
    WCFinderFeedDragUpDislikeConfig * _config; // +0x10
    unsigned long long _panStartTimeInMs; // +0x18
    double _panLocationYInitial; // +0x20
    double _panLocationYShowingPanel; // +0x28
    WCStateMachine * _stateMachine; // +0x30
}
- (id)init;
- (void)setup;
- (void)setupConfig;
- (void)setupStateMachine;
- (double)topPanelNotShowTouchHeight;
- (double)topPanelViewHScale;
- (double)topPanelViewFoldH;
- (double)panelTriggerSpeedScale;
- (double)panelTriggerDistance;
- (void)markPanLocationYShowingPanel:(double)arg1;
- (void)tryTriggerEventWithName:(id)arg1;
- (void)markStartPanWithY:(double)arg1;
- (void)onShortPanelTimeMatch;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (unsigned long long)panStartTimeInMs;
- (void)setPanStartTimeInMs:(unsigned long long)arg1;
- (double)panLocationYInitial;
- (void)setPanLocationYInitial:(double)arg1;
- (double)panLocationYShowingPanel;
- (void)setPanLocationYShowingPanel:(double)arg1;
- (id)stateMachine;
- (void)setStateMachine:(id)arg1;
- (void).cxx_destruct;
@end
