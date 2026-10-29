@interface WCAdTimeLineRequestAdPassThroughInfo : NSObject
{
    BOOL _isUnReadJump; // +0x8
    int _topFeedPos; // +0xc
    NSString * _ua; // +0x10
    NSString * _sessionKeyAd; // +0x18
    NSString * _supportCapability; // +0x20
    NSString * _commonDeviceId; // +0x28
    WCAdPassThroughPullRecords * _adPullRecords; // +0x30
    NSString * _vangoghLibVersion; // +0x38
    WCAdTimelineAdLocalRecords * _localAdRecords; // +0x40
    NSArray * _sessionRecords; // +0x48
    NSString * _topFeedSnsId; // +0x50
    NSString * _timelineSessionId; // +0x58
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
- (id)sessionRecords;
- (void)setSessionRecords:(id)arg1;
- (id)topFeedSnsId;
- (void)setTopFeedSnsId:(id)arg1;
- (int)topFeedPos;
- (void)setTopFeedPos:(int)arg1;
- (id)timelineSessionId;
- (void)setTimelineSessionId:(id)arg1;
- (BOOL)isUnReadJump;
- (void)setIsUnReadJump:(BOOL)arg1;
- (void).cxx_destruct;
@end
