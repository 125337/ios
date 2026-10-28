@interface WCPayLQTControlData : NSObject
{
    BOOL _autoJumpChargeSettingVC; // +0x8
    BOOL _showOpenSuccToast; // +0x9
    BOOL _showKeyboard; // +0xa
    BOOL _checkPurchaseFromLqGuide; // +0xb
    unsigned int _lqtCurrentTransMoney; // +0xc
    unsigned int _outerEntranceType; // +0x10
    unsigned long long _lqtMoneyScene; // +0x18
    QryUsrFundDetailRes * _userDetailFundResp; // +0x20
    QryPurchaseResultRes * _qrypurchaseResultResp; // +0x28
    OnClickRedeemRes * _clickRedeemResp; // +0x30
    OnClickPurchaseRes * _clickPurchaseResp; // +0x38
    RedeemFundRes * _redeemFundResp; // +0x40
    QrySettingResp * _chargeSettingResp; // +0x48
    NSString * _ecardtype; // +0x50
    NSString * _extraData; // +0x58
    long long _needOpenLqb; // +0x60
    NSString * _outerPurchaseBindSerial; // +0x68
    NSString * _outerTransMoney; // +0x70
}
- (id)getCurrentAccountTypeName;
- (unsigned long long)lqtMoneyScene;
- (void)setLqtMoneyScene:(unsigned long long)arg1;
- (unsigned int)lqtCurrentTransMoney;
- (void)setLqtCurrentTransMoney:(unsigned int)arg1;
- (id)userDetailFundResp;
- (void)setUserDetailFundResp:(id)arg1;
- (id)qrypurchaseResultResp;
- (void)setQrypurchaseResultResp:(id)arg1;
- (id)clickRedeemResp;
- (void)setClickRedeemResp:(id)arg1;
- (id)clickPurchaseResp;
- (void)setClickPurchaseResp:(id)arg1;
- (id)redeemFundResp;
- (void)setRedeemFundResp:(id)arg1;
- (id)chargeSettingResp;
- (void)setChargeSettingResp:(id)arg1;
- (id)ecardtype;
- (void)setEcardtype:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (long long)needOpenLqb;
- (void)setNeedOpenLqb:(long long)arg1;
- (BOOL)autoJumpChargeSettingVC;
- (void)setAutoJumpChargeSettingVC:(BOOL)arg1;
- (BOOL)showOpenSuccToast;
- (void)setShowOpenSuccToast:(BOOL)arg1;
- (id)outerPurchaseBindSerial;
- (void)setOuterPurchaseBindSerial:(id)arg1;
- (id)outerTransMoney;
- (void)setOuterTransMoney:(id)arg1;
- (unsigned int)outerEntranceType;
- (void)setOuterEntranceType:(unsigned int)arg1;
- (BOOL)showKeyboard;
- (void)setShowKeyboard:(BOOL)arg1;
- (BOOL)checkPurchaseFromLqGuide;
- (void)setCheckPurchaseFromLqGuide:(BOOL)arg1;
- (void).cxx_destruct;
@end
