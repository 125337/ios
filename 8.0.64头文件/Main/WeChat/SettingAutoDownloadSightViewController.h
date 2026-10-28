@interface SettingAutoDownloadSightViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    unsigned int curImgSettingValue; // +0x78
    long long _from; // +0x80
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x88
    unsigned long long _settingViewType; // +0x90
}
- (id)init;
- (id)initWithType:(unsigned long long)arg1 from:(long long)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)onReturn;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)savePhotoToLibraryChanged:(id)arg1;
- (void)saveVideoToLibraryChanged:(id)arg1;
- (void)saveVideoAutoPlayChanged:(id)arg1;
- (void)saveIntelligentImgChanged:(id)arg1;
- (void)saveCleanOriginMsgChanged:(id)arg1;
- (void)silentDownloadChanged;
- (void)voipDoubleLinkSettingChanged:(id)arg1;
- (void)reportOperate:(long long)arg1;
- (id)delaySwitchLogic;
- (long long)from;
- (void)setDelaySwitchLogic:(id)arg1;
- (unsigned long long)settingViewType;
- (void)setSettingViewType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
