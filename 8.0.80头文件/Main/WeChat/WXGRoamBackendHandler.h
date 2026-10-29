@interface WXGRoamBackendHandler : NSObject <PBMessageObserverDelegate>
{
    BOOL _onAutoTestMode; // +0x8
    id <WXGRoamBackendHandlerDelegate> _delegate; // +0x10
}
+ (id)decodeBase64String:(id)arg1;
+ (id)encodeDataBae64:(id)arg1;
+ (id)channelRespToString:(id)arg1;
- (void)buildRelationSession:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)buildSecureChannel:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)setRoamBackupPackage:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)getRoamBackupPackage:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)getDeviceNetworkInfo:(unsigned long long)arg1;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)mockAutoTestPackage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)onAutoTestMode;
- (void)setOnAutoTestMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
