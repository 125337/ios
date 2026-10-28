@interface MMLiveStarterViewController : MMUIViewController <IRecordPermissionCheckExt>
{
    BOOL _isRecordPermissionCheckOK; // +0x70
    BOOL _isInRecordPermissionCheckProcess; // +0x71
    BOOL _uploadCoverImageRequired; // +0x72
    BOOL _jumpToSticker; // +0x73
    BOOL _jumpToOperation; // +0x74
    BOOL _isAgreementChecked; // +0x75
    unsigned int _versionType; // +0x78
    unsigned int _curCoinValue; // +0x7c
    MMLiveTaskId * _liveTaskId; // +0x80
    NSDictionary * _startExtraInfo; // +0x88
    id <MMLiveStarterViewControllerDelegate> _delegate; // +0x90
    WCLiveStarterScrollActionSheet * _settingScrollActionSheet; // +0x98
    long long _currDeviceOrientation; // +0xa0
    WCFinderLiveStarterChooseGamePanelView * _chooseGamePanelView; // +0xa8
    MMFinderLiveMusicSettingOperationPanel * _musicSettingOprationPanel; // +0xb0
    MMFinderLiveSongSettingOperationPanel * _songSettingOperationPanel; // +0xb8
    unsigned long long _gameLiveStartAction; // +0xc0
    RPSystemBroadcastPickerView * _broadcastPickerView; // +0xc8
    MMFinderLiveReplayKitManager * _replayKitManager; // +0xd0
    MMFinderScreenRecordGuideView * _screenRecordGuideView; // +0xd8
    WCFinderStarterLiveViewModel * _starterVM; // +0xe0
    MMLiveCountdownTipsView * _countdownTipsView; // +0xe8
    WCFinderLiveStarterReporter * _reporter; // +0xf0
    WCFinderHeadImageView * _coverImageView; // +0xf8
    MMGrowTextView * _growTextView; // +0x100
}
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)stopLiveTimer;
- (void)showLiveStarterWarnPage:(id)arg1;
- (void)onOrientationChanged;
- (void)onCurrAnchorMainShouldSupportOrientationMaskChanged:(unsigned long long)arg1;
- (void)checkRecordPermissionAndStartLive;
- (void)realStartLive;
- (unsigned long long)systemCapabilityAuthScene;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)addShakeOnCheckBoxView;
- (void)setStartGameLiveButtonDisable:(BOOL)arg1;
- (double)getSwitchModeViewScale;
- (id)minimizeSrcView;
- (void)updateStartExtraInfo:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)startExtraInfo;
- (void)setStartExtraInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRecordPermissionCheckOK;
- (void)setIsRecordPermissionCheckOK:(BOOL)arg1;
- (BOOL)isInRecordPermissionCheckProcess;
- (void)setIsInRecordPermissionCheckProcess:(BOOL)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (id)settingScrollActionSheet;
- (void)setSettingScrollActionSheet:(id)arg1;
- (unsigned int)curCoinValue;
- (void)setCurCoinValue:(unsigned int)arg1;
- (BOOL)uploadCoverImageRequired;
- (void)setUploadCoverImageRequired:(BOOL)arg1;
- (BOOL)jumpToSticker;
- (void)setJumpToSticker:(BOOL)arg1;
- (BOOL)jumpToOperation;
- (void)setJumpToOperation:(BOOL)arg1;
- (long long)currDeviceOrientation;
- (void)setCurrDeviceOrientation:(long long)arg1;
- (id)chooseGamePanelView;
- (void)setChooseGamePanelView:(id)arg1;
- (id)musicSettingOprationPanel;
- (void)setMusicSettingOprationPanel:(id)arg1;
- (id)songSettingOperationPanel;
- (void)setSongSettingOperationPanel:(id)arg1;
- (unsigned long long)gameLiveStartAction;
- (void)setGameLiveStartAction:(unsigned long long)arg1;
- (id)broadcastPickerView;
- (void)setBroadcastPickerView:(id)arg1;
- (id)replayKitManager;
- (void)setReplayKitManager:(id)arg1;
- (id)screenRecordGuideView;
- (void)setScreenRecordGuideView:(id)arg1;
- (id)starterVM;
- (void)setStarterVM:(id)arg1;
- (id)countdownTipsView;
- (void)setCountdownTipsView:(id)arg1;
- (BOOL)isAgreementChecked;
- (void)setIsAgreementChecked:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (void).cxx_destruct;
@end
