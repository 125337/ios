@interface WCOutFacade : MMUserService <IFriendListMgrExt, IWCOutCallExt, IMsgExt, IMMWebViewControllerDeepLinkExt, IVOIPUILogicMgrExt, WCOutAddressBookLogicDelegate, MonoServiceMsgLogicDelegate, MMTipsViewControllerDelegate, IVOIPExt, IRecordPermissionCheckExt, MMServiceProtocol>
{
    NSMutableDictionary * m_hotCountryCodeDic; // +0x8
    OrderedDictionary * m_lastCallItemOrderDic; // +0x10
    NSMutableArray * m_wcoutContactItemArray; // +0x18
    NSMutableDictionary * m_phoneNumToWCOutContact; // +0x20
    unsigned int m_lastDownloadMFriendListTime; // +0x28
    unsigned int m_lastReportContactTime; // +0x2c
    unsigned int _showTimesWcoMainFromVoip; // +0x30
    unsigned int _showTimesFeedback; // +0x34
    PhoneNumberFormatLogic * _m_phoneNumberFormatLogic; // +0x38
    WCOutCountryCodeLogic * _m_countryCodeLogic; // +0x40
    WCOutAddressBookLogic * _m_addressBookLogic; // +0x48
    WCOutDataBase * _m_dataBase; // +0x50
    NSRecursiveLock * _m_oLock; // +0x58
    MMTimer * _inviteTimer; // +0x60
    WCOutChargeLogic * _chargeLogic; // +0x68
    WCOutCallLogic * _callLogic; // +0x70
    unsigned long long _showlastTsWcoMainFromVoip; // +0x78
    unsigned long long _fromVoipType; // +0x80
    WCOFeedBackTips * _feedbackTips; // +0x88
    unsigned long long _showlastFeedbackTs; // +0x90
}
+ (BOOL)isOpenWCOutPlugin;
+ (BOOL)showWCOut;
+ (BOOL)isWCOSwitchOpen;
+ (unsigned int)getShowWCOReddotType;
+ (id)GetWeChatOutCouponsResponseCache;
+ (void)reportTalkingClickStatWithType:(unsigned long long)arg1;
+ (void)reportRestrictionCountryCode:(id)arg1;
+ (void)reportCallEntraceWithType:(unsigned long long)arg1;
+ (void)reportClickStatWithType:(unsigned long long)arg1;
+ (void)reportClickWithType:(unsigned long long)arg1;
+ (void)reportSearchReportType:(unsigned long long)arg1;
+ (void)reportWechatOutIdKey:(unsigned long long)arg1;
+ (void)reportWCOAccountPageOp:(id)arg1;
+ (void)reportWCORechargePageOp:(id)arg1;
+ (void)reportWCOPurchaseOp:(id)arg1;
+ (void)reportWCOAutoVerify:(id)arg1;
+ (void)reportWCOPackageOp:(id)arg1;
+ (void)reportWCORedDotStat:(unsigned long long)arg1 OperationReddotClickScene:(unsigned long long)arg2 NewUserReddotClickScene:(unsigned long long)arg3 AccountRedDotType:(int)arg4 WCOMsgType:(int)arg5 TabRedDotType:(int)arg6;
+ (void)reportWCOEnterFromVoip:(id)arg1;
+ (void)reportWCOFeedbackOp:(id)arg1;
+ (void)reportWCOWCOActivityInfo:(id)arg1;
+ (void)reportWCOClickMsgType:(id)arg1;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (id)init;
- (void)onServiceInit;
- (BOOL)loadAllData;
- (void)checkNumber:(id)arg1 PureNum:(id)arg2 LastCountryCode:(id)arg3 DialScece:(unsigned long long)arg4;
- (void)pushWCOutDialViewController:(id)arg1 PhoneNum:(id)arg2 DialScece:(unsigned long long)arg3;
- (void)callFullPhoneNumber:(id)arg1 OfContact:(id)arg2 FromViewController:(id)arg3 AndEntrace:(unsigned long long)arg4 CountryCodeFrom:(unsigned long long)arg5;
- (void)callPhoneNumber:(id)arg1 WithCountryCode:(id)arg2 FromViewController:(id)arg3 AndEntrance:(unsigned long long)arg4 CountryCodeFrom:(unsigned long long)arg5;
- (void)callWCOutCallItem:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3 CountryCodeFrom:(unsigned long long)arg4;
- (void)hangUpCall;
- (void)setMute:(BOOL)arg1;
- (void)setSpeaker:(BOOL)arg1;
- (BOOL)isSpeakerMode;
- (BOOL)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (id)GetCurCallItem;
- (id)GetCurPhoneContact;
- (id)GetNeedShowLog;
- (void)playEndingSound;
- (BOOL)isCalling;
- (int)getNetSpeed;
- (void)tryShowWCOFeedBack:(int)arg1 CallSeq:(long long)arg2;
- (BOOL)isWcoActive;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id)getLastRecentCallItems;
- (id)selectAllRecentCallForWCOutContact:(id)arg1;
- (id)selectRecentCallForWCOutContact:(id)arg1 limit:(int)arg2;
- (id)findWCOutContactByPhoneNum:(id)arg1;
- (int)insertRecentCall:(id)arg1;
- (BOOL)deleteRecentCallById:(int)arg1;
- (BOOL)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (BOOL)deleteRecentCallByPhoneContact:(id)arg1;
- (void)deleteLastCallWithPhoneNum:(id)arg1 WithCountryCode:(id)arg2;
- (BOOL)addressBookStatusIsDenied;
- (id)getHotCountryCodeList;
- (id)defaultCoutryCode;
- (id)getAllCountryCodes;
- (BOOL)isRestrictedCountryCode:(id)arg1;
- (BOOL)isValidCountryCode:(id)arg1;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (id)countryNameForCountryCode:(id)arg1;
- (id)countryNameForISOCountryCode:(id)arg1;
- (id)getISOCountryCodeCountryCode:(id)arg1;
- (id)getCarrierCountryCode;
- (id)getLocaleCountryCode;
- (id)getFormatedForFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1;
- (id)getPurePhoneNum:(id)arg1;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (void)reportContactAndRecentContactStat;
- (void)loadHotCountryCode;
- (void)loadLastCallItemsAndHotCountryCodeDic;
- (void)loadAllDataAsync;
- (void)loadWCOutPhoneContactAsync;
- (BOOL)loadWCOutPhoneContactsFromMMPhoneContacts;
- (void)updateWCOutPhoneContactsMMInfoAsync;
- (BOOL)loadWCOutPhoneContactsMMInfo;
- (BOOL)updateWCOutContactsInfoWithMfriendList:(id)arg1;
- (id)createWCOutRecentCallItemByFullPhoneNum:(id)arg1 CountryCode:(id)arg2 FromContact:(id)arg3;
- (id)createWCOutRecentCallItemByCallItem:(id)arg1;
- (void)InternalCallWCoutContact:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3;
- (BOOL)canStartPSTN;
- (id)m_phoneNumberFormatLogic;
- (id)m_countryCodeLogic;
- (id)m_addressBookLogic;
- (id)m_dataBase;
- (id)m_oLock;
- (void)OnCallEndFinish;
- (void)didReceiveInviteGap:(int)arg1;
- (void)stopInviteRegister;
- (void)PhoneContactLoadedComplete;
- (void)PhoneContactLoadedFail;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processWeChatOutMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processWeChatOutConfig:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processWCONotify:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3 Ret:(BOOL *)arg4 NeedCheckBitset:(BOOL *)arg5;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (BOOL)isChargeClosed;
- (BOOL)isChargeRecordClosed;
- (BOOL)isItemWebChargeOpen;
- (BOOL)isItemListWebChargeOpen;
- (BOOL)isClosePurchase;
- (void)gotoChargeViewController;
- (BOOL)insertOrUpdateWcoMsg:(id)arg1;
- (id)getWeChatOutMsgBeginLocalID:(unsigned int)arg1 limit:(int)arg2;
- (void)OnNoAnswer:(id)arg1;
- (void)OnTimeOut:(id)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)setM_phoneNumberFormatLogic:(id)arg1;
- (void)setM_countryCodeLogic:(id)arg1;
- (void)setM_addressBookLogic:(id)arg1;
- (void)setM_dataBase:(id)arg1;
- (void)setM_oLock:(id)arg1;
- (id)inviteTimer;
- (void)setInviteTimer:(id)arg1;
- (id)chargeLogic;
- (void)setChargeLogic:(id)arg1;
- (id)callLogic;
- (void)setCallLogic:(id)arg1;
- (unsigned int)showTimesWcoMainFromVoip;
- (void)setShowTimesWcoMainFromVoip:(unsigned int)arg1;
- (unsigned long long)showlastTsWcoMainFromVoip;
- (void)setShowlastTsWcoMainFromVoip:(unsigned long long)arg1;
- (unsigned long long)fromVoipType;
- (void)setFromVoipType:(unsigned long long)arg1;
- (id)feedbackTips;
- (void)setFeedbackTips:(id)arg1;
- (unsigned int)showTimesFeedback;
- (void)setShowTimesFeedback:(unsigned int)arg1;
- (unsigned long long)showlastFeedbackTs;
- (void)setShowlastFeedbackTs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
