@interface AffExtDeviceNativeImpl : NSObject <ExtDeviceNativeBase>
{
    ExtDeviceNativeCallback * _curCallBack; // +0x8
}
+ (void)openWebWithUrl:(id)arg1;
- (void)setCallback:(id)arg1;
- (void)openTermsAgreementPageAsync:(unsigned long long)arg1;
- (void)openPrivacyAgreementPageAsync:(unsigned long long)arg1;
- (BOOL)getSyncRecordTrigger;
- (void)fetchSyncRecordTriggerAsync:(unsigned long long)arg1;
- (id)curCallBack;
- (void)setCurCallBack:(id)arg1;
- (void).cxx_destruct;
@end
