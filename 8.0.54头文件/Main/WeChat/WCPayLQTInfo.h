@interface WCPayLQTInfo : NSObject <NSCoding>
{
    BOOL _bSupportOfflinePay; // +0x8
    int _default_card_state; // +0xc
    NSString * _lqtBankType; // +0x10
    NSString * _lqtBindSerial; // +0x18
    NSString * _lqtBankName; // +0x20
    unsigned long long _lqtTotalBalance; // +0x28
    unsigned long long _lqtAvailBalance; // +0x30
    NSString * _lqtLogoUrl; // +0x38
    NSString * _lqtforbidWord; // +0x40
    NSString * _lqtforbidTitle; // +0x48
    NSString * _lqtforbidUrl; // +0x50
    NSString * _lqtShowWording; // +0x58
    NSString * _lqtForbidId; // +0x60
    NSString * _lqtmobile; // +0x68
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lqtBankType;
- (void)setLqtBankType:(id)arg1;
- (id)lqtBindSerial;
- (void)setLqtBindSerial:(id)arg1;
- (id)lqtBankName;
- (void)setLqtBankName:(id)arg1;
- (unsigned long long)lqtTotalBalance;
- (void)setLqtTotalBalance:(unsigned long long)arg1;
- (unsigned long long)lqtAvailBalance;
- (void)setLqtAvailBalance:(unsigned long long)arg1;
- (id)lqtLogoUrl;
- (void)setLqtLogoUrl:(id)arg1;
- (id)lqtforbidWord;
- (void)setLqtforbidWord:(id)arg1;
- (id)lqtforbidTitle;
- (void)setLqtforbidTitle:(id)arg1;
- (id)lqtforbidUrl;
- (void)setLqtforbidUrl:(id)arg1;
- (id)lqtShowWording;
- (void)setLqtShowWording:(id)arg1;
- (id)lqtForbidId;
- (void)setLqtForbidId:(id)arg1;
- (id)lqtmobile;
- (void)setLqtmobile:(id)arg1;
- (BOOL)bSupportOfflinePay;
- (void)setBSupportOfflinePay:(BOOL)arg1;
- (int)default_card_state;
- (void)setDefault_card_state:(int)arg1;
- (void).cxx_destruct;
@end

