@interface FlutterSnsPlatformPermissionSettingsPlugin : NSObject <MMFlutterPlugin, PlatformSnsPermissionSettingsApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)navigateToPermissionRangeSettingsWithError:(id *)arg1;
- (id)snsPrivacyRecentRangeHoursWithError:(id *)arg1;
@end
