@interface WCPayPaidDetailAwardResult : NSObject
{
    unsigned int _retCode; // +0x8
    NSString * _activityIconUrl; // +0x10
    NSString * _activityMainTitle; // +0x18
    NSString * _activitySubTitle; // +0x20
    NSString * _activityBtnTitle; // +0x28
    NSString * _activityUrl; // +0x30
    NSString * _tinyAppName; // +0x38
    NSString * _tinyAppLogo; // +0x40
    NSString * _tinyAppDesc; // +0x48
    NSString * _tinyAppUsername; // +0x50
    NSString * _tinyAppPath; // +0x58
    NSString * _tinyAppBtnText; // +0x60
}
- (id)init;
- (unsigned int)retCode;
- (void)setRetCode:(unsigned int)arg1;
- (id)activityIconUrl;
- (void)setActivityIconUrl:(id)arg1;
- (id)activityMainTitle;
- (void)setActivityMainTitle:(id)arg1;
- (id)activitySubTitle;
- (void)setActivitySubTitle:(id)arg1;
- (id)activityBtnTitle;
- (void)setActivityBtnTitle:(id)arg1;
- (id)activityUrl;
- (void)setActivityUrl:(id)arg1;
- (id)tinyAppName;
- (void)setTinyAppName:(id)arg1;
- (id)tinyAppLogo;
- (void)setTinyAppLogo:(id)arg1;
- (id)tinyAppDesc;
- (void)setTinyAppDesc:(id)arg1;
- (id)tinyAppUsername;
- (void)setTinyAppUsername:(id)arg1;
- (id)tinyAppPath;
- (void)setTinyAppPath:(id)arg1;
- (id)tinyAppBtnText;
- (void)setTinyAppBtnText:(id)arg1;
- (void).cxx_destruct;
@end
