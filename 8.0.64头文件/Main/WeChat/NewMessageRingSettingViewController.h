@interface NewMessageRingSettingViewController : NewSettingBaseViewController
{
    unsigned long long _ringType; // +0x80
    long long _previousSelectedIndex; // +0x88
    WCTableViewSectionManager * _section; // +0x90
    RingToneAvPlayer * _ringPlayer; // +0x98
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)reloadTableData;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)genNewMessageRingCell:(unsigned long long)arg1;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2;
- (void)setUIForRingType:(unsigned long long)arg1;
- (id)ringPlayer;
- (void)registerYReportSdk;
- (unsigned long long)ringType;
- (void)setRingType:(unsigned long long)arg1;
- (long long)previousSelectedIndex;
- (void)setPreviousSelectedIndex:(long long)arg1;
- (id)section;
- (void)setSection:(id)arg1;
- (void)setRingPlayer:(id)arg1;
- (void).cxx_destruct;
@end
