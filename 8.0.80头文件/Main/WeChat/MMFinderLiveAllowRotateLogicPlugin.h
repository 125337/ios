@interface MMFinderLiveAllowRotateLogicPlugin : MMLiveTaskBaseFunctionPlugin
{
    BOOL _isAllowRotateInIphone; // +0x8
}
- (void)initializeSdkInfoSupportRotate;
- (void)updateAllowRotateWithLiveInfo:(id)arg1 liveChannelParams:(id)arg2;
- (BOOL)updateAllowRotate:(BOOL)arg1;
- (void)setIsAllowRotateInIphone:(BOOL)arg1;
- (void)onExtFlagExtUpdated;
- (BOOL)extFlagDisableRotate;
- (BOOL)isAllowRotateInIphone;
@end
