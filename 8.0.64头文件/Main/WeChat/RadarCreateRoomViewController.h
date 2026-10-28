@interface RadarCreateRoomViewController : MMUIViewController <ILocationMgrExt, PBMessageObserverDelegate, IRadarSearchExt, UIScrollViewDelegate>
{
    NSMutableArray * m_arrHeads; // +0x70
    NSMutableArray * m_arrWillShowMember; // +0x78
    NSString * m_nsTicket; // +0x80
    UILabel * m_titleLabel; // +0x88
    UIView * m_topLine; // +0x90
    UIView * m_bottomLine; // +0x98
    UIView * m_blurView; // +0xa0
    MMScrollView * m_scrollView; // +0xa8
    UIButton * m_enterBtn; // +0xb0
    UIImageView * m_emptyHead; // +0xb8
    UILabel * m_labelSmallTip; // +0xc0
    UIView * m_keyBoard; // +0xc8
    UILabel * m_labelTip; // +0xd0
    MMUIActivityIndicatorView * m_activityIndicatorView; // +0xd8
    UIView * m_code; // +0xe0
    UITextField * m_hiddenTextField; // +0xe8
    BOOL m_bShowingHeads; // +0xf0
    BOOL m_bConfirming; // +0xf1
    BOOL m_bEnabled; // +0xf2
    BOOL m_bWaitingForLocation; // +0xf3
    BOOL m_bWaitingForClearNumber; // +0xf4
    BOOL m_bWaitingForClearAll; // +0xf5
    BOOL m_bDonotQuit; // +0xf6
    BOOL m_bRetry; // +0xf7
    BOOL m_bEntering; // +0xf8
    BOOL m_bIsNeedToReport; // +0xf9
    WCUIAlertView * _currAlertView; // +0x100
    BOOL _isRequestForAccuracyAuthorization; // +0x108
    BOOL _enterBackground; // +0x109
    int _currentAuthLogType; // +0x10c
}
- (BOOL)isForbidPageSheet;
- (id)init;
- (void)initLocationAuthoriztion;
- (void)initNotification;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)doCleanWhenDismiss;
- (void)onRadarSearchViewClose:(BOOL)arg1;
- (void)OnRadarSearchCreateRoomCancel;
- (void)updateNumberLabels;
- (void)clearChar;
- (void)onTextFieldChanged;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)addChar:(id)arg1;
- (void)deleteChar;
- (void)clickBtn;
- (void)showTipView:(id)arg1 withLoading:(BOOL)arg2;
- (void)showTipView:(id)arg1 title:(id)arg2 withLoading:(BOOL)arg3;
- (void)setControlEnable:(BOOL)arg1;
- (void)setControlEnabled;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)OnRetrieveLocationTimeout;
- (void)OnRetrieveLocationOk;
- (void)genNumberLabelWithIndex:(unsigned int)arg1;
- (CGRect)getNumberBtnFrameAt:(unsigned int)arg1;
- (void)genNumberBtnWithIndex:(unsigned int)arg1;
- (void)genNumberBtnSpaceLine;
- (void)initKeyBoard;
- (void)iniCodeView;
- (void)updateCreateRoomView;
- (void)initCreateRoomView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)checkPwd;
- (void)startCreateRoom;
- (void)updateConfirmView;
- (void)initConfirmView;
- (void)enterConfirmView:(id)arg1;
- (BOOL)isEqualMember:(id)arg1 withMember:(id)arg2;
- (CGRect)getFrameAtIndex:(unsigned int)arg1;
- (void)showOneMember;
- (void)showMember:(id)arg1;
- (BOOL)sendRequest:(unsigned int)arg1;
- (void)getPreEnterRoomMemberList;
- (void)joinChatRoom;
- (void)scrollViewDidScroll:(id)arg1;
- (void)HandleCreateChatRoomResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCheckPwdResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleEnterRoomResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)tryRequestTemporaryFullAccuracy;
- (void)showAlertForLocationAuthorization;
- (void)closeRadarSearchViewAnimated:(BOOL)arg1;
- (void)goToSettingLocationAuthorization;
- (void)setCurrentAuthLogType:(int)arg1;
- (int)currentAuthLogType;
- (void).cxx_destruct;
@end
