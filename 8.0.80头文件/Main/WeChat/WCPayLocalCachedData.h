@interface WCPayLocalCachedData : NSObject <NSCoding>
{
    BOOL m_bResetMainBindSerial; // +0x8
    NSString * m_nsLastBindSerial; // +0x10
    BOOL m_bShowedBalanceDescriptionTips; // +0x18
    BOOL m_bShowedFaceToFaceTransferViewTips; // +0x19
    BOOL m_bShowedFaceToFaceReceiveMoneyTips; // +0x1a
    NSString * m_nsWCPayOfflinePayLastSelectedCardBindSerial; // +0x20
    NSMutableDictionary * m_arrWXBorrowMoneyItemRedCode; // +0x28
    NSMutableSet * m_setReceivedHBMsgID; // +0x30
    NSMutableSet * m_setReceivedTransferMsgID; // +0x38
    unsigned int m_localBadgeIndex; // +0x40
    NSMutableDictionary * m_dicFunctionVisits; // +0x48
    BOOL m_bShowedChangeWalletTips; // +0x50
    NSMutableDictionary * m_dicBanners; // +0x58
    NSMutableDictionary * m_dicAllSceneLastCard; // +0x60
    BOOL m_bIsShowFetchFirstTips; // +0x68
    NSString * m_nsCardDetailBaseUrl; // +0x70
    BOOL m_bIsAcceptRealnameLicense; // +0x78
    double licenseLastQueryTime; // +0x80
    long long licenseQueryDelaySeconds; // +0x88
    double m_tLBSLastShowTime; // +0x90
    BOOL m_bIsShowOfflinePayTips; // +0x98
    NSString * m_nsBalanceDetailRealnameGuideTitle; // +0xa0
    NSString * m_nsWalletBalanceTitle; // +0xa8
    BOOL _m_bIsShowHKFacingReceiveFirstTips; // +0xb0
    NSMutableSet * m_setGroupPayLaunchRecord; // +0xb8
    NSMutableSet * m_setGroupPayPaySuccessRecord; // +0xc0
    NSString * _m_walletUrl; // +0xc8
    NSMutableArray * _m_receivedHBMsgIDArray; // +0xd0
    NSMutableArray * _m_transferMsgIDArray; // +0xd8
    NSMutableArray * _m_groupPayLaunchRecordArray; // +0xe0
    NSMutableArray * _m_groupPayPaySuccessRecordArray; // +0xe8
    NSMutableArray * _m_synthesizeRecordQueue; // +0xf0
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)m_bResetMainBindSerial;
- (void)setM_bResetMainBindSerial:(BOOL)arg1;
- (id)m_nsLastBindSerial;
- (void)setM_nsLastBindSerial:(id)arg1;
- (BOOL)m_bShowedBalanceDescriptionTips;
- (void)setM_bShowedBalanceDescriptionTips:(BOOL)arg1;
- (BOOL)m_bShowedFaceToFaceReceiveMoneyTips;
- (void)setM_bShowedFaceToFaceReceiveMoneyTips:(BOOL)arg1;
- (BOOL)m_bShowedFaceToFaceTransferViewTips;
- (void)setM_bShowedFaceToFaceTransferViewTips:(BOOL)arg1;
- (id)m_nsWCPayOfflinePayLastSelectedCardBindSerial;
- (void)setM_nsWCPayOfflinePayLastSelectedCardBindSerial:(id)arg1;
- (id)m_arrWXBorrowMoneyItemRedCode;
- (void)setM_arrWXBorrowMoneyItemRedCode:(id)arg1;
- (id)m_setReceivedHBMsgID;
- (void)setM_setReceivedHBMsgID:(id)arg1;
- (id)m_setReceivedTransferMsgID;
- (void)setM_setReceivedTransferMsgID:(id)arg1;
- (unsigned int)m_localBadgeIndex;
- (void)setM_localBadgeIndex:(unsigned int)arg1;
- (id)m_dicFunctionVisits;
- (void)setM_dicFunctionVisits:(id)arg1;
- (BOOL)m_bShowedChangeWalletTips;
- (void)setM_bShowedChangeWalletTips:(BOOL)arg1;
- (id)m_dicBanners;
- (void)setM_dicBanners:(id)arg1;
- (id)m_dicAllSceneLastCard;
- (void)setM_dicAllSceneLastCard:(id)arg1;
- (BOOL)m_bIsShowFetchFirstTips;
- (void)setM_bIsShowFetchFirstTips:(BOOL)arg1;
- (id)m_nsCardDetailBaseUrl;
- (void)setM_nsCardDetailBaseUrl:(id)arg1;
- (BOOL)m_bIsAcceptRealnameLicense;
- (void)setM_bIsAcceptRealnameLicense:(BOOL)arg1;
- (double)licenseLastQueryTime;
- (void)setLicenseLastQueryTime:(double)arg1;
- (long long)licenseQueryDelaySeconds;
- (void)setLicenseQueryDelaySeconds:(long long)arg1;
- (id)m_setGroupPayLaunchRecord;
- (void)setM_setGroupPayLaunchRecord:(id)arg1;
- (id)m_setGroupPayPaySuccessRecord;
- (void)setM_setGroupPayPaySuccessRecord:(id)arg1;
- (double)m_tLBSLastShowTime;
- (void)setM_tLBSLastShowTime:(double)arg1;
- (BOOL)m_bIsShowOfflinePayTips;
- (void)setM_bIsShowOfflinePayTips:(BOOL)arg1;
- (id)m_nsBalanceDetailRealnameGuideTitle;
- (void)setM_nsBalanceDetailRealnameGuideTitle:(id)arg1;
- (id)m_nsWalletBalanceTitle;
- (void)setM_nsWalletBalanceTitle:(id)arg1;
- (id)m_walletUrl;
- (void)setM_walletUrl:(id)arg1;
- (id)m_receivedHBMsgIDArray;
- (void)setM_receivedHBMsgIDArray:(id)arg1;
- (id)m_transferMsgIDArray;
- (void)setM_transferMsgIDArray:(id)arg1;
- (id)m_groupPayLaunchRecordArray;
- (void)setM_groupPayLaunchRecordArray:(id)arg1;
- (id)m_groupPayPaySuccessRecordArray;
- (void)setM_groupPayPaySuccessRecordArray:(id)arg1;
- (id)m_synthesizeRecordQueue;
- (void)setM_synthesizeRecordQueue:(id)arg1;
- (BOOL)m_bIsShowHKFacingReceiveFirstTips;
- (void)setM_bIsShowHKFacingReceiveFirstTips:(BOOL)arg1;
- (void).cxx_destruct;
@end
