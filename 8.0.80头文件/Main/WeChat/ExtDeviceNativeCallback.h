@interface ExtDeviceNativeCallback : NSObject
{
    ExtDeviceNativeDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ExtDeviceNativeDispatcherBridgeObjcImpl *)arg1;
- (void)onOpenTermsAgreementPageComplete:(unsigned long long)arg1;
- (void)onOpenPrivacyAgreementPageComplete:(unsigned long long)arg1;
- (void)onfetchSyncRecordTriggerComplete:(unsigned long long)arg1 enabled:(BOOL)arg2;
@end
