@interface WCPayNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCPayNetworkHelperDelegate> m_delegate; // +0x8
    NSMutableDictionary * m_dicCGIStartedTime; // +0x10
    NSString * m_nsCurrentControlLogicName; // +0x18
}
+ (id)AuthenKey;
+ (id)QrcodeUseBindQueryKey;
+ (id)CMDIdKeyDicWithSceneIdDic:(id)arg1 InternalDic:(id)arg2;
+ (id)AuthenCMDIdKey;
+ (id)SnsAAAuthenCMDIdKey;
+ (id)SnsAuthenCMDIdKey;
+ (id)SnsTfAuthenCMDIdKey;
+ (id)SnsF2FAuthenCMDIdKey;
+ (id)TsAuthenCMDIdKey;
+ (id)QrcodeUseBindQueryCMDIdKey;
+ (id)SnsQrcodeUseBindQueryCMDIdKey;
+ (id)SnsAAQrcodeUseBindQueryCMDIdKey;
+ (id)SnsTfQrcodeUseBindQueryCMDIdKey;
+ (id)SnsF2FQrcodeUseBindQueryCMDIdKey;
+ (id)TsQrcodeUseBindQueryCMDIdKey;
+ (void)initialize;
+ (void)idkeyCmdReport:(unsigned int)arg1 scene:(unsigned int)arg2 keyName:(id)arg3;
+ (void)idkeyCmdReport:(unsigned int)arg1 scene:(unsigned int)arg2 keyName:(id)arg3 value:(unsigned int)arg4;
+ (void)idkeyCgiReport:(unsigned int)arg1 keyName:(id)arg2;
+ (void)idkeyCgiReport:(unsigned int)arg1 keyName:(id)arg2 value:(unsigned int)arg3;
- (id)init;
- (void)dealloc;
- (void)removeAllObserver;
- (void)performHardCodeCallback:(id)arg1;
- (void)WCToTenpayCommonRequest:(id)arg1 RetryCount:(unsigned int)arg2;
- (void)WCToTenpayCommonRequest:(id)arg1 RetryCount:(unsigned int)arg2 routeInfo:(unsigned char)arg3;
- (void)WCToSnsTenpayCommonRequest:(id)arg1 RetryCount:(unsigned int)arg2;
- (void)WCToTenpayCommonRequest:(id)arg1;
- (void)WCPayIAPOrderHistoryDetailRequest:(id)arg1;
- (void)WCPayGetAppAuthUrl:(id)arg1;
- (void)WCPayGenPrepay:(id)arg1;
- (void)WCPaySubmitMallPrepay:(id)arg1;
- (void)WCPayCheckJSApiAuthority:(id)arg1;
- (void)WCPayQuitQRScanPay:(id)arg1;
- (void)WCPaySubscribeServiceApp:(id)arg1;
- (void)WCPaySetMainBindCard:(id)arg1;
- (void)GetA8KeyLogic:(id)arg1 withUrlStr:(id)arg2;
- (void)WCPayConfirmOfflinePay:(id)arg1 routeInfo:(unsigned char)arg2;
- (void)GetBanPayMobileInfo:(id)arg1;
- (unsigned int)createProtobufEvent:(id)arg1 usePayNewDNS:(BOOL)arg2;
- (void)OnMessageReturnInTenpayCommon:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInGetAppAuthUrl:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInGenPrepay:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInCancelQRPay:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInPaySubscribeServiceApp:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInGetA8KeyLogic:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInMallPay:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInBizIapDetail:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCheckJsapiResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnOfflinePayConfirm:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnSetMainBankCard:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnGetBanPayMobileInfo:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)transformTenpayCGI:(BOOL)arg1 pbCGIWrap:(id)arg2 payScene:(unsigned int)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_nsCurrentControlLogicName;
- (void)setM_nsCurrentControlLogicName:(id)arg1;
- (void).cxx_destruct;
@end
