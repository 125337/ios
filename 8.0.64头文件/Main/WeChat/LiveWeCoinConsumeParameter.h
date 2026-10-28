@interface LiveWeCoinConsumeParameter : NSObject
{
    NSNumber * _businessId; // +0x8
    LiveWeCoinConsumeModeBox * _consumeMode; // +0x10
    NSString * _sessionId; // +0x18
    FlutterStandardTypedData * _prepareWecoinConsumeBuff; // +0x20
    NSString * _productTitle; // +0x28
    NSString * _productTitleInsufficient; // +0x30
    NSNumber * _productWecoinPrice; // +0x38
    NSString * _productWecoinRealPrice; // +0x40
    NSArray * _consumeTipsWording; // +0x48
    NSString * _consumeButtonTitle; // +0x50
    NSString * _consumeButtonTitleInsufficient; // +0x58
    NSNumber * _agreementSelected; // +0x60
    NSString * _agreementString; // +0x68
}
+ (id)makeWithBusinessId:(id)arg1 consumeMode:(id)arg2 sessionId:(id)arg3 prepareWecoinConsumeBuff:(id)arg4 productTitle:(id)arg5 productTitleInsufficient:(id)arg6 productWecoinPrice:(id)arg7 productWecoinRealPrice:(id)arg8 consumeTipsWording:(id)arg9 consumeButtonTitle:(id)arg10 consumeButtonTitleInsufficient:(id)arg11 agreementSelected:(id)arg12 agreementString:(id)arg13;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)consumeMode;
- (void)setConsumeMode:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)prepareWecoinConsumeBuff;
- (void)setPrepareWecoinConsumeBuff:(id)arg1;
- (id)productTitle;
- (void)setProductTitle:(id)arg1;
- (id)productTitleInsufficient;
- (void)setProductTitleInsufficient:(id)arg1;
- (id)productWecoinPrice;
- (void)setProductWecoinPrice:(id)arg1;
- (id)productWecoinRealPrice;
- (void)setProductWecoinRealPrice:(id)arg1;
- (id)consumeTipsWording;
- (void)setConsumeTipsWording:(id)arg1;
- (id)consumeButtonTitle;
- (void)setConsumeButtonTitle:(id)arg1;
- (id)consumeButtonTitleInsufficient;
- (void)setConsumeButtonTitleInsufficient:(id)arg1;
- (id)agreementSelected;
- (void)setAgreementSelected:(id)arg1;
- (id)agreementString;
- (void)setAgreementString:(id)arg1;
- (void).cxx_destruct;
@end
