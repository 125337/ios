@interface ShakeViewController : MMUIViewController <WCAudioModuleDelegate, ShakeListDelegate, ShakeBgImgDownloadMgrExt, ShakeCheckerDelegate, MMPickerViewDelegate, ShakeLogicProxyDelegate, shakeSingleViewDelegate, WCActionSheetDelegate, ShakeMainFrameDelegate, MMImagePickerManagerDelegate, ShakeSettingViewControllerDelegate, MMTipsViewControllerDelegate, UIScrollViewDelegate, IUiUtilExt, IRecordPermissionCheckExt, ShakeTypeBarDelegate, ShakeTvHistoryViewDelegate>
{
    ShakeLogicProxy * m_logicProxy; // +0x70
    ShakeSingleView * m_shakeSingleView; // +0x78
    ShakeMainView * m_mainView; // +0x80
    MMTipsViewController * m_introView; // +0x88
    ShakeTvHistoryView * m_shakeTvHistoryView; // +0x90
    BOOL m_bShaking; // +0x98
    id <ShakeViewDelegate> m_delegate; // +0xa0
    CShakeChecker * m_shakeChecker; // +0xa8
    MMHDHeadImageView * m_HDHeadImage; // +0xb0
    BOOL m_bBackgroundRunning; // +0xb8
    ShakeTypeBar * m_typeBar; // +0xc0
    unsigned int m_uiTimeStartSearchTV; // +0xc8
    BOOL m_bCanShake; // +0xcc
}
- (id)getViewController;
- (id)getCurrentViewController;
- (void)setShakeType:(long long)arg1;
- (void)setCanShake:(BOOL)arg1;
- (void)dismissViewController;
- (BOOL)shouldInteractivePop;
- (BOOL)canBecomeFirstResponder;
- (id)navigationBarBackgroundColor;
- (void)setM_Delegate:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)initView;
- (void)initBackgroundView;
- (void)promptForShakeUsageWarnning;
- (void)dealloc;
- (void)stopAllAnimation;
- (void)disableAllButton;
- (void)enableAllButton;
- (void)resetAllStatus;
- (void)showErrorAlert:(id)arg1;
- (void)GoToSayHello:(id)arg1 andScene:(unsigned int)arg2;
- (void)onFinishShowAnimation;
- (void)showHDHeadImage;
- (void)showShakeSingleView:(id)arg1 andScene:(unsigned int)arg2;
- (void)initHDHeadImage:(id)arg1;
- (void)onSelectedContactInfo:(id)arg1 isFromList:(BOOL)arg2;
- (BOOL)isInMyContactList:(id)arg1;
- (void)showContactInfoView:(id)arg1 isFromList:(BOOL)arg2;
- (void)showPeopleInfoView:(id)arg1 isFromList:(BOOL)arg2;
- (void)updateTvHistoryView;
- (void)onSelectedShakeTvResult:(id)arg1;
- (void)showShakeTvResult:(id)arg1 andModal:(BOOL)arg2 isFromHistoryList:(BOOL)arg3;
- (void)showTvDetail:(id)arg1 withModal:(BOOL)arg2;
- (void)onSplitAnimationEnd;
- (void)onClickHideImage;
- (void)OnShake;
- (void)onShakeMusicReportEndWithMusicItem:(id)arg1;
- (void)onShakeMusicReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeReportEndWithResult:(id)arg1;
- (void)onShakeGetEndWithResult:(id)arg1;
- (void)onShakeGetEndWithResultInternal:(id)arg1;
- (void)onShakeReportFail:(id)arg1;
- (void)onShakeGetFail:(id)arg1;
- (void)OnGetNewBgImg;
- (void)OnOpenSayHello;
- (void)OnOpenUnreadMsgList;
- (void)showViewControllerFromList:(id)arg1 completion:(id /* block */)arg2;
- (void)OnSetting;
- (void)promptForProfileExtInfo;
- (id)getMsgForState:(unsigned int)arg1;
- (long long)getShakeLogicType;
- (void)onShakeStop;
- (void)onShowImagePicker;
- (void)onBackgroundImgChange;
- (void)showImagePicker:(long long)arg1;
- (void)SetMuteStauts:(long long)arg1;
- (void)updateMuteStauts:(BOOL)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)handleImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onShakeTypeClicked:(long long)arg1;
- (void)shakeSwitch;
- (void)systemAuthorizationCheck;
- (void)promptForShakeMusicUsage;
- (id)getCurrViewController;
- (BOOL)isInShakeTvLogicType;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)registerYReportSdk;
- (void)handleInterruptionBy3rdApp;
- (BOOL)m_bCanShake;
- (void)setM_bCanShake:(BOOL)arg1;
- (void).cxx_destruct;
@end
