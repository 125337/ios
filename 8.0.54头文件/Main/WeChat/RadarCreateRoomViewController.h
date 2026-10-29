@interface RadarCreateRoomViewController : MMUIViewController <ILocationMgrExt, PBMessageObserverDelegate, IRadarSearchExt, UIScrollViewDelegate>
{
    NSMutableArray * m_arrHeads; // +0x68
    NSMutableArray * m_arrWillShowMember; // +0x70
    NSString * m_nsTicket; // +0x78
    UILabel * m_titleLabel; // +0x80
    UIView * m_topLine; // +0x88
    UIView * m_bottomLine; // +0x90
    UIView * m_blurView; // +0x98
    MMScrollView * m_scrollView; // +0xa0
    UIButton * m_enterBtn; // +0xa8
    UIImageView * m_emptyHead; // +0xb0
    UILabel * m_labelSmallTip; // +0xb8
    UIView * m_keyBoard; // +0xc0
    UILabel * m_labelTip; // +0xc8
    MMUIActivityIndicatorView * m_activityIndicatorView; // +0xd0
    UIView * m_code; // +0xd8
    UITextField * m_hiddenTextField; // +0xe0
    BOOL m_bShowingHeads; // +0xe8
    BOOL m_bConfirming; // +0xe9
    BOOL m_bEnabled; // +0xea
    BOOL m_bWaitingForLocation; // +0xeb
    BOOL m_bWaitingForClearNumber; // +0xec
    BOOL m_bWaitingForClearAll; // +0xed
    BOOL m_bDonotQuit; // +0xee
    BOOL m_bRetry; // +0xef
    BOOL m_bEntering; // +0xf0
    BOOL m_bIsNeedToReport; // +0xf1
    WCUIAlertView * _currAlertView; // +0xf8
    BOOL _isRequestForAccuracyAuthorization; // +0x100
    BOOL _enterBackground; // +0x101
    int _currentAuthLogType; // +0x104
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

