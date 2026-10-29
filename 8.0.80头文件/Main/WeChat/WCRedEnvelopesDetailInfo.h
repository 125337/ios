@interface WCRedEnvelopesDetailInfo : NSObject
{
    unsigned long long m_enWCRedEnvelopesType; // +0x8
    unsigned long long m_enWCRedEnvelopesKind; // +0x10
    unsigned long long m_enWCRedEnvelopesStatus; // +0x18
    unsigned long long m_enWCRedEnvelopesUserReceiveStatus; // +0x20
    BOOL m_bIsSender; // +0x28
    BOOL m_bHasMoreReceiver; // +0x29
    BOOL m_bCanShareHB; // +0x2a
    NSString * m_nsStatusMessage; // +0x30
    NSString * m_nsGameMessage; // +0x38
    NSString * m_nsWishing; // +0x40
    NSString * m_nsPagName; // +0x48
    NSString * m_nsVideoUrl; // +0x50
    NSString * m_nsVideoThumbUrl; // +0x58
    NSString * m_nsVerifyInfo; // +0x60
    NSString * m_nsWishKeyWord; // +0x68
    unsigned int m_videoWidth; // +0x70
    unsigned int m_videoHeight; // +0x74
    NSString * m_nsSendUserName; // +0x78
    NSString * m_nsSendNickName; // +0x80
    NSString * m_nsSendHeadImg; // +0x88
    NSString * m_nsSendId; // +0x90
    NSString * m_nsAdMessage; // +0x98
    NSString * m_nsAdUrl; // +0xa0
    NSString * m_nsHeadTitle; // +0xa8
    long long m_lAmount; // +0xb0
    long long m_lRecNum; // +0xb8
    long long m_lRecAmount; // +0xc0
    long long m_lTotalNum; // +0xc8
    long long m_lTotalAmount; // +0xd0
    NSString * m_nsReceiveId; // +0xd8
    BOOL m_bHasWriteThanks; // +0xe0
    BOOL m_bAllowJumpToBalance; // +0xe1
    NSString * m_nsJumpBalanceDesc; // +0xe8
    NSMutableArray * m_arrReceiveList; // +0xf0
    NSString * m_nsOpenTicket; // +0xf8
    BOOL m_bReceived; // +0x100
    NSString * m_nsWaterMarkUrl; // +0x108
    NSMutableArray * m_arrOperationInfoList; // +0x110
    BOOL m_bCanAtomic; // +0x118
    NSData * m_sendKeyData; // +0x120
    BOOL m_bShownOpHeadInfo; // +0x128
    NSString * m_nsHeaderMaskImageUrl; // +0x130
    BOOL m_bHasFocused; // +0x138
    BOOL m_bCheckFlag; // +0x139
    NSString * m_nsFocusedMsg; // +0x140
    NSString * m_nsAppUsrName; // +0x148
    NSString * m_shareHintMess; // +0x150
    unsigned int m_localResId; // +0x158
    NSString * m_nsContextUrl; // +0x160
    NSString * m_nsProcessContent; // +0x168
    NSString * m_nsChangeUrl; // +0x170
    NSString * m_nsAdSightPath; // +0x178
    NSString * m_nsAdImagePath; // +0x180
    unsigned int m_uiAdUrlFlag; // +0x188
    unsigned int m_uiAdH5ResId; // +0x18c
    BOOL m_bShouldShowCheckBox; // +0x190
    BOOL m_bShouldHideWordingForVip; // +0x191
    BOOL _m_bPicSwitch; // +0x192
    BOOL _m_bGreetingHBShowEmoticon; // +0x193
    BOOL _notShowRightNavigationItem; // +0x194
    BOOL _enableSetStatus; // +0x195
    unsigned int _jumpChangeType; // +0x198
    unsigned int _expression_type; // +0x19c
    NSString * _m_nsMaskPagName; // +0x1a0
    NSString * _m_nsSendSuffix; // +0x1a8
    NSString * _m_nsVideoUrlWithVoice; // +0x1b0
    NSString * _m_nsVideoThumbUrlWithVoice; // +0x1b8
    NSString * _changeIconUrl; // +0x1c0
    NSString * _miniexpression_statemess; // +0x1c8
    NSString * _expression_md5; // +0x1d0
    long long _showSenderEmoticon; // +0x1d8
    long long _enableAnswerByExpression; // +0x1e0
    long long _enableAnswerBySelfie; // +0x1e8
    NSString * _m_nsForeignAmountDesc; // +0x1f0
    ForeignHbCurrencyTips * _m_currencyTips; // +0x1f8
    NSString * _amount_info_wording; // +0x200
    NSString * _amount_info_routeInfo; // +0x208
}
- (BOOL)needShowOperatingView;
- (unsigned long long)m_enWCRedEnvelopesType;
- (void)setM_enWCRedEnvelopesType:(unsigned long long)arg1;
- (unsigned long long)m_enWCRedEnvelopesKind;
- (void)setM_enWCRedEnvelopesKind:(unsigned long long)arg1;
- (id)m_arrReceiveList;
- (void)setM_arrReceiveList:(id)arg1;
- (BOOL)m_bIsSender;
- (void)setM_bIsSender:(BOOL)arg1;
- (BOOL)m_bHasWriteThanks;
- (void)setM_bHasWriteThanks:(BOOL)arg1;
- (unsigned long long)m_enWCRedEnvelopesStatus;
- (void)setM_enWCRedEnvelopesStatus:(unsigned long long)arg1;
- (unsigned long long)m_enWCRedEnvelopesUserReceiveStatus;
- (void)setM_enWCRedEnvelopesUserReceiveStatus:(unsigned long long)arg1;
- (long long)m_lAmount;
- (void)setM_lAmount:(long long)arg1;
- (long long)m_lRecAmount;
- (void)setM_lRecAmount:(long long)arg1;
- (long long)m_lRecNum;
- (void)setM_lRecNum:(long long)arg1;
- (long long)m_lTotalAmount;
- (void)setM_lTotalAmount:(long long)arg1;
- (long long)m_lTotalNum;
- (void)setM_lTotalNum:(long long)arg1;
- (id)m_nsAdMessage;
- (void)setM_nsAdMessage:(id)arg1;
- (id)m_nsAdUrl;
- (void)setM_nsAdUrl:(id)arg1;
- (id)m_nsGameMessage;
- (void)setM_nsGameMessage:(id)arg1;
- (id)m_nsReceiveId;
- (void)setM_nsReceiveId:(id)arg1;
- (id)m_nsSendUserName;
- (void)setM_nsSendUserName:(id)arg1;
- (id)m_nsSendHeadImg;
- (void)setM_nsSendHeadImg:(id)arg1;
- (id)m_nsSendId;
- (void)setM_nsSendId:(id)arg1;
- (id)m_nsSendNickName;
- (void)setM_nsSendNickName:(id)arg1;
- (id)m_nsStatusMessage;
- (void)setM_nsStatusMessage:(id)arg1;
- (id)m_nsWishing;
- (void)setM_nsWishing:(id)arg1;
- (id)m_nsPagName;
- (void)setM_nsPagName:(id)arg1;
- (id)m_nsVideoUrl;
- (void)setM_nsVideoUrl:(id)arg1;
- (id)m_nsVideoThumbUrl;
- (void)setM_nsVideoThumbUrl:(id)arg1;
- (id)m_nsVerifyInfo;
- (void)setM_nsVerifyInfo:(id)arg1;
- (id)m_nsWishKeyWord;
- (void)setM_nsWishKeyWord:(id)arg1;
- (unsigned int)m_videoWidth;
- (void)setM_videoWidth:(unsigned int)arg1;
- (unsigned int)m_videoHeight;
- (void)setM_videoHeight:(unsigned int)arg1;
- (id)m_nsHeadTitle;
- (void)setM_nsHeadTitle:(id)arg1;
- (BOOL)m_bHasMoreReceiver;
- (void)setM_bHasMoreReceiver:(BOOL)arg1;
- (id)m_nsOpenTicket;
- (void)setM_nsOpenTicket:(id)arg1;
- (BOOL)m_bReceived;
- (void)setM_bReceived:(BOOL)arg1;
- (BOOL)m_bCanShareHB;
- (void)setM_bCanShareHB:(BOOL)arg1;
- (id)m_nsWaterMarkUrl;
- (void)setM_nsWaterMarkUrl:(id)arg1;
- (id)m_arrOperationInfoList;
- (void)setM_arrOperationInfoList:(id)arg1;
- (BOOL)m_bCanAtomic;
- (void)setM_bCanAtomic:(BOOL)arg1;
- (id)m_sendKeyData;
- (void)setM_sendKeyData:(id)arg1;
- (BOOL)m_bShownOpHeadInfo;
- (void)setM_bShownOpHeadInfo:(BOOL)arg1;
- (BOOL)m_bAllowJumpToBalance;
- (void)setM_bAllowJumpToBalance:(BOOL)arg1;
- (id)m_nsJumpBalanceDesc;
- (void)setM_nsJumpBalanceDesc:(id)arg1;
- (id)m_nsHeaderMaskImageUrl;
- (void)setM_nsHeaderMaskImageUrl:(id)arg1;
- (BOOL)m_bHasFocused;
- (void)setM_bHasFocused:(BOOL)arg1;
- (BOOL)m_bCheckFlag;
- (void)setM_bCheckFlag:(BOOL)arg1;
- (id)m_nsFocusedMsg;
- (void)setM_nsFocusedMsg:(id)arg1;
- (id)m_nsAppUsrName;
- (void)setM_nsAppUsrName:(id)arg1;
- (id)m_shareHintMess;
- (void)setM_shareHintMess:(id)arg1;
- (unsigned int)m_localResId;
- (void)setM_localResId:(unsigned int)arg1;
- (id)m_nsContextUrl;
- (void)setM_nsContextUrl:(id)arg1;
- (id)m_nsProcessContent;
- (void)setM_nsProcessContent:(id)arg1;
- (id)m_nsChangeUrl;
- (void)setM_nsChangeUrl:(id)arg1;
- (id)m_nsAdSightPath;
- (void)setM_nsAdSightPath:(id)arg1;
- (id)m_nsAdImagePath;
- (void)setM_nsAdImagePath:(id)arg1;
- (BOOL)m_bShouldHideWordingForVip;
- (void)setM_bShouldHideWordingForVip:(BOOL)arg1;
- (BOOL)m_bShouldShowCheckBox;
- (void)setM_bShouldShowCheckBox:(BOOL)arg1;
- (unsigned int)m_uiAdH5ResId;
- (void)setM_uiAdH5ResId:(unsigned int)arg1;
- (unsigned int)m_uiAdUrlFlag;
- (void)setM_uiAdUrlFlag:(unsigned int)arg1;
- (id)m_nsMaskPagName;
- (void)setM_nsMaskPagName:(id)arg1;
- (id)m_nsSendSuffix;
- (void)setM_nsSendSuffix:(id)arg1;
- (id)m_nsVideoUrlWithVoice;
- (void)setM_nsVideoUrlWithVoice:(id)arg1;
- (id)m_nsVideoThumbUrlWithVoice;
- (void)setM_nsVideoThumbUrlWithVoice:(id)arg1;
- (BOOL)m_bPicSwitch;
- (void)setM_bPicSwitch:(BOOL)arg1;
- (unsigned int)jumpChangeType;
- (void)setJumpChangeType:(unsigned int)arg1;
- (id)changeIconUrl;
- (void)setChangeIconUrl:(id)arg1;
- (BOOL)m_bGreetingHBShowEmoticon;
- (void)setM_bGreetingHBShowEmoticon:(BOOL)arg1;
- (id)miniexpression_statemess;
- (void)setMiniexpression_statemess:(id)arg1;
- (id)expression_md5;
- (void)setExpression_md5:(id)arg1;
- (unsigned int)expression_type;
- (void)setExpression_type:(unsigned int)arg1;
- (long long)showSenderEmoticon;
- (void)setShowSenderEmoticon:(long long)arg1;
- (long long)enableAnswerByExpression;
- (void)setEnableAnswerByExpression:(long long)arg1;
- (long long)enableAnswerBySelfie;
- (void)setEnableAnswerBySelfie:(long long)arg1;
- (BOOL)notShowRightNavigationItem;
- (void)setNotShowRightNavigationItem:(BOOL)arg1;
- (id)m_nsForeignAmountDesc;
- (void)setM_nsForeignAmountDesc:(id)arg1;
- (id)m_currencyTips;
- (void)setM_currencyTips:(id)arg1;
- (BOOL)enableSetStatus;
- (void)setEnableSetStatus:(BOOL)arg1;
- (id)amount_info_wording;
- (void)setAmount_info_wording:(id)arg1;
- (id)amount_info_routeInfo;
- (void)setAmount_info_routeInfo:(id)arg1;
- (void).cxx_destruct;
@end
