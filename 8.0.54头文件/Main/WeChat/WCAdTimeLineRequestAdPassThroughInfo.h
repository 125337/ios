@interface WCAdTimeLineRequestAdPassThroughInfo : NSObject
{
    NSString * _ua; // +0x8
    NSString * _sessionKeyAd; // +0x10
    NSString * _supportCapability; // +0x18
    NSString * _commonDeviceId; // +0x20
    WCAdPassThroughPullRecords * _adPullRecords; // +0x28
    NSString * _vangoghLibVersion; // +0x30
    WCAdTimelineAdLocalRecords * _localAdRecords; // +0x38
}
- (id)ua;
- (void)setUa:(id)arg1;
- (id)sessionKeyAd;
- (void)setSessionKeyAd:(id)arg1;
- (id)supportCapability;
- (void)setSupportCapability:(id)arg1;
- (id)commonDeviceId;
- (void)setCommonDeviceId:(id)arg1;
- (id)adPullRecords;
- (void)setAdPullRecords:(id)arg1;
- (id)vangoghLibVersion;
- (void)setVangoghLibVersion:(id)arg1;
- (id)localAdRecords;
- (void)setLocalAdRecords:(id)arg1;
- (void).cxx_destruct;
@end

