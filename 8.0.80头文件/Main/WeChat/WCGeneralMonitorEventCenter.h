@interface WCGeneralMonitorEventCenter : NSObject <WCGeneralMonitorExt, WCAccountSwitchProtocol>
+ (id)sharedInstance;
- (void)onInit;
- (void)onClearData;
- (void)onViewDidAppear:(id)arg1;
- (void)onViewDidDisappear:(id)arg1;
- (void)onNearbySubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbySubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
@end
