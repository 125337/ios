@interface WCPayAuthenticationPayStatusStruct : NSObject
{
    BOOL m_bPayCompleteFlag; // +0x8
    NSString * m_nsReturnKey; // +0x10
    NSArray * m_naTranscationID; // +0x18
    NSString * nsServiceAppID; // +0x20
    NSString * nsServiceDetail; // +0x28
    NSString * nsServiceAppUserName; // +0x30
    NSString * nsServiceAppLogoUrl; // +0x38
    NSString * nsServiceAppNickName; // +0x40
    NSString * nsServiceAppSubscribeURL; // +0x48
    NSString * nsShareToFriendsURL; // +0x50
    NSString * nsPaidSuccessDetail; // +0x58
    int uiServiceSubscribeStrategy; // +0x60
    WCPayMultiOrderDetail * m_oOrdelStatusDetail; // +0x68
    NSString * nsBindSerial; // +0x70
    NSString * nsCardBankName; // +0x78
    NSString * nsCardBankType; // +0x80
    NSString * nsCardNumber; // +0x88
    NSString * nsJumpToSafariUrl; // +0x90
    NSString * nsWapPayJumpUrl; // +0x98
    WCPayRealnameGuideInfo * realnameInfo; // +0xa0
    BOOL _is_jsapi_close_page; // +0xa8
    unsigned int _is_clear_failure; // +0xac
    WCPayRealnameGuideInfo * realnameGuideInfo; // +0xb0
    NSString * _balanceMobile; // +0xb8
    NSString * _balanceHelpUrl; // +0xc0
    WCPayVerifyCreTailInfo * _verify_cre_tail_info; // +0xc8
    WCPayDigitalCertInstallAction * _m_digitalAction; // +0xd0
    WCPaySimpleUserSetPassGuideInfo * _m_simpleUserGuideInfo; // +0xd8
    long long _can_pay_retry; // +0xe0
    WCPayPayResponseRetryInfo * _retry_pay_info; // +0xe8
    NSString * _jsapi_tinyapp_username; // +0xf0
    NSString * _jsapi_tinyapp_path; // +0xf8
}
- (id)m_naTranscationID;
- (void)setM_naTranscationID:(id)arg1;
- (id)m_nsReturnKey;
- (void)setM_nsReturnKey:(id)arg1;
- (BOOL)m_bPayCompleteFlag;
- (void)setM_bPayCompleteFlag:(BOOL)arg1;
- (id)nsServiceAppID;
- (void)setNsServiceAppID:(id)arg1;
- (id)nsServiceDetail;
- (void)setNsServiceDetail:(id)arg1;
- (id)nsServiceAppUserName;
- (void)setNsServiceAppUserName:(id)arg1;
- (id)nsServiceAppLogoUrl;
- (void)setNsServiceAppLogoUrl:(id)arg1;
- (id)nsServiceAppNickName;
- (void)setNsServiceAppNickName:(id)arg1;
- (id)nsServiceAppSubscribeURL;
- (void)setNsServiceAppSubscribeURL:(id)arg1;
- (int)uiServiceSubscribeStrategy;
- (void)setUiServiceSubscribeStrategy:(int)arg1;
- (id)m_oOrdelStatusDetail;
- (void)setM_oOrdelStatusDetail:(id)arg1;
- (id)nsBindSerial;
- (void)setNsBindSerial:(id)arg1;
- (id)nsShareToFriendsURL;
- (void)setNsShareToFriendsURL:(id)arg1;
- (id)nsPaidSuccessDetail;
- (void)setNsPaidSuccessDetail:(id)arg1;
- (id)nsCardBankName;
- (void)setNsCardBankName:(id)arg1;
- (id)nsCardBankType;
- (void)setNsCardBankType:(id)arg1;
- (id)nsCardNumber;
- (void)setNsCardNumber:(id)arg1;
- (id)nsJumpToSafariUrl;
- (void)setNsJumpToSafariUrl:(id)arg1;
- (id)nsWapPayJumpUrl;
- (void)setNsWapPayJumpUrl:(id)arg1;
- (id)realnameGuideInfo;
- (void)setRealnameGuideInfo:(id)arg1;
- (id)balanceMobile;
- (void)setBalanceMobile:(id)arg1;
- (id)balanceHelpUrl;
- (void)setBalanceHelpUrl:(id)arg1;
- (id)verify_cre_tail_info;
- (void)setVerify_cre_tail_info:(id)arg1;
- (id)m_digitalAction;
- (void)setM_digitalAction:(id)arg1;
- (id)m_simpleUserGuideInfo;
- (void)setM_simpleUserGuideInfo:(id)arg1;
- (long long)can_pay_retry;
- (void)setCan_pay_retry:(long long)arg1;
- (id)retry_pay_info;
- (void)setRetry_pay_info:(id)arg1;
- (BOOL)is_jsapi_close_page;
- (void)setIs_jsapi_close_page:(BOOL)arg1;
- (id)jsapi_tinyapp_username;
- (void)setJsapi_tinyapp_username:(id)arg1;
- (id)jsapi_tinyapp_path;
- (void)setJsapi_tinyapp_path:(id)arg1;
- (unsigned int)is_clear_failure;
- (void)setIs_clear_failure:(unsigned int)arg1;
- (void).cxx_destruct;
@end

