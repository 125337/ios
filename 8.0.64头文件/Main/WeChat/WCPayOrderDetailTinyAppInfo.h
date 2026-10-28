@interface WCPayOrderDetailTinyAppInfo : NSObject
{
    unsigned int _tinyAppVersion; // +0x8
    unsigned int _sendRecordId; // +0xc
    unsigned int _userRecordId; // +0x10
    NSString * _tinyAppName; // +0x18
    NSString * _tinyAppLogo; // +0x20
    NSString * _tinyAppDesc; // +0x28
    NSString * _tinyAppUserName; // +0x30
    NSString * _tinyAppPath; // +0x38
    NSString * _tinyAppBtnText; // +0x40
    unsigned long long _activityId; // +0x48
    unsigned long long _activityType; // +0x50
    unsigned long long _awardId; // +0x58
    unsigned long long _activityMchId; // +0x60
}
- (id)tinyAppName;
- (void)setTinyAppName:(id)arg1;
- (id)tinyAppLogo;
- (void)setTinyAppLogo:(id)arg1;
- (id)tinyAppDesc;
- (void)setTinyAppDesc:(id)arg1;
- (id)tinyAppUserName;
- (void)setTinyAppUserName:(id)arg1;
- (id)tinyAppPath;
- (void)setTinyAppPath:(id)arg1;
- (unsigned int)tinyAppVersion;
- (void)setTinyAppVersion:(unsigned int)arg1;
- (id)tinyAppBtnText;
- (void)setTinyAppBtnText:(id)arg1;
- (unsigned long long)activityId;
- (void)setActivityId:(unsigned long long)arg1;
- (unsigned long long)activityType;
- (void)setActivityType:(unsigned long long)arg1;
- (unsigned long long)awardId;
- (void)setAwardId:(unsigned long long)arg1;
- (unsigned int)sendRecordId;
- (void)setSendRecordId:(unsigned int)arg1;
- (unsigned int)userRecordId;
- (void)setUserRecordId:(unsigned int)arg1;
- (unsigned long long)activityMchId;
- (void)setActivityMchId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
