@interface MMWebViewPlugin_LimitedMode : MMWebViewPluginBase <MMLimitedModeAuthorizationUtilLogicDelegate>
{
    MMWebLimitedModeUrlData * _outlinkBlockedInitUrlData; // +0x8
    unsigned long long _lastRequestActionTime; // +0x10
    MMLimitedModeAuthorizationUtilLogic * _requestAuthLogic; // +0x18
    MMWebLimitedModeUrlData * _requestUrlData; // +0x20
}
+ (BOOL)isOutlinkUrlTemporaryAuthorizationWithUrl:(id)arg1;
+ (BOOL)isBrandUrlTemporaryAuthorizationWithUrl:(id)arg1;
+ (BOOL)isLimitedModeOn;
+ (BOOL)isOutlinkTypeLimited;
+ (BOOL)isBrandTypeLimited;
+ (BOOL)isBrandTypeUrl:(id)arg1;
+ (BOOL)isAcceptOutlinkUrl:(id)arg1;
+ (BOOL)isAcceptBrandUrl:(id)arg1;
+ (id)outlinkKeyWithUrl:(id)arg1;
+ (id)brandKeyWithUrl:(id)arg1;
+ (BOOL)checkAccessAuthorizationHadApproveWithBizKey:(id)arg1 bizType:(long long)arg2;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (id)getOutlinkInitUrl;
- (BOOL)canGetTemporaryAuthorizationInfos:(id)arg1 errDesc:(id *)arg2;
- (id)getTemporaryAurhorizationInfos;
- (BOOL)requestTemporaryAurhorizationWithUrlData:(id)arg1 type:(id)arg2 errDesc:(id *)arg3;
- (void)updateoutlinkBlockedInitUrlData;
- (BOOL)hasOutlinkBlockedInitUrlData;
- (void)didCutomerPageVerifySuccess;
- (void)didCutomerPageClose;
- (void)tryPopCurrentWebViewAndPushExtraWebView:(id)arg1;
- (id)outlinkBlockedInitUrlData;
- (void)setOutlinkBlockedInitUrlData:(id)arg1;
- (unsigned long long)lastRequestActionTime;
- (void)setLastRequestActionTime:(unsigned long long)arg1;
- (id)requestAuthLogic;
- (void)setRequestAuthLogic:(id)arg1;
- (id)requestUrlData;
- (void)setRequestUrlData:(id)arg1;
- (void).cxx_destruct;
@end
