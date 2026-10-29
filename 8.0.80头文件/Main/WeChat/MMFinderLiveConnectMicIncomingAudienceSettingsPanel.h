@interface MMFinderLiveConnectMicIncomingAudienceSettingsPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicConditionChooseDelegate, MMFinderLiveConnectMicSelectConnectModeDelegate>
{
    BOOL _canAutoConnect; // +0x8
    id <MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate> _delegate; // +0x10
    unsigned long long _curConditionType; // +0x18
    unsigned long long _bannedConditionFlag; // +0x20
    UITableView * _tableView; // +0x28
}
- (id)initWithCurrentCondition:(unsigned long long)arg1 autoConnect:(BOOL)arg2 bannedConditionsFlag:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicSelectConnectModeUpdateCanAutoConnect:(BOOL)arg1;
- (void)onMMFinderLiveConnectMicSelectConnectModePanelClosed;
- (void)initializeComponents;
- (id)getConditionTitleByType:(unsigned long long)arg1;
- (void)showMicConditionChoosePanel;
- (void)showSelectConnectModePanel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)curConditionType;
- (void)setCurConditionType:(unsigned long long)arg1;
- (BOOL)canAutoConnect;
- (void)setCanAutoConnect:(BOOL)arg1;
- (unsigned long long)bannedConditionFlag;
- (void)setBannedConditionFlag:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
