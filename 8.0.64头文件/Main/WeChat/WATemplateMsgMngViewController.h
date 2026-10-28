@interface WATemplateMsgMngViewController : ZZFLEXTableViewController <WATemplateMsgManagerExt>
{
    unsigned long long _notifyStatus; // +0x70
    unsigned long long _audioNotifyStatus; // +0x78
}
- (id)init;
- (void)registerExtension;
- (void)viewDidLoad;
- (void)reloadSwitchData;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)reloadTableView;
- (void)onNotifySwitch:(BOOL)arg1;
- (void)onAudioNotifySwitch:(BOOL)arg1;
- (void)onTemplateMsgMgrInfoChanged;
- (unsigned long long)notifyStatus;
- (void)setNotifyStatus:(unsigned long long)arg1;
- (unsigned long long)audioNotifyStatus;
- (void)setAudioNotifyStatus:(unsigned long long)arg1;
@end
