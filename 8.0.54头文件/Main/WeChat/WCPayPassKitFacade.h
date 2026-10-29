@interface WCPayPassKitFacade : NSObject
{
    id <WCPayPassKitFacadeDelegate> _delegate; // +0x8
}
+ (id)GenCurrentDeviceInfo;
- (id)getAllLocalSimplePasses:(BOOL)arg1;
- (long long)getNFCCardTransitBalance:(id)arg1;
- (id)getPKPass:(id)arg1;
- (id)allPasses;
- (BOOL)isPassLibraryAvailable;
- (void)checkIssueCardPermissionWithSpecificCardType:(id)arg1 appId:(id)arg2 iOSVersion:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

