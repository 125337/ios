@interface WeClawBotContactSettingViewController : ContactSettingViewController <IBotContactOplogExt, WCActionSheetDelegate>
{
    UIButton * m_manageClawBotButton; // +0xb8
    double m_layoutTableWidth; // +0xc0
    BOOL _needClearBotHistory; // +0xc8
    unsigned int _disconnectEventID; // +0xcc
    WeClawBotStatusInfo * _initialStatusInfo; // +0xd0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)isShowBlackAction;
- (BOOL)isShowExposeAction;
- (void)reloadTableView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addProfileCellsWithSection:(id)arg1;
- (void)makeAvatarCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeRemarkCell:(id)arg1 CellInfo:(id)arg2;
- (void)opChangeAvatar;
- (void)opEditRemark;
- (void)setupManageClawBotButton;
- (void)layoutManageClawBotFooterView;
- (void)opManageClawBot;
- (void)addActionSections;
- (void)opQuickMessage;
- (void)opClearMessage;
- (void)addDisconnectBotSection;
- (void)onDisconnectBotFeature:(id)arg1;
- (void)doDisconnectBotWithClearHistory:(BOOL)arg1;
- (void)onBotContactOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)unregisterDisconnectCallback;
- (void)doDisconnectBotLocal;
- (void)addTopAndMuteSection;
- (void)handleBotTopSwitchChange:(id)arg1;
- (void)handleBotMuteSwitchChange:(id)arg1;
- (id)initialStatusInfo;
- (void)setInitialStatusInfo:(id)arg1;
- (BOOL)needClearBotHistory;
- (void)setNeedClearBotHistory:(BOOL)arg1;
- (unsigned int)disconnectEventID;
- (void)setDisconnectEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
