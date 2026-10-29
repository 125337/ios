@interface WCPayBindCardInfo : NSObject <NSCoding>
{
    NSString * m_cardBankName; // +0x8
    NSString * m_cardBankType; // +0x10
    NSString * m_cardType; // +0x18
    NSString * m_cardTypeName; // +0x20
    NSString * m_creditTypeID; // +0x28
    unsigned int m_cardBankTag; // +0x30
    NSString * m_cardNumber; // +0x38
    NSString * m_cardTail; // +0x40
    NSString * m_cardLogoUrl; // +0x48
    NSString * m_cardHolder; // +0x50
    NSString * m_bindSerial; // +0x58
    NSString * m_bindPhoneNumber; // +0x60
    NSString * m_bankPhone; // +0x68
    WCPayCredInfo * m_oWCPayCredInfo; // +0x70
    unsigned int m_virtualSingalTranscationLimit; // +0x78
    unsigned int m_virtualDayTranscationLimit; // +0x7c
    unsigned int m_physicalSignalTranscationLimit; // +0x80
    unsigned int m_physicalDayTranscationLimit; // +0x84
    BOOL m_bankFlag; // +0x88
    BOOL m_expiredFlag; // +0x89
    BOOL m_bNeedMoneyToResetPwd; // +0x8a
    BOOL m_bCanReturnMoneyAfterResetPwd; // +0x8b
    BOOL m_bIsSupportOfflinePay; // +0x8c
    BOOL m_bIsWXCredit; // +0x8d
    NSString * m_nsForbidWord; // +0x90
    NSString * m_nsRepayUrl; // +0x98
    NSDate * m_ndFetchPreArriveTime; // +0xa0
    NSString * m_nsFetchPreArriveTime; // +0xa8
    unsigned int m_uiCvvLength; // +0xb0
    NSString * m_nsAvailableSavedDetail; // +0xb8
    NSString * m_nsTips; // +0xc0
    NSString * m_nsCardDetailUrl; // +0xc8
    BOOL _m_bISFullFetchDirect; // +0xd0
    BOOL _is_hightlight_pre_arrive_time_wording; // +0xd1
    BOOL _support_lqt_turn_in; // +0xd2
    BOOL _support_lqt_turn_out; // +0xd3
    BOOL _support_foreign_mobile; // +0xd4
    unsigned int _m_uiFetchChargeRate; // +0xd8
    unsigned int _m_uiFullFetchChargeFee; // +0xdc
    unsigned int _card_min_charge_fee; // +0xe0
    int _default_card_state; // +0xe4
    int _fetch_limit_recommend_action; // +0xe8
    NSString * m_arriveType; // +0xf0
    NSString * m_nsOfflinePayNotSupportWord; // +0xf8
    NSString * _m_nsFetchChargeInfo; // +0x100
    NSString * _m_forbid_title; // +0x108
    NSString * _m_forbid_url; // +0x110
    NSString * _m_nsBottomWording; // +0x118
    HoneyPayCardInfo * _qmfCardInfo; // +0x120
    FQFCardInfo * _fqf_info; // +0x128
    NSString * _card_state_name; // +0x130
    NSString * _card_fetch_wording; // +0x138
    NSString * _tinyapp_username; // +0x140
    NSString * _tinyapp_path; // +0x148
    PromptInfo * _promptInfo; // +0x150
    NSString * _fetch_limit_title; // +0x158
    NSString * _fetch_limit_popup_title; // +0x160
    NSString * _fetch_limit_popup_wording; // +0x168
    NSArray * _fetch_limit_array; // +0x170
    NSString * _fetch_limit_recommend_wording; // +0x178
    NSString * _fetch_limit_recommend_bank_logo; // +0x180
    NSString * _fetch_limit_recommend_action_wording; // +0x188
    NSArray * _fetch_limit_recommend_bind_serial; // +0x190
    WCPayBindCardYHTInfo * _yht_info; // +0x198
    WCPayBindCardYHTInfoMinimchInfo * _minimch_info; // +0x1a0
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateInvalid:(id)arg1;
- (BOOL)isBalance;
- (BOOL)isHoneyPay;
- (id)honeyPayCardString;
- (BOOL)isFQF;
- (BOOL)canSetAsOfflinePayDefaultCard;
- (BOOL)isYHTCard;
- (BOOL)isMinimchCard;
- (BOOL)m_bankFlag;
- (void)setM_bankFlag:(BOOL)arg1;
- (id)m_cardBankName;
- (void)setM_cardBankName:(id)arg1;
- (id)m_cardBankType;
- (void)setM_cardBankType:(id)arg1;
- (id)m_cardTypeName;
- (void)setM_cardTypeName:(id)arg1;
- (unsigned int)m_cardBankTag;
- (void)setM_cardBankTag:(unsigned int)arg1;
- (id)m_cardHolder;
- (void)setM_cardHolder:(id)arg1;
- (id)m_cardLogoUrl;
- (void)setM_cardLogoUrl:(id)arg1;
- (id)m_creditTypeID;
- (void)setM_creditTypeID:(id)arg1;
- (id)m_cardTail;
- (void)setM_cardTail:(id)arg1;
- (id)m_cardNumber;
- (void)setM_cardNumber:(id)arg1;
- (id)m_cardType;
- (void)setM_cardType:(id)arg1;
- (id)m_bindPhoneNumber;
- (void)setM_bindPhoneNumber:(id)arg1;
- (id)m_bindSerial;
- (void)setM_bindSerial:(id)arg1;
- (id)m_oWCPayCredInfo;
- (void)setM_oWCPayCredInfo:(id)arg1;
- (id)m_bankPhone;
- (void)setM_bankPhone:(id)arg1;
- (unsigned int)m_physicalDayTranscationLimit;
- (void)setM_physicalDayTranscationLimit:(unsigned int)arg1;
- (unsigned int)m_physicalSignalTranscationLimit;
- (void)setM_physicalSignalTranscationLimit:(unsigned int)arg1;
- (unsigned int)m_virtualDayTranscationLimit;
- (void)setM_virtualDayTranscationLimit:(unsigned int)arg1;
- (unsigned int)m_virtualSingalTranscationLimit;
- (void)setM_virtualSingalTranscationLimit:(unsigned int)arg1;
- (BOOL)m_expiredFlag;
- (void)setM_expiredFlag:(BOOL)arg1;
- (BOOL)m_bNeedMoneyToResetPwd;
- (void)setM_bNeedMoneyToResetPwd:(BOOL)arg1;
- (BOOL)m_bCanReturnMoneyAfterResetPwd;
- (void)setM_bCanReturnMoneyAfterResetPwd:(BOOL)arg1;
- (BOOL)m_bIsSupportOfflinePay;
- (void)setM_bIsSupportOfflinePay:(BOOL)arg1;
- (id)m_nsForbidWord;
- (void)setM_nsForbidWord:(id)arg1;
- (BOOL)m_bIsWXCredit;
- (void)setM_bIsWXCredit:(BOOL)arg1;
- (id)m_nsRepayUrl;
- (void)setM_nsRepayUrl:(id)arg1;
- (id)m_ndFetchPreArriveTime;
- (void)setM_ndFetchPreArriveTime:(id)arg1;
- (unsigned int)m_uiCvvLength;
- (void)setM_uiCvvLength:(unsigned int)arg1;
- (id)m_nsAvailableSavedDetail;
- (void)setM_nsAvailableSavedDetail:(id)arg1;
- (id)m_arriveType;
- (void)setM_arriveType:(id)arg1;
- (id)m_nsOfflinePayNotSupportWord;
- (void)setM_nsOfflinePayNotSupportWord:(id)arg1;
- (id)m_nsFetchPreArriveTime;
- (void)setM_nsFetchPreArriveTime:(id)arg1;
- (id)m_nsTips;
- (void)setM_nsTips:(id)arg1;
- (id)m_nsCardDetailUrl;
- (void)setM_nsCardDetailUrl:(id)arg1;
- (unsigned int)m_uiFetchChargeRate;
- (void)setM_uiFetchChargeRate:(unsigned int)arg1;
- (id)m_nsFetchChargeInfo;
- (void)setM_nsFetchChargeInfo:(id)arg1;
- (unsigned int)m_uiFullFetchChargeFee;
- (void)setM_uiFullFetchChargeFee:(unsigned int)arg1;
- (BOOL)m_bISFullFetchDirect;
- (void)setM_bISFullFetchDirect:(BOOL)arg1;
- (id)m_forbid_title;
- (void)setM_forbid_title:(id)arg1;
- (id)m_forbid_url;
- (void)setM_forbid_url:(id)arg1;
- (id)m_nsBottomWording;
- (void)setM_nsBottomWording:(id)arg1;
- (BOOL)is_hightlight_pre_arrive_time_wording;
- (void)setIs_hightlight_pre_arrive_time_wording:(BOOL)arg1;
- (BOOL)support_lqt_turn_in;
- (void)setSupport_lqt_turn_in:(BOOL)arg1;
- (BOOL)support_lqt_turn_out;
- (void)setSupport_lqt_turn_out:(BOOL)arg1;
- (id)qmfCardInfo;
- (void)setQmfCardInfo:(id)arg1;
- (id)fqf_info;
- (void)setFqf_info:(id)arg1;
- (BOOL)support_foreign_mobile;
- (void)setSupport_foreign_mobile:(BOOL)arg1;
- (id)card_state_name;
- (void)setCard_state_name:(id)arg1;
- (id)card_fetch_wording;
- (void)setCard_fetch_wording:(id)arg1;
- (unsigned int)card_min_charge_fee;
- (void)setCard_min_charge_fee:(unsigned int)arg1;
- (id)tinyapp_username;
- (void)setTinyapp_username:(id)arg1;
- (id)tinyapp_path;
- (void)setTinyapp_path:(id)arg1;
- (id)promptInfo;
- (void)setPromptInfo:(id)arg1;
- (int)default_card_state;
- (void)setDefault_card_state:(int)arg1;
- (id)fetch_limit_title;
- (void)setFetch_limit_title:(id)arg1;
- (id)fetch_limit_popup_title;
- (void)setFetch_limit_popup_title:(id)arg1;
- (id)fetch_limit_popup_wording;
- (void)setFetch_limit_popup_wording:(id)arg1;
- (id)fetch_limit_array;
- (void)setFetch_limit_array:(id)arg1;
- (id)fetch_limit_recommend_wording;
- (void)setFetch_limit_recommend_wording:(id)arg1;
- (id)fetch_limit_recommend_bank_logo;
- (void)setFetch_limit_recommend_bank_logo:(id)arg1;
- (int)fetch_limit_recommend_action;
- (void)setFetch_limit_recommend_action:(int)arg1;
- (id)fetch_limit_recommend_action_wording;
- (void)setFetch_limit_recommend_action_wording:(id)arg1;
- (id)fetch_limit_recommend_bind_serial;
- (void)setFetch_limit_recommend_bind_serial:(id)arg1;
- (id)yht_info;
- (void)setYht_info:(id)arg1;
- (id)minimch_info;
- (void)setMinimch_info:(id)arg1;
- (void).cxx_destruct;
@end
