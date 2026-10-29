@interface WeClawBotStatusInfo : NSObject <NSCopying>
{
    NSString * _username; // +0x8
    NSNumber * _onlineStatus; // +0x10
    NSString * _channelVersion; // +0x18
    NSNumber * _updateTime; // +0x20
    NSString * _alertAction; // +0x28
    NSString * _alertBanner; // +0x30
    long long _alertType; // +0x38
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)onlineStatus;
- (void)setOnlineStatus:(id)arg1;
- (id)channelVersion;
- (void)setChannelVersion:(id)arg1;
- (id)updateTime;
- (void)setUpdateTime:(id)arg1;
- (id)alertAction;
- (void)setAlertAction:(id)arg1;
- (id)alertBanner;
- (void)setAlertBanner:(id)arg1;
- (long long)alertType;
- (void)setAlertType:(long long)arg1;
- (void).cxx_destruct;
@end
