@interface StorageRawCleanViewController : MMUIViewController <WCLongCacheCleanExt>
{
    float _cleanProgress; // +0x70
    float _estimatedTimeMins; // +0x74
    UIImageView * _iconView; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _desLabel; // +0x88
    UILabel * _estimateTimeLabel; // +0x90
    UIButton * _bottomButton; // +0x98
    MMProgressView * _progressView; // +0xa0
    UILabel * _progressLabel; // +0xa8
    unsigned long long _cleanState; // +0xb0
    unsigned long long _curSize; // +0xb8
    unsigned long long _totalSize; // +0xc0
}
- (id)navigationBarBackgroundColor;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)refreshView;
- (void)setupViews;
- (void)showProgress;
- (void)onPressStop;
- (void)onReturn;
- (void)onRawCleanStateChange;
- (void)onRawCleanCleanProgress:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)desLabel;
- (void)setDesLabel:(id)arg1;
- (id)estimateTimeLabel;
- (void)setEstimateTimeLabel:(id)arg1;
- (id)bottomButton;
- (void)setBottomButton:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (unsigned long long)cleanState;
- (void)setCleanState:(unsigned long long)arg1;
- (float)cleanProgress;
- (void)setCleanProgress:(float)arg1;
- (float)estimatedTimeMins;
- (void)setEstimatedTimeMins:(float)arg1;
- (unsigned long long)curSize;
- (void)setCurSize:(unsigned long long)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
