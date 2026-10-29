@interface WeDropSendInitCheckPermissionEvent : WeDropSendEvent <WeDropNetworkExt, WeDropSendCheckPermissionCallback>
{
    BOOL _checking; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)startPermissionCheck;
- (void)onPermissionCheckOK;
- (void)onLocalNetworkPermissionChanged:(BOOL)arg1;
- (void)retryCheckPermission;
- (BOOL)checking;
- (void)setChecking:(BOOL)arg1;
@end
