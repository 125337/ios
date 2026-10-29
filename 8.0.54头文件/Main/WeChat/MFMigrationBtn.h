@interface MFMigrationBtn : MFBannerBtn <MFBanner>
{
    unsigned long long _notifyCode; // +0x8
    unsigned long long _currentSessionCount; // +0x10
    unsigned long long _totalSessionCount; // +0x18
    NSString * _lastImageName; // +0x20
    NSString * _speedString; // +0x28
    unsigned long long m_currentRecvSize; // +0x30
    unsigned long long m_totalSize; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupFlowTextView;
- (void)setupImage;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)setCurrentSessionCount:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)setCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)setSpeed:(float)arg1;
- (void).cxx_destruct;
@end

