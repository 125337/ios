@interface SettingAutoDownloadSightViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    unsigned int curImgSettingValue; // +0x70
    BOOL _shouldHighlightCleanMsgItem; // +0x74
    long long _from; // +0x78
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x80
    unsigned long long _settingViewType; // +0x88
    NSIndexPath * _cleanOriginMsgIndex; // +0x90
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
- (void)highlightCellAnimated:(id)arg1;
- (long long)from;
- (BOOL)shouldHighlightCleanMsgItem;
- (void)setShouldHighlightCleanMsgItem:(BOOL)arg1;
- (void)setDelaySwitchLogic:(id)arg1;
- (unsigned long long)settingViewType;
- (void)setSettingViewType:(unsigned long long)arg1;
- (id)cleanOriginMsgIndex;
- (void)setCleanOriginMsgIndex:(id)arg1;
- (void).cxx_destruct;
@end

