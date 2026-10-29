@interface MFMigrationBtn : MFBannerBtn <MFBanner>
{
    unsigned long long _notifyCode; // +0x8
    unsigned long long _currentSessionCount; // +0x10
    unsigned long long _totalSessionCount; // +0x18
    NSString * _lastImageName; // +0x20
    NSString * _speedString; // +0x28
    unsigned long long m_currentRecvSize; // +0x30
    unsigned long long m_totalSize; // +0x38
    unsigned int _importRemainSecond; // +0x40
    BOOL _isShowImportTips; // +0x44
    BOOL _isMigrationOptEnable; // +0x45
    NSString * _leftTimeString; // +0x48
    id /* block */ _onCloseIconClick; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onArrowImageClick:(id)arg1;
- (void)showImportTipsWithCloseCallback:(id /* block */)arg1;
- (void)hideImportTips;
- (void)setupResumeImportReportWithSessionId:(id)arg1;
- (void)resetMigrationReport;
- (void)setupFlowTextView;
- (void)setupImage;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)setCurrentSessionCount:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)setCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)setSpeed:(float)arg1;
- (void)setSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)setImportRemainSecond:(unsigned int)arg1;
- (BOOL)isShowImportTips;
- (void)setIsShowImportTips:(BOOL)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (BOOL)isMigrationOptEnable;
- (void)setIsMigrationOptEnable:(BOOL)arg1;
- (id /* block */)onCloseIconClick;
- (void)setOnCloseIconClick:(id /* block */)arg1;
- (void).cxx_destruct;
@end
