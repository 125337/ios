@interface WCPayControlData : NSObject
{
    NSString * nsCardHodlerName; // +0x8
    NSString * nsCardHodlerCredit; // +0x10
    NSString * nsCardHodlerIdentifyCard; // +0x18
    NSString * nsCardNumber; // +0x20
    NSString * nsPhoneNumber; // +0x28
    NSString * nsResetPhoneNumber; // +0x30
    NSString * nsResetCVVCode; // +0x38
    NSString * nsCVVCode; // +0x40
    NSString * nsResetValidDate; // +0x48
    NSString * nsValidDate; // +0x50
    NSString * nsPhoneVerifyCode; // +0x58
    NSString * nsPayPasswd; // +0x60
    NSString * nsRepeatPayPasswd; // +0x68
    NSString * nsVerifiedPasswd; // +0x70
    NSString * nsSaveBalanceMoney; // +0x78
    NSString * nsFetchBalanceMoney; // +0x80
    NSString * nsTransferMoney; // +0x88
    NSString * nsTransferExtMoney; // +0x90
    NSString * nsFetchArriveTime; // +0x98
    BOOL m_bAutoFilledCardInfo; // +0xa0
    NSString * nsTransferRemark; // +0xa8
    NSString * nsWCLanguage; // +0xb0
    NSString * nsFirstName; // +0xb8
    NSString * nsLastName; // +0xc0
    NSString * nsCountry; // +0xc8
    NSString * nsArea; // +0xd0
    NSString * nsCity; // +0xd8
    NSString * nsAddress; // +0xe0
    NSString * nsPhoneNumber_Overseas; // +0xe8
    NSString * nsZipCode; // +0xf0
    NSString * nsEmail; // +0xf8
    NSString * nsCreditPayFirstName; // +0x100
    NSString * nsCreditPayLast4IDNumber; // +0x108
    NSString * nsCreditPayName; // +0x110
    NSString * nsCreditPayIDNumber; // +0x118
    unsigned int uiFlag; // +0x120
    unsigned int uiPayScene; // +0x124
    unsigned int uiBindScene; // +0x128
    unsigned int uiJSApiPayScene; // +0x12c
    NSString * nsOrderID; // +0x130
    NSString * nsUUID; // +0x138
    NSString * nsImportCode; // +0x140
    NSString * nsProductsID; // +0x148
    NSString * nsBindSerial; // +0x150
    NSString * m_nsToken; // +0x158
    NSString * nsServiceAppID; // +0x160
    NSString * nsServiceAppUserName; // +0x168
    NSString * nsServiceAppName; // +0x170
    NSString * nsServiceAppLogoUrl; // +0x178
    NSString * nsServiceDetail; // +0x180
    NSString * nsServiceSubscribeUrl; // +0x188
    NSString * nsWapPayUrl; // +0x190
    NSString * nsShareToFriendURL; // +0x198
    NSString * nsPaidSuccessDetail; // +0x1a0
    int uiServiceSubscribeStrategy; // +0x1a8
    NSString * nsAppName; // +0x1b0
    NSString * nsAppID; // +0x1b8
    NSString * nsAppSource; // +0x1c0
    WCPayAppAuthRequestStruct * structAppAuthRequest; // +0x1c8
    WCPayBindUserInfo * bindUserInfo; // +0x1d0
    unsigned int uiCardBankTag; // +0x1d8
    NSError * m_oPaidError; // +0x1e0
    WCPayAuthenticationPay * m_structAuthenticationPay; // +0x1e8
    WCPayAuthenticationPayVerifySMSStruct * m_structAuthenticationPayVerifySMS; // +0x1f0
    WCPayResetPasswordInfo * m_structResetPayPasswordInfo; // +0x1f8
    NSArray * m_arrTenpayImportBindCard; // +0x200
    TenpayBindCardInfo * m_structSelectedTenpayBindCardInfo; // +0x208
    TenpayBindCardSubscribeAppInfo * m_structSelectedTenpayBindCardSubscribeAppInfo; // +0x210
    WCPayBindInfo * m_structBindInfo; // +0x218
    NSArray * m_arrBindedCard; // +0x220
    NSArray * m_arrHistoryCard; // +0x228
    NSArray * m_arrVirtualNoBindCard; // +0x230
    NSArray * m_arrWXBorrowMoneyItemList; // +0x238
    WCPayBindCardInfo * m_structSelectedCardInfo; // +0x240
    WCPayBindCardInfo * m_structSelectedResetBalanceTelCardInfo; // +0x248
    WCPayUserInfo * m_structUserInfo; // +0x250
    WCPaySwitchInfo * m_structSwitchInfo; // +0x258
    WCPayBalanceInfo * m_structBalanceInfo; // +0x260
    WCPayNoticeInfo * m_structNoticeInfo; // +0x268
    WCPayCardBinInfo * m_structSelectedCardType; // +0x270
    NSArray * m_arrAvailableBank; // +0x278
    WCPayIAPOrderDetail * m_structIAPOrderDetail; // +0x280
    WCPayMultiOrderDetail * m_structOrderDetail; // +0x288
    NSMutableArray * m_arrStatusChangeOrderArray; // +0x290
    NSMutableArray * m_arrOrderArray; // +0x298
    NSMutableArray * m_arrNotifyMsgArray; // +0x2a0
    WCPayAuthenticationPayStatusStruct * m_structAuthenticationPayStatus; // +0x2a8
    WCPayVirtualNoBindCard * m_structVirtualCardInfo; // +0x2b0
    NSDate * startPayDate; // +0x2b8
    NSDate * startVerifySMSDate; // +0x2c0
    BOOL bNeedGetSMSAgain; // +0x2c8
    NSString * nsOfflinePayQRCode; // +0x2d0
    NSString * nsOfflinepayBarCode; // +0x2d8
    BOOL m_bNeedOfflinePayLoading; // +0x2e0
    long long uiOfflinePayLimit; // +0x2e8
    long long offlinePayAmount; // +0x2f0
    long long offlinePayNumber; // +0x2f8
    long long uiOfflinePayChangedLimit; // +0x300
    WCPayOfflinePayChangeLimitFeeRequestStruct * m_structWCPayOfflinePayChangeLimitFeeRequestStruct; // +0x308
    NSString * nsOfflinePayConfirmViewTips; // +0x310
    unsigned int uiInitalMoney; // +0x318
    int m_enWCPayOfflinePayCodeDisplayScene; // +0x31c
    BOOL m_bBankUser; // +0x320
    NSString * m_nsSessionKey; // +0x328
    BOOL m_bNeedBind; // +0x330
    NSString * m_nsIDNumberMask; // +0x338
    NSString * m_nsNameMask; // +0x340
    NSArray * m_arrIncreaseLimitQuestionArray; // +0x348
    WCPayCreditCardInfo * m_sturctWCPayCreditCardInfo; // +0x350
    unsigned int m_uiQueryQuestionCnt; // +0x358
    CContact * m_oSelectedContact; // +0x360
    NSString * m_nsSelectedUserNameFromQRCode; // +0x368
    NSString * m_nsSelectedTruthNameFromQRCode; // +0x370
    NSString * m_nsControlTransationID; // +0x378
    NSString * m_nsTransferID; // +0x380
    NSString * m_nsCurrentUserName; // +0x388
    NSString * m_nsTranferMoneyString; // +0x390
    unsigned long long m_uiTransferInvalidTime; // +0x398
    unsigned int m_uiEffectiveDate; // +0x3a0
    WCPayTransferPrepayRequestStruct * m_oWCPayTransferPrepayRequestStruct; // +0x3a8
    NSMutableArray * m_arrFacingReceiveMoneyPayer; // +0x3b0
    unsigned int m_uiStepInFacingReceiveViewTimestamp; // +0x3b8
    NSString * m_nsFixedAmountReceiveMoneyDesc; // +0x3c0
    long long m_llFixedAmountReceiveMoneyTotalMoney; // +0x3c8
    int m_enWCPayFacingReceiveMoneyScene; // +0x3d0
    NSString * m_nsFacingPaidID; // +0x3d8
    NSString * m_nsInterruptDesc; // +0x3e0
    unsigned int m_uiHasUnarriveMoney; // +0x3e8
    unsigned int m_uiChargeFee; // +0x3ec
    unsigned int m_uiAccFee; // +0x3f0
    unsigned int m_uiFeeLimit; // +0x3f4
    unsigned int m_uiRemainFee; // +0x3f8
    unsigned int m_uiExceedFee; // +0x3fc
    NSString * m_nsChargeRate; // +0x400
    NSString * m_nsTransferInterruptChargeDesc; // +0x408
    unsigned int m_uiUsedFee; // +0x410
    BOOL m_isShowCharge; // +0x414
    NSString * m_nsChargeDesc; // +0x418
    NSString * m_nsChargeShortDesc; // +0x420
    unsigned int m_uiShortRemainFee; // +0x428
    BOOL m_isSender; // +0x42c
    BOOL m_isOpenIM; // +0x42d
    unsigned long long m_subChannelId; // +0x430
    NSString * m_c2c_sender_title; // +0x438
    NSString * m_c2c_receiver_title; // +0x440
    NSString * m_c2c_des; // +0x448
    NSString * m_c2c_sender_des; // +0x450
    NSString * m_c2c_receiver_des; // +0x458
    NSString * m_c2c_url; // +0x460
    NSString * m_c2c_templateId; // +0x468
    unsigned int m_c2c_sceneId; // +0x470
    WCPayLoanEntryInfo * m_loanEntryInfo; // +0x478
    NSString * m_loanJsApiToken; // +0x480
    unsigned int m_uiPayChannel; // +0x488
    long long m_uiPayEntry; // +0x490
    unsigned int m_uiRealnameActionFlag; // +0x498
    NSString * m_nsRealnameToken; // +0x4a0
    WCPayWalletInfo * m_walletInfo; // +0x4a8
    NSArray * m_arrAvailableWalletInfo; // +0x4b0
    NSDictionary * m_dicBanners; // +0x4b8
    NSString * m_nsTransferReceiverTrueName; // +0x4c0
    BOOL isAutoDeduct; // +0x4c8
    WCPayRealnameGuideInfo * realnameInfo; // +0x4d0
    long long realnameScene; // +0x4d8
    BOOL bNeedInputNewTelToResetBalanceTel; // +0x4e0
    BOOL _bIsSmsVerifyAddCard; // +0x4e1
    BOOL _m_bTouchIDAuthOrder; // +0x4e2
    BOOL _m_realnameIsMinorBindcard; // +0x4e3
    BOOL _m_blockUseCaseStopWhenAddCardSuccess; // +0x4e4
    BOOL _openChangeRealName; // +0x4e5
    BOOL _bIsBindNewCardToPay; // +0x4e6
    BOOL _m_isShowArrow; // +0x4e7
    BOOL _bIsFreePayment; // +0x4e8
    BOOL _bIsResetPwdFromPayManage; // +0x4e9
    BOOL _bIsChargedLQTInBalance; // +0x4ea
    BOOL _fromTransCollection; // +0x4eb
    unsigned int m_pay_msg_type; // +0x4ec
    int _m_enWCPayFacingReceiveMoneyRegion; // +0x4f0
    unsigned int _m_uiWeAppEnterScene; // +0x4f4
    unsigned int _m_uiFetchChargeFee; // +0x4f8
    unsigned int _scanScene; // +0x4fc
    unsigned int _f2fAmount; // +0x500
    unsigned int _m_walletType; // +0x504
    int _m_currency; // +0x508
    unsigned int _transferReSendMsgFromScene; // +0x50c
    unsigned int _tpaCountry; // +0x510
    unsigned int _funclistType; // +0x514
    int _qrcode_level; // +0x518
    int _fixed_qrcode_level; // +0x51c
    unsigned int _pwdEncryptMode; // +0x520
    int _sessionChatType; // +0x524
    int _sessionSendType; // +0x528
    unsigned int _recvChannelType; // +0x52c
    unsigned int _palmSideLimit; // +0x530
    unsigned int _needUploadPalmCgi; // +0x534
    unsigned int _needPalmInfo; // +0x538
    unsigned int _palmCaptureMode; // +0x53c
    long long m_placeHolderMoney; // +0x540
    NSString * m_nsTransferMoneySuccessMsgContent; // +0x548
    WCPayCardBinInfo * m_structSelectedResetBalanceTelCardType; // +0x550
    NSArray * m_arrBalanceNotice; // +0x558
    NSArray * m_arrFetchNotice; // +0x560
    WCPayPayMenuArrayInfo * m_payMenuArrayInfo; // +0x568
    NSString * _nsCardHolderCreValidTime; // +0x570
    NSString * _nsCardHolderCreEffectTime; // +0x578
    NSString * _nsCardHolderRenewalTime; // +0x580
    NSString * _nsCardHolderBirthDay; // +0x588
    NSString * _gender; // +0x590
    NSString * _nsAdministrationAddress; // +0x598
    WCPayLQTInfo * _m_structLqtInfo; // +0x5a0
    WCPayBillEntryInfo * _m_billEntryInfo; // +0x5a8
    WCPayFetchInfo * _m_structFetchInfo; // +0x5b0
    NSArray * _offlinePayCardIcons; // +0x5b8
    WCPayQRCodeCollectionFixedAmountData * _fixedAmountCollectionData; // +0x5c0
    NSString * _m_nsFacingReceivePayerDesc; // +0x5c8
    NSString * _m_nsWeAppCookie; // +0x5d0
    double _expiredTimeToPopOfflinePayForCard; // +0x5d8
    id /* block */ _offlinePayReturnBlock; // +0x5e0
    NSDictionary * _shareCardStatDic; // +0x5e8
    NSString * _m_nsFetchChargeWording; // +0x5f0
    long long _realnameGuideType; // +0x5f8
    WCPayFetchCashierWithField * _fetchCasher; // +0x600
    NSString * _placeorderSucSign; // +0x608
    NSString * _paySucExtend; // +0x610
    NSString * _f2fId; // +0x618
    NSString * _transId; // +0x620
    ExposureInfo * _exposureInfo; // +0x628
    WCPaySecurityControlData * _securityData; // +0x630
    NSString * _m_uifaceTofaceName; // +0x638
    NSString * _m_uifaceTofaceDescTitle; // +0x640
    NSString * _m_uifaceTofacePayerDescTitle; // +0x648
    WCPayControlDataGroupPayData * _groupPayData; // +0x650
    NSString * _m_uiBalanceMobile; // +0x658
    NSArray * _balanceMobileInfos; // +0x660
    BalanceMobileInfo * _selectedBalanceMobileInfo; // +0x668
    GetBanPayMobileInfoResponse * _banPayMobileInfoResponse; // +0x670
    NSString * _cre_tail; // +0x678
    long long _messageVerifyType; // +0x680
    WCPayBindCardInfo * _autoDeductSelectedCardInfo; // +0x688
    unsigned long long _startTrackTimeInMs; // +0x690
    unsigned long long _payOrReceiveFromScene; // +0x698
    WCPayGetUserExInfoCgiResponse * _getUserExInfoCgiResponse; // +0x6a0
    WCPaySetUserExInfoCgiRequest * _setUserExInfoRequest; // +0x6a8
    WCPayBindCardListApplyNewCardInfo * _m_payApplyNewCardInfo; // +0x6b0
    CMessageWrap * _m_oSelectedMessageWrap; // +0x6b8
    NSString * _m_feeType; // +0x6c0
    unsigned long long _m_transferTotalAmount; // +0x6c8
    NSString * _m_receiverNickName; // +0x6d0
    NSString * _m_receiverUserName; // +0x6d8
    NSString * _m_payerNickname; // +0x6e0
    NSString * _m_f2fRecevieMultipleWalletTitle; // +0x6e8
    NSString * _m_f2fReceiveBottomDetailTitle; // +0x6f0
    WCPayBannerNotice * _m_bannerNotice; // +0x6f8
    NSString * _m_tarnsferPayerUserName; // +0x700
    WCPayLQTControlData * _lqtControlData; // +0x708
    WCPayBankPriority * _bank_priority; // +0x710
    GetTransferWordingResponse * _delayTransferWordingResponse; // +0x718
    unsigned long long _delayTransferViewEntryScene; // +0x720
    NSString * _m_nsF2FMaskTrueName; // +0x728
    NSString * _m_nsF2FReciverQRCode; // +0x730
    NSMutableArray * _m_f2fRightBarItems; // +0x738
    MenuItem * _m_f2fBottomDetailItem; // +0x740
    NSString * _m_nsBottomIconUrl; // +0x748
    CgiSaveQrcodeResp * _m_f2fSaveQRCodeResp; // +0x750
    NSString * _m_nsMsgSvrId; // +0x758
    WCPayMchQRCodeControlData * _mchQRCodeData; // +0x760
    WCPayBizF2FControlData * _bizF2FControlData; // +0x768
    WCPayF2FControlData * _m_f2fControlData; // +0x770
    WCPayECardControlData * _eCardControlData; // +0x778
    WCPayQRCodeRewardControlData * _qrcodeRewardData; // +0x780
    WCPayTransferMoneyData * _transferMoneyData; // +0x788
    WCPayHoneyPayControlData * _honeyPayData; // +0x790
    WCPayTransToBankCardData * _m_transToBankCardData; // +0x798
    NSString * _m_nsTransToBankBillId; // +0x7a0
    OperationResp * _m_nsT2BCOperationResp; // +0x7a8
    QueryDetailResp * _m_t2bcQueryDetailResp; // +0x7b0
    WCPayPayResponseRetryInfo * _retry_pay_info; // +0x7b8
    CgiGetQrcodeUrlV2Resp * _m_f2fQrcodeResp; // +0x7c0
    NSString * _mobile_area; // +0x7c8
    NSString * _forget_pwd_url; // +0x7d0
    NSString * _checkNameTitle; // +0x7d8
    NSString * _checkNameWording; // +0x7e0
    NSString * _checkNameDisplayName; // +0x7e8
    NSString * _checkNameErrorTitle; // +0x7f0
    NSString * _checkNameErrorContent; // +0x7f8
    NSString * _checkNameSign; // +0x800
    unsigned long long _checkNameMessageType; // +0x808
    WCPayJumpRemindInfo * _jumpRemindInfo; // +0x810
    PlanIndexResp * _planIndexResp; // +0x818
    PreAddPlanResp * _preAddPlanResp; // +0x820
    AddPlanReq * _addPlanData; // +0x828
    PlanIndexResp_PlanItem * _selectedPlanItem; // +0x830
    ManagePlanReq * _managePlanData; // +0x838
    ModifyPlanReq * _modifyPlanData; // +0x840
    WCPayDynamicActionEntry * _lqtFetchActionEntry; // +0x848
    NSString * _currentWeAppAppId; // +0x850
    GetPayFunctionSwitchListResponse * _funcSwitchListResponse; // +0x858
    WCPayBalanceChargeLQTInfo * _balanceChargeLQTInfo; // +0x860
    long long _patternLockScene; // +0x868
    NSString * _f2fExtendInfo; // +0x870
    NSString * _selectedTransferChatroomUsername; // +0x878
    MerchantPayGetQRCodeInfoResp * _merchantPayQRCodeInfoResp; // +0x880
    MerchantPayPlaceOrderResp * _merchantPayPlaceOrderResp; // +0x888
    unsigned long long _merchantPayTotalAmount; // +0x890
    NSString * _merchantPayPayerRemark; // +0x898
    NSString * _sessionPaySenderUserName; // +0x8a0
    NSString * _sessionPaySenderMsgId; // +0x8a8
    NSString * _nfcCardType; // +0x8b0
    NSString * _nfcCardId; // +0x8b8
    SimplePKPass * _pkPass; // +0x8c0
    NFCCardsQueryNFCCardInfoResponse * _nfcCardInfoResponse; // +0x8c8
    NSString * _collectPalmSessionId; // +0x8d0
    NSString * _palmSdkConfig; // +0x8d8
}
- (id)init;
- (void)dealloc;
- (BOOL)isPayWithBalance;
- (BOOL)isPayWithLQT;
- (BOOL)isBindedBankCard;
- (id)defualtCardInfo;
- (BOOL)isMaskTrueNameValid;
- (id)getBalanceCardInfo;
- (BOOL)isBuyLQTScene;
- (id)afterPlaceOrderCommReq;
- (id)transIdForBizF2F;
- (id)transIdForF2F;
- (id)paySuccessTransactionId;
- (id)sortedCardArray:(id)arg1;
- (id)nsCardHodlerName;
- (void)setNsCardHodlerName:(id)arg1;
- (id)nsCardHodlerCredit;
- (void)setNsCardHodlerCredit:(id)arg1;
- (id)nsCardHodlerIdentifyCard;
- (void)setNsCardHodlerIdentifyCard:(id)arg1;
- (id)nsCardNumber;
- (void)setNsCardNumber:(id)arg1;
- (id)nsPhoneNumber;
- (void)setNsPhoneNumber:(id)arg1;
- (id)nsResetPhoneNumber;
- (void)setNsResetPhoneNumber:(id)arg1;
- (id)nsCVVCode;
- (void)setNsCVVCode:(id)arg1;
- (id)nsResetCVVCode;
- (void)setNsResetCVVCode:(id)arg1;
- (id)nsResetValidDate;
- (void)setNsResetValidDate:(id)arg1;
- (id)nsValidDate;
- (void)setNsValidDate:(id)arg1;
- (id)nsPhoneVerifyCode;
- (void)setNsPhoneVerifyCode:(id)arg1;
- (id)nsSaveBalanceMoney;
- (void)setNsSaveBalanceMoney:(id)arg1;
- (id)nsFetchBalanceMoney;
- (void)setNsFetchBalanceMoney:(id)arg1;
- (id)nsFetchArriveTime;
- (void)setNsFetchArriveTime:(id)arg1;
- (BOOL)m_bAutoFilledCardInfo;
- (void)setM_bAutoFilledCardInfo:(BOOL)arg1;
- (id)nsOrderID;
- (void)setNsOrderID:(id)arg1;
- (id)nsUUID;
- (void)setNsUUID:(id)arg1;
- (id)nsProductsID;
- (void)setNsProductsID:(id)arg1;
- (id)nsImportCode;
- (void)setNsImportCode:(id)arg1;
- (id)nsPayPasswd;
- (void)setNsPayPasswd:(id)arg1;
- (id)nsRepeatPayPasswd;
- (void)setNsRepeatPayPasswd:(id)arg1;
- (unsigned int)uiFlag;
- (void)setUiFlag:(unsigned int)arg1;
- (id)nsVerifiedPasswd;
- (void)setNsVerifiedPasswd:(id)arg1;
- (unsigned int)uiPayScene;
- (void)setUiPayScene:(unsigned int)arg1;
- (unsigned int)uiBindScene;
- (void)setUiBindScene:(unsigned int)arg1;
- (unsigned int)uiJSApiPayScene;
- (void)setUiJSApiPayScene:(unsigned int)arg1;
- (id)nsAppName;
- (void)setNsAppName:(id)arg1;
- (id)nsAppID;
- (void)setNsAppID:(id)arg1;
- (id)nsAppSource;
- (void)setNsAppSource:(id)arg1;
- (id)structAppAuthRequest;
- (void)setStructAppAuthRequest:(id)arg1;
- (id)nsServiceAppID;
- (void)setNsServiceAppID:(id)arg1;
- (id)nsServiceAppName;
- (void)setNsServiceAppName:(id)arg1;
- (int)uiServiceSubscribeStrategy;
- (void)setUiServiceSubscribeStrategy:(int)arg1;
- (id)nsServiceAppLogoUrl;
- (void)setNsServiceAppLogoUrl:(id)arg1;
- (id)nsServiceAppUserName;
- (void)setNsServiceAppUserName:(id)arg1;
- (id)nsServiceDetail;
- (void)setNsServiceDetail:(id)arg1;
- (id)nsServiceSubscribeUrl;
- (void)setNsServiceSubscribeUrl:(id)arg1;
- (id)nsPaidSuccessDetail;
- (void)setNsPaidSuccessDetail:(id)arg1;
- (id)nsShareToFriendURL;
- (void)setNsShareToFriendURL:(id)arg1;
- (unsigned int)uiCardBankTag;
- (void)setUiCardBankTag:(unsigned int)arg1;
- (id)nsWCLanguage;
- (void)setNsWCLanguage:(id)arg1;
- (id)nsFirstName;
- (void)setNsFirstName:(id)arg1;
- (id)nsLastName;
- (void)setNsLastName:(id)arg1;
- (id)nsCountry;
- (void)setNsCountry:(id)arg1;
- (id)nsArea;
- (void)setNsArea:(id)arg1;
- (id)nsCity;
- (void)setNsCity:(id)arg1;
- (id)nsAddress;
- (void)setNsAddress:(id)arg1;
- (id)nsPhoneNumber_Overseas;
- (void)setNsPhoneNumber_Overseas:(id)arg1;
- (id)nsZipCode;
- (void)setNsZipCode:(id)arg1;
- (id)nsEmail;
- (void)setNsEmail:(id)arg1;
- (id)nsCreditPayIDNumber;
- (void)setNsCreditPayIDNumber:(id)arg1;
- (id)nsCreditPayName;
- (void)setNsCreditPayName:(id)arg1;
- (id)nsCreditPayFirstName;
- (void)setNsCreditPayFirstName:(id)arg1;
- (id)nsCreditPayLast4IDNumber;
- (void)setNsCreditPayLast4IDNumber:(id)arg1;
- (id)bindUserInfo;
- (void)setBindUserInfo:(id)arg1;
- (id)m_nsToken;
- (void)setM_nsToken:(id)arg1;
- (id)m_arrWXBorrowMoneyItemList;
- (void)setM_arrWXBorrowMoneyItemList:(id)arg1;
- (id)m_arrBindedCard;
- (void)setM_arrBindedCard:(id)arg1;
- (id)m_arrHistoryCard;
- (void)setM_arrHistoryCard:(id)arg1;
- (id)m_structSelectedTenpayBindCardInfo;
- (void)setM_structSelectedTenpayBindCardInfo:(id)arg1;
- (id)m_arrTenpayImportBindCard;
- (void)setM_arrTenpayImportBindCard:(id)arg1;
- (id)m_structSelectedTenpayBindCardSubscribeAppInfo;
- (void)setM_structSelectedTenpayBindCardSubscribeAppInfo:(id)arg1;
- (id)m_structSelectedCardInfo;
- (void)setM_structSelectedCardInfo:(id)arg1;
- (id)m_structSelectedCardType;
- (void)setM_structSelectedCardType:(id)arg1;
- (id)m_structUserInfo;
- (void)setM_structUserInfo:(id)arg1;
- (id)m_structBalanceInfo;
- (void)setM_structBalanceInfo:(id)arg1;
- (id)m_structSwitchInfo;
- (void)setM_structSwitchInfo:(id)arg1;
- (id)m_structNoticeInfo;
- (void)setM_structNoticeInfo:(id)arg1;
- (id)m_structIAPOrderDetail;
- (void)setM_structIAPOrderDetail:(id)arg1;
- (id)m_structOrderDetail;
- (void)setM_structOrderDetail:(id)arg1;
- (id)m_arrAvailableBank;
- (void)setM_arrAvailableBank:(id)arg1;
- (id)m_structAuthenticationPay;
- (void)setM_structAuthenticationPay:(id)arg1;
- (id)m_structAuthenticationPayVerifySMS;
- (void)setM_structAuthenticationPayVerifySMS:(id)arg1;
- (id)m_structBindInfo;
- (void)setM_structBindInfo:(id)arg1;
- (id)m_structVirtualCardInfo;
- (void)setM_structVirtualCardInfo:(id)arg1;
- (id)m_structResetPayPasswordInfo;
- (void)setM_structResetPayPasswordInfo:(id)arg1;
- (id)m_arrOrderArray;
- (void)setM_arrOrderArray:(id)arg1;
- (id)m_arrNotifyMsgArray;
- (void)setM_arrNotifyMsgArray:(id)arg1;
- (id)m_arrStatusChangeOrderArray;
- (void)setM_arrStatusChangeOrderArray:(id)arg1;
- (id)m_structAuthenticationPayStatus;
- (void)setM_structAuthenticationPayStatus:(id)arg1;
- (id)startPayDate;
- (void)setStartPayDate:(id)arg1;
- (id)startVerifySMSDate;
- (void)setStartVerifySMSDate:(id)arg1;
- (BOOL)bNeedGetSMSAgain;
- (void)setBNeedGetSMSAgain:(BOOL)arg1;
- (id)nsOfflinePayQRCode;
- (void)setNsOfflinePayQRCode:(id)arg1;
- (id)nsOfflinepayBarCode;
- (void)setNsOfflinepayBarCode:(id)arg1;
- (BOOL)m_bNeedOfflinePayLoading;
- (void)setM_bNeedOfflinePayLoading:(BOOL)arg1;
- (id)m_structWCPayOfflinePayChangeLimitFeeRequestStruct;
- (void)setM_structWCPayOfflinePayChangeLimitFeeRequestStruct:(id)arg1;
- (long long)uiOfflinePayLimit;
- (void)setUiOfflinePayLimit:(long long)arg1;
- (long long)offlinePayAmount;
- (void)setOfflinePayAmount:(long long)arg1;
- (long long)offlinePayNumber;
- (void)setOfflinePayNumber:(long long)arg1;
- (long long)uiOfflinePayChangedLimit;
- (void)setUiOfflinePayChangedLimit:(long long)arg1;
- (id)nsOfflinePayConfirmViewTips;
- (void)setNsOfflinePayConfirmViewTips:(id)arg1;
- (unsigned int)uiInitalMoney;
- (void)setUiInitalMoney:(unsigned int)arg1;
- (int)m_enWCPayOfflinePayCodeDisplayScene;
- (void)setM_enWCPayOfflinePayCodeDisplayScene:(int)arg1;
- (BOOL)m_bBankUser;
- (void)setM_bBankUser:(BOOL)arg1;
- (id)m_arrVirtualNoBindCard;
- (void)setM_arrVirtualNoBindCard:(id)arg1;
- (id)m_nsSessionKey;
- (void)setM_nsSessionKey:(id)arg1;
- (BOOL)m_bNeedBind;
- (void)setM_bNeedBind:(BOOL)arg1;
- (id)m_arrIncreaseLimitQuestionArray;
- (void)setM_arrIncreaseLimitQuestionArray:(id)arg1;
- (id)m_nsIDNumberMask;
- (void)setM_nsIDNumberMask:(id)arg1;
- (id)m_nsNameMask;
- (void)setM_nsNameMask:(id)arg1;
- (id)m_sturctWCPayCreditCardInfo;
- (void)setM_sturctWCPayCreditCardInfo:(id)arg1;
- (unsigned int)m_uiQueryQuestionCnt;
- (void)setM_uiQueryQuestionCnt:(unsigned int)arg1;
- (id)nsTransferMoney;
- (void)setNsTransferMoney:(id)arg1;
- (id)m_oSelectedContact;
- (void)setM_oSelectedContact:(id)arg1;
- (long long)m_placeHolderMoney;
- (void)setM_placeHolderMoney:(long long)arg1;
- (id)m_nsSelectedUserNameFromQRCode;
- (void)setM_nsSelectedUserNameFromQRCode:(id)arg1;
- (id)m_nsSelectedTruthNameFromQRCode;
- (void)setM_nsSelectedTruthNameFromQRCode:(id)arg1;
- (id)m_nsControlTransationID;
- (void)setM_nsControlTransationID:(id)arg1;
- (id)m_nsCurrentUserName;
- (void)setM_nsCurrentUserName:(id)arg1;
- (id)m_nsTranferMoneyString;
- (void)setM_nsTranferMoneyString:(id)arg1;
- (id)m_nsTransferID;
- (void)setM_nsTransferID:(id)arg1;
- (id)nsTransferExtMoney;
- (void)setNsTransferExtMoney:(id)arg1;
- (unsigned long long)m_uiTransferInvalidTime;
- (void)setM_uiTransferInvalidTime:(unsigned long long)arg1;
- (unsigned int)m_uiEffectiveDate;
- (void)setM_uiEffectiveDate:(unsigned int)arg1;
- (id)m_oWCPayTransferPrepayRequestStruct;
- (void)setM_oWCPayTransferPrepayRequestStruct:(id)arg1;
- (id)m_arrFacingReceiveMoneyPayer;
- (void)setM_arrFacingReceiveMoneyPayer:(id)arg1;
- (unsigned int)m_uiStepInFacingReceiveViewTimestamp;
- (void)setM_uiStepInFacingReceiveViewTimestamp:(unsigned int)arg1;
- (long long)m_llFixedAmountReceiveMoneyTotalMoney;
- (void)setM_llFixedAmountReceiveMoneyTotalMoney:(long long)arg1;
- (id)m_nsFixedAmountReceiveMoneyDesc;
- (void)setM_nsFixedAmountReceiveMoneyDesc:(id)arg1;
- (int)m_enWCPayFacingReceiveMoneyScene;
- (void)setM_enWCPayFacingReceiveMoneyScene:(int)arg1;
- (id)m_nsFacingPaidID;
- (void)setM_nsFacingPaidID:(id)arg1;
- (id)m_nsTransferMoneySuccessMsgContent;
- (void)setM_nsTransferMoneySuccessMsgContent:(id)arg1;
- (id)m_c2c_sender_title;
- (void)setM_c2c_sender_title:(id)arg1;
- (id)m_c2c_receiver_title;
- (void)setM_c2c_receiver_title:(id)arg1;
- (id)m_c2c_des;
- (void)setM_c2c_des:(id)arg1;
- (id)m_c2c_sender_des;
- (void)setM_c2c_sender_des:(id)arg1;
- (id)m_c2c_receiver_des;
- (void)setM_c2c_receiver_des:(id)arg1;
- (id)m_c2c_url;
- (void)setM_c2c_url:(id)arg1;
- (id)m_c2c_templateId;
- (void)setM_c2c_templateId:(id)arg1;
- (unsigned int)m_c2c_sceneId;
- (void)setM_c2c_sceneId:(unsigned int)arg1;
- (id)nsWapPayUrl;
- (void)setNsWapPayUrl:(id)arg1;
- (id)m_oPaidError;
- (void)setM_oPaidError:(id)arg1;
- (id)m_structSelectedResetBalanceTelCardInfo;
- (void)setM_structSelectedResetBalanceTelCardInfo:(id)arg1;
- (id)m_structSelectedResetBalanceTelCardType;
- (void)setM_structSelectedResetBalanceTelCardType:(id)arg1;
- (BOOL)bNeedInputNewTelToResetBalanceTel;
- (void)setBNeedInputNewTelToResetBalanceTel:(BOOL)arg1;
- (id)nsTransferRemark;
- (void)setNsTransferRemark:(id)arg1;
- (id)m_nsInterruptDesc;
- (void)setM_nsInterruptDesc:(id)arg1;
- (unsigned int)m_uiHasUnarriveMoney;
- (void)setM_uiHasUnarriveMoney:(unsigned int)arg1;
- (id)m_loanEntryInfo;
- (void)setM_loanEntryInfo:(id)arg1;
- (id)m_loanJsApiToken;
- (void)setM_loanJsApiToken:(id)arg1;
- (unsigned int)m_uiChargeFee;
- (void)setM_uiChargeFee:(unsigned int)arg1;
- (unsigned int)m_uiAccFee;
- (void)setM_uiAccFee:(unsigned int)arg1;
- (unsigned int)m_uiFeeLimit;
- (void)setM_uiFeeLimit:(unsigned int)arg1;
- (unsigned int)m_uiRemainFee;
- (void)setM_uiRemainFee:(unsigned int)arg1;
- (unsigned int)m_uiExceedFee;
- (void)setM_uiExceedFee:(unsigned int)arg1;
- (id)m_nsChargeRate;
- (void)setM_nsChargeRate:(id)arg1;
- (id)m_nsTransferInterruptChargeDesc;
- (void)setM_nsTransferInterruptChargeDesc:(id)arg1;
- (unsigned int)m_uiUsedFee;
- (void)setM_uiUsedFee:(unsigned int)arg1;
- (BOOL)m_isShowCharge;
- (void)setM_isShowCharge:(BOOL)arg1;
- (BOOL)m_isSender;
- (void)setM_isSender:(BOOL)arg1;
- (BOOL)m_isOpenIM;
- (void)setM_isOpenIM:(BOOL)arg1;
- (unsigned long long)m_subChannelId;
- (void)setM_subChannelId:(unsigned long long)arg1;
- (id)m_nsChargeDesc;
- (void)setM_nsChargeDesc:(id)arg1;
- (id)m_nsChargeShortDesc;
- (void)setM_nsChargeShortDesc:(id)arg1;
- (unsigned int)m_uiShortRemainFee;
- (void)setM_uiShortRemainFee:(unsigned int)arg1;
- (unsigned int)m_uiPayChannel;
- (void)setM_uiPayChannel:(unsigned int)arg1;
- (long long)m_uiPayEntry;
- (void)setM_uiPayEntry:(long long)arg1;
- (unsigned int)m_uiRealnameActionFlag;
- (void)setM_uiRealnameActionFlag:(unsigned int)arg1;
- (id)m_nsRealnameToken;
- (void)setM_nsRealnameToken:(id)arg1;
- (id)m_walletInfo;
- (void)setM_walletInfo:(id)arg1;
- (id)m_arrAvailableWalletInfo;
- (void)setM_arrAvailableWalletInfo:(id)arg1;
- (id)m_dicBanners;
- (void)setM_dicBanners:(id)arg1;
- (id)m_nsTransferReceiverTrueName;
- (void)setM_nsTransferReceiverTrueName:(id)arg1;
- (BOOL)isAutoDeduct;
- (void)setIsAutoDeduct:(BOOL)arg1;
- (id)realnameInfo;
- (void)setRealnameInfo:(id)arg1;
- (long long)realnameScene;
- (void)setRealnameScene:(long long)arg1;
- (id)m_arrBalanceNotice;
- (void)setM_arrBalanceNotice:(id)arg1;
- (id)m_arrFetchNotice;
- (void)setM_arrFetchNotice:(id)arg1;
- (unsigned int)m_pay_msg_type;
- (void)setM_pay_msg_type:(unsigned int)arg1;
- (id)m_payMenuArrayInfo;
- (void)setM_payMenuArrayInfo:(id)arg1;
- (id)nsCardHolderCreValidTime;
- (void)setNsCardHolderCreValidTime:(id)arg1;
- (id)nsCardHolderCreEffectTime;
- (void)setNsCardHolderCreEffectTime:(id)arg1;
- (id)nsCardHolderRenewalTime;
- (void)setNsCardHolderRenewalTime:(id)arg1;
- (id)nsCardHolderBirthDay;
- (void)setNsCardHolderBirthDay:(id)arg1;
- (id)gender;
- (void)setGender:(id)arg1;
- (id)nsAdministrationAddress;
- (void)setNsAdministrationAddress:(id)arg1;
- (id)m_structLqtInfo;
- (void)setM_structLqtInfo:(id)arg1;
- (id)m_billEntryInfo;
- (void)setM_billEntryInfo:(id)arg1;
- (id)m_structFetchInfo;
- (void)setM_structFetchInfo:(id)arg1;
- (BOOL)bIsSmsVerifyAddCard;
- (void)setBIsSmsVerifyAddCard:(BOOL)arg1;
- (id)offlinePayCardIcons;
- (void)setOfflinePayCardIcons:(id)arg1;
- (id)fixedAmountCollectionData;
- (void)setFixedAmountCollectionData:(id)arg1;
- (int)m_enWCPayFacingReceiveMoneyRegion;
- (void)setM_enWCPayFacingReceiveMoneyRegion:(int)arg1;
- (id)m_nsFacingReceivePayerDesc;
- (void)setM_nsFacingReceivePayerDesc:(id)arg1;
- (BOOL)m_bTouchIDAuthOrder;
- (void)setM_bTouchIDAuthOrder:(BOOL)arg1;
- (unsigned int)m_uiWeAppEnterScene;
- (void)setM_uiWeAppEnterScene:(unsigned int)arg1;
- (id)m_nsWeAppCookie;
- (void)setM_nsWeAppCookie:(id)arg1;
- (BOOL)m_realnameIsMinorBindcard;
- (void)setM_realnameIsMinorBindcard:(BOOL)arg1;
- (BOOL)m_blockUseCaseStopWhenAddCardSuccess;
- (void)setM_blockUseCaseStopWhenAddCardSuccess:(BOOL)arg1;
- (double)expiredTimeToPopOfflinePayForCard;
- (void)setExpiredTimeToPopOfflinePayForCard:(double)arg1;
- (id /* block */)offlinePayReturnBlock;
- (void)setOfflinePayReturnBlock:(id /* block */)arg1;
- (id)shareCardStatDic;
- (void)setShareCardStatDic:(id)arg1;
- (unsigned int)m_uiFetchChargeFee;
- (void)setM_uiFetchChargeFee:(unsigned int)arg1;
- (id)m_nsFetchChargeWording;
- (void)setM_nsFetchChargeWording:(id)arg1;
- (long long)realnameGuideType;
- (void)setRealnameGuideType:(long long)arg1;
- (id)fetchCasher;
- (void)setFetchCasher:(id)arg1;
- (unsigned int)scanScene;
- (void)setScanScene:(unsigned int)arg1;
- (id)placeorderSucSign;
- (void)setPlaceorderSucSign:(id)arg1;
- (id)paySucExtend;
- (void)setPaySucExtend:(id)arg1;
- (id)f2fId;
- (void)setF2fId:(id)arg1;
- (id)transId;
- (void)setTransId:(id)arg1;
- (unsigned int)f2fAmount;
- (void)setF2fAmount:(unsigned int)arg1;
- (id)exposureInfo;
- (void)setExposureInfo:(id)arg1;
- (id)securityData;
- (void)setSecurityData:(id)arg1;
- (id)m_uifaceTofaceName;
- (void)setM_uifaceTofaceName:(id)arg1;
- (id)m_uifaceTofaceDescTitle;
- (void)setM_uifaceTofaceDescTitle:(id)arg1;
- (id)m_uifaceTofacePayerDescTitle;
- (void)setM_uifaceTofacePayerDescTitle:(id)arg1;
- (id)groupPayData;
- (void)setGroupPayData:(id)arg1;
- (id)m_uiBalanceMobile;
- (void)setM_uiBalanceMobile:(id)arg1;
- (id)balanceMobileInfos;
- (void)setBalanceMobileInfos:(id)arg1;
- (id)selectedBalanceMobileInfo;
- (void)setSelectedBalanceMobileInfo:(id)arg1;
- (id)banPayMobileInfoResponse;
- (void)setBanPayMobileInfoResponse:(id)arg1;
- (id)cre_tail;
- (void)setCre_tail:(id)arg1;
- (long long)messageVerifyType;
- (void)setMessageVerifyType:(long long)arg1;
- (id)autoDeductSelectedCardInfo;
- (void)setAutoDeductSelectedCardInfo:(id)arg1;
- (unsigned long long)startTrackTimeInMs;
- (void)setStartTrackTimeInMs:(unsigned long long)arg1;
- (BOOL)openChangeRealName;
- (void)setOpenChangeRealName:(BOOL)arg1;
- (unsigned long long)payOrReceiveFromScene;
- (void)setPayOrReceiveFromScene:(unsigned long long)arg1;
- (id)getUserExInfoCgiResponse;
- (void)setGetUserExInfoCgiResponse:(id)arg1;
- (id)setUserExInfoRequest;
- (void)setSetUserExInfoRequest:(id)arg1;
- (id)m_payApplyNewCardInfo;
- (void)setM_payApplyNewCardInfo:(id)arg1;
- (id)m_oSelectedMessageWrap;
- (void)setM_oSelectedMessageWrap:(id)arg1;
- (unsigned int)m_walletType;
- (void)setM_walletType:(unsigned int)arg1;
- (id)m_feeType;
- (void)setM_feeType:(id)arg1;
- (unsigned long long)m_transferTotalAmount;
- (void)setM_transferTotalAmount:(unsigned long long)arg1;
- (id)m_receiverNickName;
- (void)setM_receiverNickName:(id)arg1;
- (id)m_receiverUserName;
- (void)setM_receiverUserName:(id)arg1;
- (id)m_payerNickname;
- (void)setM_payerNickname:(id)arg1;
- (int)m_currency;
- (void)setM_currency:(int)arg1;
- (id)m_f2fRecevieMultipleWalletTitle;
- (void)setM_f2fRecevieMultipleWalletTitle:(id)arg1;
- (id)m_f2fReceiveBottomDetailTitle;
- (void)setM_f2fReceiveBottomDetailTitle:(id)arg1;
- (id)m_bannerNotice;
- (void)setM_bannerNotice:(id)arg1;
- (id)m_tarnsferPayerUserName;
- (void)setM_tarnsferPayerUserName:(id)arg1;
- (BOOL)bIsBindNewCardToPay;
- (void)setBIsBindNewCardToPay:(BOOL)arg1;
- (id)lqtControlData;
- (void)setLqtControlData:(id)arg1;
- (id)bank_priority;
- (void)setBank_priority:(id)arg1;
- (id)delayTransferWordingResponse;
- (void)setDelayTransferWordingResponse:(id)arg1;
- (unsigned long long)delayTransferViewEntryScene;
- (void)setDelayTransferViewEntryScene:(unsigned long long)arg1;
- (id)m_nsF2FMaskTrueName;
- (void)setM_nsF2FMaskTrueName:(id)arg1;
- (id)m_nsF2FReciverQRCode;
- (void)setM_nsF2FReciverQRCode:(id)arg1;
- (id)m_f2fRightBarItems;
- (void)setM_f2fRightBarItems:(id)arg1;
- (id)m_f2fBottomDetailItem;
- (void)setM_f2fBottomDetailItem:(id)arg1;
- (id)m_nsBottomIconUrl;
- (void)setM_nsBottomIconUrl:(id)arg1;
- (BOOL)m_isShowArrow;
- (void)setM_isShowArrow:(BOOL)arg1;
- (id)m_f2fSaveQRCodeResp;
- (void)setM_f2fSaveQRCodeResp:(id)arg1;
- (id)m_nsMsgSvrId;
- (void)setM_nsMsgSvrId:(id)arg1;
- (id)mchQRCodeData;
- (void)setMchQRCodeData:(id)arg1;
- (id)bizF2FControlData;
- (void)setBizF2FControlData:(id)arg1;
- (id)m_f2fControlData;
- (void)setM_f2fControlData:(id)arg1;
- (id)eCardControlData;
- (void)setECardControlData:(id)arg1;
- (id)qrcodeRewardData;
- (void)setQrcodeRewardData:(id)arg1;
- (id)transferMoneyData;
- (void)setTransferMoneyData:(id)arg1;
- (id)honeyPayData;
- (void)setHoneyPayData:(id)arg1;
- (id)m_transToBankCardData;
- (void)setM_transToBankCardData:(id)arg1;
- (id)m_nsTransToBankBillId;
- (void)setM_nsTransToBankBillId:(id)arg1;
- (id)m_nsT2BCOperationResp;
- (void)setM_nsT2BCOperationResp:(id)arg1;
- (id)m_t2bcQueryDetailResp;
- (void)setM_t2bcQueryDetailResp:(id)arg1;
- (id)retry_pay_info;
- (void)setRetry_pay_info:(id)arg1;
- (BOOL)bIsFreePayment;
- (void)setBIsFreePayment:(BOOL)arg1;
- (id)m_f2fQrcodeResp;
- (void)setM_f2fQrcodeResp:(id)arg1;
- (id)mobile_area;
- (void)setMobile_area:(id)arg1;
- (id)forget_pwd_url;
- (void)setForget_pwd_url:(id)arg1;
- (BOOL)bIsResetPwdFromPayManage;
- (void)setBIsResetPwdFromPayManage:(BOOL)arg1;
- (id)checkNameTitle;
- (void)setCheckNameTitle:(id)arg1;
- (id)checkNameWording;
- (void)setCheckNameWording:(id)arg1;
- (id)checkNameDisplayName;
- (void)setCheckNameDisplayName:(id)arg1;
- (id)checkNameErrorTitle;
- (void)setCheckNameErrorTitle:(id)arg1;
- (id)checkNameErrorContent;
- (void)setCheckNameErrorContent:(id)arg1;
- (id)checkNameSign;
- (void)setCheckNameSign:(id)arg1;
- (unsigned long long)checkNameMessageType;
- (void)setCheckNameMessageType:(unsigned long long)arg1;
- (id)jumpRemindInfo;
- (void)setJumpRemindInfo:(id)arg1;
- (id)planIndexResp;
- (void)setPlanIndexResp:(id)arg1;
- (id)preAddPlanResp;
- (void)setPreAddPlanResp:(id)arg1;
- (id)addPlanData;
- (void)setAddPlanData:(id)arg1;
- (id)selectedPlanItem;
- (void)setSelectedPlanItem:(id)arg1;
- (id)managePlanData;
- (void)setManagePlanData:(id)arg1;
- (id)modifyPlanData;
- (void)setModifyPlanData:(id)arg1;
- (id)lqtFetchActionEntry;
- (void)setLqtFetchActionEntry:(id)arg1;
- (unsigned int)transferReSendMsgFromScene;
- (void)setTransferReSendMsgFromScene:(unsigned int)arg1;
- (id)currentWeAppAppId;
- (void)setCurrentWeAppAppId:(id)arg1;
- (unsigned int)tpaCountry;
- (void)setTpaCountry:(unsigned int)arg1;
- (unsigned int)funclistType;
- (void)setFunclistType:(unsigned int)arg1;
- (id)funcSwitchListResponse;
- (void)setFuncSwitchListResponse:(id)arg1;
- (int)qrcode_level;
- (void)setQrcode_level:(int)arg1;
- (int)fixed_qrcode_level;
- (void)setFixed_qrcode_level:(int)arg1;
- (id)balanceChargeLQTInfo;
- (void)setBalanceChargeLQTInfo:(id)arg1;
- (BOOL)bIsChargedLQTInBalance;
- (void)setBIsChargedLQTInBalance:(BOOL)arg1;
- (long long)patternLockScene;
- (void)setPatternLockScene:(long long)arg1;
- (id)f2fExtendInfo;
- (void)setF2fExtendInfo:(id)arg1;
- (id)selectedTransferChatroomUsername;
- (void)setSelectedTransferChatroomUsername:(id)arg1;
- (unsigned int)pwdEncryptMode;
- (void)setPwdEncryptMode:(unsigned int)arg1;
- (id)merchantPayQRCodeInfoResp;
- (void)setMerchantPayQRCodeInfoResp:(id)arg1;
- (id)merchantPayPlaceOrderResp;
- (void)setMerchantPayPlaceOrderResp:(id)arg1;
- (unsigned long long)merchantPayTotalAmount;
- (void)setMerchantPayTotalAmount:(unsigned long long)arg1;
- (id)merchantPayPayerRemark;
- (void)setMerchantPayPayerRemark:(id)arg1;
- (int)sessionChatType;
- (void)setSessionChatType:(int)arg1;
- (int)sessionSendType;
- (void)setSessionSendType:(int)arg1;
- (id)sessionPaySenderUserName;
- (void)setSessionPaySenderUserName:(id)arg1;
- (id)sessionPaySenderMsgId;
- (void)setSessionPaySenderMsgId:(id)arg1;
- (id)nfcCardType;
- (void)setNfcCardType:(id)arg1;
- (id)nfcCardId;
- (void)setNfcCardId:(id)arg1;
- (id)pkPass;
- (void)setPkPass:(id)arg1;
- (id)nfcCardInfoResponse;
- (void)setNfcCardInfoResponse:(id)arg1;
- (unsigned int)recvChannelType;
- (void)setRecvChannelType:(unsigned int)arg1;
- (id)collectPalmSessionId;
- (void)setCollectPalmSessionId:(id)arg1;
- (unsigned int)palmSideLimit;
- (void)setPalmSideLimit:(unsigned int)arg1;
- (unsigned int)needUploadPalmCgi;
- (void)setNeedUploadPalmCgi:(unsigned int)arg1;
- (unsigned int)needPalmInfo;
- (void)setNeedPalmInfo:(unsigned int)arg1;
- (unsigned int)palmCaptureMode;
- (void)setPalmCaptureMode:(unsigned int)arg1;
- (id)palmSdkConfig;
- (void)setPalmSdkConfig:(id)arg1;
- (BOOL)fromTransCollection;
- (void)setFromTransCollection:(BOOL)arg1;
- (void).cxx_destruct;
@end

