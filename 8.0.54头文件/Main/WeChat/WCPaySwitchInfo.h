@interface WCPaySwitchInfo : NSObject <NSCoding>
{
    BOOL m_bSupportOfflinePay; // +0x8
    BOOL m_bShowedFetch; // +0x9
    BOOL m_bUsedBalance; // +0xa
    BOOL m_bSupportBarCodeOfflinePay; // +0xb
    BOOL m_bSupportQRCodeOfflinePay; // +0xc
    BOOL m_bUsedMainCard; // +0xd
    BOOL m_bCanSwitchWallet; // +0xe
    BOOL m_bEnableCardDetailUrl; // +0xf
    BOOL m_bEnableReportLocation; // +0x10
    BOOL m_bIsHideBalanceValue; // +0x11
    BOOL m_bIsBalanceDetailShowRealnameGuide; // +0x12
    BOOL m_bIsShowOrderHistoryH5; // +0x13
    BOOL m_bSupportTouchID; // +0x14
    BOOL m_bEnableReportSSID; // +0x15
    BOOL _m_bConfirmTouchAuth; // +0x16
    BOOL _m_bLCTBalance; // +0x17
    BOOL _m_bShowBalanceValue; // +0x18
    BOOL _m_bSupportBindCardOpt; // +0x19
    BOOL _m_bEnableNewPayManage; // +0x1a
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)m_bSupportOfflinePay;
- (void)setM_bSupportOfflinePay:(BOOL)arg1;
- (BOOL)m_bShowedFetch;
- (void)setM_bShowedFetch:(BOOL)arg1;
- (BOOL)m_bUsedBalance;
- (void)setM_bUsedBalance:(BOOL)arg1;
- (BOOL)m_bSupportBarCodeOfflinePay;
- (void)setM_bSupportBarCodeOfflinePay:(BOOL)arg1;
- (BOOL)m_bSupportQRCodeOfflinePay;
- (void)setM_bSupportQRCodeOfflinePay:(BOOL)arg1;
- (BOOL)m_bUsedMainCard;
- (void)setM_bUsedMainCard:(BOOL)arg1;
- (BOOL)m_bCanSwitchWallet;
- (void)setM_bCanSwitchWallet:(BOOL)arg1;
- (BOOL)m_bEnableCardDetailUrl;
- (void)setM_bEnableCardDetailUrl:(BOOL)arg1;
- (BOOL)m_bEnableReportLocation;
- (void)setM_bEnableReportLocation:(BOOL)arg1;
- (BOOL)m_bIsHideBalanceValue;
- (void)setM_bIsHideBalanceValue:(BOOL)arg1;
- (BOOL)m_bIsBalanceDetailShowRealnameGuide;
- (void)setM_bIsBalanceDetailShowRealnameGuide:(BOOL)arg1;
- (BOOL)m_bIsShowOrderHistoryH5;
- (void)setM_bIsShowOrderHistoryH5:(BOOL)arg1;
- (BOOL)m_bSupportTouchID;
- (void)setM_bSupportTouchID:(BOOL)arg1;
- (BOOL)m_bEnableReportSSID;
- (void)setM_bEnableReportSSID:(BOOL)arg1;
- (BOOL)m_bConfirmTouchAuth;
- (void)setM_bConfirmTouchAuth:(BOOL)arg1;
- (BOOL)m_bLCTBalance;
- (void)setM_bLCTBalance:(BOOL)arg1;
- (BOOL)m_bShowBalanceValue;
- (void)setM_bShowBalanceValue:(BOOL)arg1;
- (BOOL)m_bSupportBindCardOpt;
- (void)setM_bSupportBindCardOpt:(BOOL)arg1;
- (BOOL)m_bEnableNewPayManage;
- (void)setM_bEnableNewPayManage:(BOOL)arg1;
@end

