@interface MMLiveConnectMicOperationPanel : UIView <UIGestureRecognizerDelegate, MMLiveConnectedMicAudienceCellViewDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _enableOperation; // +0x8
    id <MMLiveConnectMicOperationPanelDelegate> _delegate; // +0x10
    NSArray * _audienceArray; // +0x18
    MMLiveApplyConnectMicAudience * _currentAudience; // +0x20
    unsigned long long _state; // +0x28
    UIView * _panelView; // +0x30
    MMUIButton * _arrowButton; // +0x38
    UITableView * _audienceTableView; // +0x40
    NSArray * _displayAudienceArray; // +0x48
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x50
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x58
    double _viewTopAtPanBegin; // +0x60
    double _previousPanPositionY; // +0x68
}
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)setState:(unsigned long long)arg1;
- (void)setAudienceArray:(id)arg1;
- (void)setCurrentAudience:(id)arg1;
- (void)updateDisplayAudienceArray;
- (void)showPanelWithInitialState:(unsigned long long)arg1 enableOperation:(BOOL)arg2;
- (void)updateCurrentAudience:(id)arg1 audienceArray:(id)arg2 andState:(unsigned long long)arg3;
- (void)closeAction;
- (void)onMMLiveConnectedMicAudienceCellViewEnableConnectMic:(BOOL)arg1;
- (void)onMMLiveConnectedMicAudienceCellViewConnectMicToAudience:(id)arg1;
- (void)onMMLiveConnectedMicAudienceCellViewStopConnectMicFromAudience:(id)arg1;
- (void)onMMLiveConnectedMicAudienceCellViewCancelConnectMicFromAudience:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfSectionsOfTableView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePanelViewPanGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)setEnableOperation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)audienceArray;
- (id)currentAudience;
- (unsigned long long)state;
- (BOOL)enableOperation;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)audienceTableView;
- (void)setAudienceTableView:(id)arg1;
- (id)displayAudienceArray;
- (void)setDisplayAudienceArray:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (void).cxx_destruct;
@end

