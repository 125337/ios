@interface WeixinPayService : NSObject <PreviewContentLogicControllerDelegate, LiteAppDynamicModuleProtocol>
{
    UIViewController * _controller; // +0x8
    LiteAppDynamicModuleCallback * _callback; // +0x10
    NSObject * _hold; // +0x18
    KindaCrtService * _crtService; // +0x20
    WXPLiteAppNetworkService * _networkService; // +0x28
    WXPLiteAppBankCardOcrService * _bankOcrService; // +0x30
    WXPLiteAppRealnameService * _realNameService; // +0x38
    WXPLiteAppBiometricVerifyService * _biometricVerifyService; // +0x40
    WXPLiteAppLuckyMoneyPickEnvelopeService * _luckyMoneyPickEnvelopeService; // +0x48
    WXPLiteAppNewyearHbService * _newyearHbService; // +0x50
}
+ (id)liteapp_export_method_async_53;
+ (id)liteapp_export_method_async_54;
+ (id)liteapp_export_method_async_55;
+ (id)liteapp_export_method_async_56;
+ (id)liteapp_export_method_async_57;
+ (id)liteapp_export_method_async_58;
+ (id)liteapp_export_method_async_61;
+ (id)liteapp_export_method_async_62;
+ (id)liteapp_export_method_async_63;
+ (id)liteapp_export_method_async_66;
+ (id)liteapp_export_method_async_69;
+ (id)liteapp_export_method_async_70;
+ (id)liteapp_export_method_async_withbuffer_71_1_NSString;
+ (id)liteapp_export_method_async_withbuffer_72_NSData;
+ (id)liteapp_export_method_async_withbuffer_73_1_WXPLiteAppNetworkResponse;
+ (id)liteapp_export_method_async_75;
+ (id)liteapp_export_method_async_76;
+ (id)liteapp_export_method_async_77;
+ (id)liteapp_export_method_async_78;
+ (id)liteapp_export_method_async_79;
+ (id)liteapp_export_method_async_80;
+ (id)liteapp_export_method_async_81;
+ (id)liteapp_export_method_async_82;
+ (id)liteapp_export_method_async_84;
+ (id)liteapp_export_method_async_85;
- (void)jumpRedPacketEnvelopePreview:(id)arg1;
- (void)onPreviewContentLogicControllerBack;
- (void)startContactSelect:(id)arg1;
- (void)canMakeApplePayPayments;
- (void)requestApplePayPayment:(id)arg1;
- (void)finishApplePayPayment:(id)arg1;
- (void)startKindaUseCase:(id)arg1;
- (void)nativeRoute:(id)arg1;
- (void)startNativeUseCase:(id)arg1;
- (void)startRealNameVerify:(id)arg1;
- (void)startMultiSelectContacts:(id)arg1;
- (id)crtService;
- (void)hasCrt;
- (void)getCrtNo;
- (void)crtSign:(id)arg1 data:(id)arg2;
- (id)networkService;
- (void)getBaseRequest:(int)arg1;
- (void)request:(id)arg1 data:(id)arg2;
- (void)startBankCardScan:(id)arg1;
- (void)startUnderAgeParentVerify:(id)arg1;
- (void)notifyRealNameResult:(id)arg1;
- (void)notifyRealNameCancel;
- (void)supportBioType;
- (void)bioAuthenticate:(id)arg1;
- (void)cancelAuthenticate;
- (void)luckyMoneyPickEnvelope:(id)arg1;
- (void)getNewYearPagPath:(id)arg1;
- (void)previewStateNewYearHb:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)hold;
- (void)setHold:(id)arg1;
- (void)setCrtService:(id)arg1;
- (void)setNetworkService:(id)arg1;
- (id)bankOcrService;
- (void)setBankOcrService:(id)arg1;
- (id)realNameService;
- (void)setRealNameService:(id)arg1;
- (id)biometricVerifyService;
- (void)setBiometricVerifyService:(id)arg1;
- (id)luckyMoneyPickEnvelopeService;
- (void)setLuckyMoneyPickEnvelopeService:(id)arg1;
- (id)newyearHbService;
- (void)setNewyearHbService:(id)arg1;
- (void).cxx_destruct;
@end

