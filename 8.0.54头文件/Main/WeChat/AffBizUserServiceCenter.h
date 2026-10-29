@interface AffBizUserServiceCenter : MMUserService <MMServiceProtocol>
{
    id <CommonAffServiceCenter> _serviceCenter; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)serviceCenter;
- (void)setServiceCenter:(id)arg1;
- (void).cxx_destruct;
@end

