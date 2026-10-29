@interface NewMessageRingSettingViewController : NewSettingBaseViewController
{
    unsigned long long _ringType; // +0x78
    WCTableViewSectionManager * _section; // +0x80
    RingToneAvPlayer * _ringPlayer; // +0x88
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)reloadTableData;
- (id)genNewMessageRingCell:(unsigned long long)arg1;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2;
- (void)setUIForRingType:(unsigned long long)arg1;
- (id)ringPlayer;
- (unsigned long long)ringType;
- (void)setRingType:(unsigned long long)arg1;
- (id)section;
- (void)setSection:(id)arg1;
- (void)setRingPlayer:(id)arg1;
- (void).cxx_destruct;
@end

