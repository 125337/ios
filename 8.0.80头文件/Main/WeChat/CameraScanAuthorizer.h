@interface CameraScanAuthorizer : NSObject
{
    id <CameraScanAuthorizerDelegate> _currentDelegate; // +0x8
}
- (void)setCurrentDelegate:(id)arg1;
- (BOOL)requireAuthorize:(id)arg1;
- (void)releaseAuthorize:(id)arg1;
- (BOOL)hasAuthorized:(id)arg1;
- (id)currentDelegate;
- (void).cxx_destruct;
@end
