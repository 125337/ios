@interface WxpayLiteAppGateDecisionInput : NSObject
{
    BOOL _kitAvailable; // +0x8
    NSString * _appId; // +0x10
    NSDictionary * _useKitGray; // +0x18
    NSString * _runtimeProfile; // +0x20
    NSString * _unsupported; // +0x28
}
- (id)init;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)useKitGray;
- (void)setUseKitGray:(id)arg1;
- (id)runtimeProfile;
- (void)setRuntimeProfile:(id)arg1;
- (id)unsupported;
- (void)setUnsupported:(id)arg1;
- (BOOL)kitAvailable;
- (void)setKitAvailable:(BOOL)arg1;
- (void).cxx_destruct;
@end
