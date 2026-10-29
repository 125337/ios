@interface MFBackupBtn : MFBannerBtn <MFBanner>
{
    unsigned long long _notifyCode; // +0x8
    unsigned long long _currentSessionCount; // +0x10
    unsigned long long _totalSessionCount; // +0x18
    NSString * _lastImageName; // +0x20
    NSString * _speedString; // +0x28
    NSString * _leftTimeString; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupFlowTextView;
- (void)setupImage;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)setCurrentSessionCount:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)setSpeed:(float)arg1;
- (void)setLeftTime:(id)arg1;
- (void).cxx_destruct;
@end
