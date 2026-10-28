@interface WCPayEntrustPayInfo : NSObject
{
    BOOL _isAutoDeduct; // +0x8
    BOOL _isSelectPayWay; // +0x9
    unsigned int _uiDeductShowType; // +0xc
    NSString * _contractTitle; // +0x10
    NSArray * _showInfo; // +0x18
    NSString * _contractUrl; // +0x20
    NSString * _buttonWording; // +0x28
    NSString * _deductRuleWording; // +0x30
    NSString * _openDeductWording; // +0x38
    NSString * _open_deduct_wording_color; // +0x40
}
- (id)contractTitle;
- (void)setContractTitle:(id)arg1;
- (BOOL)isAutoDeduct;
- (void)setIsAutoDeduct:(BOOL)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (id)contractUrl;
- (void)setContractUrl:(id)arg1;
- (BOOL)isSelectPayWay;
- (void)setIsSelectPayWay:(BOOL)arg1;
- (unsigned int)uiDeductShowType;
- (void)setUiDeductShowType:(unsigned int)arg1;
- (id)buttonWording;
- (void)setButtonWording:(id)arg1;
- (id)deductRuleWording;
- (void)setDeductRuleWording:(id)arg1;
- (id)openDeductWording;
- (void)setOpenDeductWording:(id)arg1;
- (id)open_deduct_wording_color;
- (void)setOpen_deduct_wording_color:(id)arg1;
- (void).cxx_destruct;
@end
